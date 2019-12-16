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
        ListNode *p = new ListNode(0);
        p = head;
        int len = 0;
        while (p != NULL) {
            len ++;
            p = p -> next;
        }
        
        int k = len - n;
        if (k == 0)
            return head -> next;
        
        p = head;

        if (k == 1) {
            ListNode *temp = new ListNode(0);
            temp = head -> next -> next;
            p -> next = temp;
            return head;

        }
            
        
        for (int i = 1; i < k; i++) {
            p = p -> next;
        }
        ListNode *temp = new ListNode(0);
        temp = p -> next -> next;
        p -> next = temp;
        return head;
        
        
        
    }
};