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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL) 
            return l2;
        if (l2 == NULL)
            return l1;
        ListNode *res = new ListNode(0), *p1 = new ListNode(0), *p2 = new ListNode(0), 
        *temp, *p = new ListNode(0);
        p1 = l1;
        p2 = l2;
        p = res;
        
        while (p1 != NULL && p2 != NULL) {
            int val;
            if (p1 -> val >= p2 -> val) {
                val = p2 -> val;
                p2 = p2 -> next;
            }
            else {
                val = p1 -> val;
                p1 = p1 -> next;
            }
            // cout << val << ' ';
            temp = new ListNode(val);
            p -> next = temp;
            p = p -> next;
            
        }
        
        while (p1 != NULL) {
            // p2 == NULL
            int val = p1 -> val;
            temp = new ListNode(val);
            p -> next = temp;
            p = p -> next;
            p1 = p1 -> next;
        }
        while (p2 != NULL) {
            // p1 == NULL
            int val = p2 -> val;
            temp = new ListNode(val);
            p -> next = temp;
            p = p -> next;
            p2 = p2 -> next;
        }
        
        return res -> next;
        
        
    }
};