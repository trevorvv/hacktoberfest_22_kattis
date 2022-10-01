class Solution {
public:
    ListNode *reverseList(ListNode *head) {
        if (head == NULL)
            return NULL;
        if (head->next == NULL)
            return head;
        ListNode *previous = head;
        ListNode *curr = head->next;
        head->next = NULL;
        while (curr->next) {
            ListNode *next = curr->next;
            curr->next = previous;
            previous = curr;
            curr = next;
        }
        curr->next = previous;
        return curr;
    }
};
