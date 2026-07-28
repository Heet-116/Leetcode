/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *temp=NULL;
        ListNode *prev=NULL;
        ListNode *curr=NULL;
        ListNode *next=NULL;
        ListNode *beforeLeft=NULL;

        int count = right-left+1;

        temp=head;
        while(left>1){
            beforeLeft=temp;
            temp=temp->next;
            left--;
        }
        curr=temp;
        while(count>=1){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count--;
        }
        if(beforeLeft != NULL)
            beforeLeft->next = prev;
        else
            head= prev;
        temp->next=curr;

        return head;
    }
};