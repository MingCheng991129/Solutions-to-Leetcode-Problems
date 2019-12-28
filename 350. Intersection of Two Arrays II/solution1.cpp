class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> arr;
        if (nums1.empty() || nums2.empty())
            return arr;
        unordered_map <int, int> hashmap1;
        for (int i = 0; i < nums1.size(); i ++) {
            if (hashmap1.count(nums1[i]) == 0) {
                hashmap1.insert(pair<int, int> (nums1[i], 1));
            }
            else {
                hashmap1[nums1[i]] ++;
            }
        }
        unordered_map <int, int> hashmap2;
        for (int i = 0; i < nums2.size(); i ++) {
            if (hashmap2.count(nums2[i]) == 0) {
                hashmap2.insert(pair<int, int> (nums2[i], 1));
            }
            else {
                hashmap2[nums2[i]] ++;
            }
        }
        
        for (unordered_map <int, int> :: iterator it = hashmap1.begin(); it != hashmap1.end(); it ++) {
            if (hashmap2.count(it -> first) != 0) {
                int num = min(it -> second, hashmap2[it -> first]);
                for (int j = 0; j < num; j ++) {
                    arr.push_back(it -> first);
                }
            }
        }
        return arr;
    }
};
