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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL)
            return head;
        ListNode *p = new ListNode(0);
        p = head;
        // only one node
        if (head -> next == NULL)
            return head;
        
        // only two nodes
        else if (head -> next -> next == NULL) {
            ListNode * temp = new ListNode(0);
            temp = p -> next;
            temp -> next = p;
            p -> next = NULL;
            return temp;
        }
        
        // more than two nodes
        ListNode *previous = new ListNode(0);

        while (p -> next != NULL) {
            // at the beginning
            if (p == head) {
                ListNode *tmp = new ListNode(0);
                tmp = p -> next;
                p -> next = tmp -> next;
                tmp -> next = p;
                previous = tmp -> next;
                // cout << previous -> val;
                p = p -> next;
                head = tmp;
                
                continue;
            }
//             cout << p -> val << endl;
//             cout << previous -> val << endl;
            
            ListNode *tmp = new ListNode(0);
            tmp = p -> next;
            p -> next = tmp -> next;
            tmp -> next = previous -> next;
            previous -> next = tmp;
            if (p -> next == NULL)
                break;
            p = p -> next;
            previous = tmp -> next;
            
        }
        
        // p is the last node
        return head;
        
    }
};