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
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL || head -> next == NULL || head -> next -> next == NULL)
            return NULL;
      
        ListNode *slow = new ListNode(0), *fast = new ListNode(0);
        slow = head; fast = head;
        do {
            slow = slow -> next;
            fast = fast -> next -> next;
            if (fast -> next == NULL || fast -> next -> next == NULL)
                break;
        } while (slow != fast);
        
        if (slow != fast)
            return NULL;
        ListNode *p1 = new ListNode(0), *p2 = new ListNode(0);
        p1 = head;
        p2 = slow;
        while (p1 != p2) {
            p1 = p1 -> next;
            p2 = p2 -> next;
        }
        return p1;
    }
};
