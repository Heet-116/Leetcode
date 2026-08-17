/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t1=headA;
        ListNode *t2=headB;
        ListNode *temp=headA;
        ListNode *tempA=headA;
        ListNode *tempB=headB;
        int n1=0,n2=0;
        while(temp!=NULL){
            n1++;
            temp=temp->next;
        }
        temp=headB;
        while(temp!=NULL){
            n2++;
            temp=temp->next;
        }
        if(n1-n2>0){
            while(n1-n2!=0){
                tempA=tempA->next;
                n1--;
            }
        }
        else if(n2-n1>0){
            while(n2-n1!=0){
                tempB=tempB->next;
                n2--;
            }
        }
        if(tempA->val==tempB->val && tempA==tempB){
            return tempA;
        }
        while(tempA->next!=NULL && tempB->next!=NULL){
            if(tempA->next==tempB->next && tempA->next->val==tempB->next->val){
                return tempA->next;
            }
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return NULL;
    }
};