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
        ListNode *p = head;
        unordered_map <int, int> hashmap;
        while (p != NULL) {
            if (hashmap.count(p -> val) == 0) 
                hashmap.insert(pair<int, int> (p -> val, 1));
            else {
                hashmap[p -> val] ++;
            }
            p = p -> next;
        }
        vector <int> res;
        for (unordered_map <int, int> :: iterator it = hashmap.begin(); it != hashmap.end(); it ++) {
            if (it -> second == 1)
                res.push_back(it -> first);
        }
        if (res.empty())
            return NULL;
        sort(res.begin(), res.end());
        // for (int i = 0; i < res.size(); i ++)
        //     cout << res[i] << ' ';
        ListNode *ret = new ListNode(0), *p1 = new ListNode(0);
        p1 = ret;
        for (int i = 0; i < res.size(); i ++) {
            p1 -> next = new ListNode(0);
            p1 -> next -> val = res[i];
            p1 = p1 -> next;
        }
        return ret -> next;
    }
};
