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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (head == NULL || n == m || head -> next == NULL)
            return head;
        // if (head -> next -> next == NULL) {
        //     ListNode *res = new ListNode(head -> next -> val);
        //     res -> next = head;
        //     head -> next = NULL;
        //     return res;
        // }
        ListNode *p = new ListNode(0), *temp = new ListNode(0);
        ListNode *res = new ListNode(0);
        p = head; res = head;
        // m >= 2
        for (int i = 0; i < m - 2; i ++) {
            p = p -> next;
            res = res -> next;
        }
        
        
        if (m == 1) {
            // temp = p;
        // res = res -> next;
        }
        
        else {
            temp = p -> next;
            p = p -> next;
        }
        // cout << p -> val;

        // use an array to store
        int *arr;
        
        arr = new int [n - m + 1];
        for (int j = n - m; j >= 0; j--) {
            arr[j] = p -> val;
            // cout << p -> val << ' ';
            p = p -> next;
           
        }
        // cout << p -> val;
        // convert array to list
        ListNode *tmp = new ListNode(0);
        tmp = temp;
        for (int j = 0; j <= n - m; j ++){
            tmp -> val = arr[j];
            if (j < n - m) {
                tmp -> next = new ListNode(0);
                tmp = tmp -> next; 
            }
            
        }
        // while (temp != NULL) {
        //     cout << temp -> val << ' ';
        //     temp = temp -> next;
        // }
        tmp -> next = new ListNode(0);
        tmp -> next = p;
        res -> next = temp;
        
        // while (head != NULL){
        //     cout << head -> val;
        //     head = head -> next;
        // }
        if (m == 1)
            return head -> next;
        else
            return head;
        
        
    }
};
