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
    void deleteNode(ListNode* node) {
        ListNode *temp=NULL;
        ListNode* prev = NULL;
        while(node!=NULL && node->next!=NULL){
            prev=node;
            temp=node->next;
            node->val=temp->val;
            node=node->next;
        }
        prev->next=NULL;
        delete node;
    }
};