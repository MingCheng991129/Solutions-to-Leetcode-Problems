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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL)
            return NULL;
        int i = 0;
        ListNode * p1 = new ListNode(0), *p2 = new ListNode(0);
        p1 = head; p2 = head;
        for (i = 0; i < n; i ++) {
            if (p1 -> next == NULL)
                break;
            p1 = p1 -> next;
        }
        if (i < n - 1)
            return NULL;
        if (i == n - 1) {
            return head -> next;
        }
        while (p1 -> next != NULL) {
            p1 = p1 -> next;
            p2 = p2 -> next;
        }
        p2 -> next = p2 -> next -> next;
        return head;
    }
};
