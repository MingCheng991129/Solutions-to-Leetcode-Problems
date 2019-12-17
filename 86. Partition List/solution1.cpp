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
    ListNode* partition(ListNode* head, int x) {
        if (head == NULL)
            return head;
        ListNode *res1 = new ListNode(0), *res2 = new ListNode(0);
        ListNode *p1 = new ListNode(0), *p2 = new ListNode(0);
        p1 = res1; p2 = res2;
        ListNode *p = new ListNode(0);
        p = head;
        
        while (p != NULL) {
            ListNode *temp;
            if (p -> val < x) {
                temp = new ListNode(p -> val);
                p1 -> next = new ListNode(0);
                p1 -> next = temp;
                p1 = p1 -> next;
            }
            else {
                temp = new ListNode(p -> val);
                p2 -> next = new ListNode(0);
                p2 -> next = temp;
                p2 = p2 -> next;
            }
            p = p -> next;
        }
        
        p1 -> next = res2 -> next;
        return res1 -> next;
        
    }
};