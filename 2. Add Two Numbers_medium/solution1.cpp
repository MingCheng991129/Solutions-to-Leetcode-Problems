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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        ListNode *p1, *p2, *p, *temp;
        p1 = new ListNode(0); p2 = new ListNode(0);
        p1 = l1; p2 = l2;
        
        int carry = 0;
        p = new ListNode(0);
        res -> next = p; // link p to res
        
        while (p1 != NULL && p2 != NULL) {
            temp = new ListNode(0);
            p -> next = temp;
            int val = p1 -> val + p2 -> val + carry;
            // cout << val;
            carry = 0;

            if (val >= 10) {
                carry = 1;
                val -= 10;
            }
            
            temp -> val = val;
            // p -> next = temp;
            p = p -> next;
            p1 = p1 -> next;
            p2 = p2 -> next;
        }
        
        // cout << res -> next -> next -> val;
        
        
        
        // remenber there is still carry
        while (p1 != NULL) {
            // which means p2 == NULL
            temp = new ListNode(0);
            int val =  p1 -> val + carry;
            carry = 0;

            if (val >= 10) {
                val -= 10;
                carry = 1;
            }
            temp -> val = val;
            p -> next = temp;
            p = p -> next;
            p1 = p1 -> next;
        }
        
        while (p2 != NULL) {
            // which means p1 == NULL
            temp = new ListNode(0);
            int val =  p2 -> val + carry;
            carry = 0;

            if (val >= 10) {
                val -= 10;
                carry = 1;
            }
            temp -> val = val;
            p -> next = temp;
            p = p -> next;
            p2 = p2 -> next;
        }
        
        if (carry == 1) {
            temp = new ListNode(1);
            p -> next = temp;
        }
        
        return res -> next -> next;
        
        
        
    }
};