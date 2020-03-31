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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if (head == NULL)
            return NULL;
        ListNode * res = new ListNode(0), *p = new ListNode(0);
        p = res;
        res -> next = head;
        ListNode* curr = new ListNode(0);
        while (p -> next != NULL) {
            curr = p -> next;
            while (curr -> next != NULL && curr -> next -> val == curr -> val)
                curr = curr -> next;
            if (p -> next == curr) 
                p = p -> next;
            else {
                p -> next = curr -> next; // p -> next = curr: remove the duplicates and remain one
            }
        }
        return res -> next;
        
        
    }
};
