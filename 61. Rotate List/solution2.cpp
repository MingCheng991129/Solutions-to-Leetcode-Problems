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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head)
            return NULL;
        ListNode *p = new ListNode(0);
        p = head;
        int len = 0;
        while (p != NULL) {
            p = p -> next;
            len ++;
        }
        while (k >= len)
            k -= len;
        if (k == 0)
            return head;
        p = new ListNode(0);
        p = head;
        for (int i = 0; i < k; i ++)
            p = p -> next;
        ListNode * p1 = new ListNode(0);
        p1 = head;
        while (p -> next != NULL) {
            p = p -> next;
            p1 = p1 -> next;
        }
        p -> next = new ListNode(0);
        p -> next = head;
        ListNode * res = new ListNode(0);
        res = p1 -> next;
        p1 -> next = NULL;
        return res;
    }
};
