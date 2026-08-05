class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;

        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode* removeNodes(ListNode* head) {

        head = reverse(head);

        ListNode* prev = head;      // Previous kept node
        ListNode* temp = head->next;

        int maxi = head->val;

        while (temp != NULL) {

            if (temp->val < maxi) {
                prev->next = temp->next;
                temp = prev->next;
            }
            else {
                maxi = temp->val;
                prev = temp;
                temp = temp->next;
            }
        }

        head = reverse(head);
        return head;
    }
};