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
        ListNode *res = new ListNode(0);

        if (head == NULL)
            return NULL;
        int len = 0;
        ListNode *p = new ListNode(0);
        p = head;
        while (p != NULL) {
            len ++;
            p = p ->next;
        }
        if (len == 1 || k == 0)
            return head;
        // cout << len << endl;
        
        if (len == k)
            return head;
        // len is the length of the list
        while (len <= k)
            k -= len;
        // cout << k;
        
        // cout << k << endl;
        if (k == 0)
            return head;
        
        if (len > k) {
            ListNode *p1 = new ListNode(0), *p2 = new ListNode(0);
            p1 = head;
            p2 = head;
            for (int i = 0; i < k; i++) {
                p2 = p2 -> next;
            }
            while (p2 != NULL) {
                p1 = p1 -> next;
                p2 = p2 -> next;
            }
            // cout << p1 -> val << endl;
            
            ListNode *p = new ListNode(0);
            p = p1;
            res = p;
            while (p -> next != NULL)
                p = p -> next;
            // cout << p -> val << endl;
            p -> next = new ListNode(0);
            // cout << head ->val << endl;
            p -> next = head;
              
        }
        ListNode *tmp = new ListNode(0);
        tmp = res;
        for (int j = 0; j < len - 1; j ++) {
            // cout << tmp -> val << ' ';
            tmp = tmp -> next;
        }
        tmp -> next = NULL;
        
        
        return res;

    }
};