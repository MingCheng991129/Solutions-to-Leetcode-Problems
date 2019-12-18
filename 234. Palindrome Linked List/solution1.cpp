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
    bool isPalindrome(ListNode* head) {
        if (head == NULL)
            return true;
        ListNode *p = new ListNode (0);
        p = head;
        int len = 0;
        while (p != NULL) {
            len ++;
            p = p -> next;
        }
        int *arr;
        arr = new int [len];
        p = head;
        int j = 0;
        for (j = 0; j < len; j++) {
            arr[j] = p -> val;
            p = p -> next;
        }
        int idx_1 = 0, idx_2 = len - 1;
        while (idx_1 < idx_2) {
            if (arr[idx_1] != arr[idx_2]) 
                break;
            idx_1 ++;
            idx_2 --;
        }
        if (idx_1 >= idx_2)
            return true;
        else return false;
    }
};
