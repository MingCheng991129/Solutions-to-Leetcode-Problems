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
    bool hasCycle(ListNode *head) {
        if (head == NULL)
            return false;
        ListNode *p = new ListNode(0);
        p = head;
        bool flag = false;
        while (p != NULL) {
            if (p -> val == INT_MAX) {
                flag = true;
                break;
            }
            p -> val = INT_MAX;
            p = p -> next;
        }
        if (flag == true)
            return true;
        else return false;
    }
};
