class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {        
        // solution 2
        // hashmap
        // O(m + n)
        // Runtime: 8 ms, faster than 75.04% of C++ online submissions for 
        // Intersection of Two Arrays.
        // Memory Usage: 9.6 MB, less than 20.00% of C++ online submissions for 、
        // Intersection of Two Arrays.
        vector <int> intersec;
        if (nums1.empty() || nums2.empty())
            return intersec;
        unordered_map<int, int> hashmap;
        for (int i = 0; i < nums1.size(); i ++) {
            if (hashmap.count(nums1[i]) == 0) 
                hashmap.insert(pair<int, int> (nums1[i], nums1[i] % INT_MAX));
        }
        set <int> temp;
        for (int i = 0; i < nums2.size(); i ++) {
            if (hashmap.count(nums2[i]) != 0)
                // intersec.push_back(nums2[i]);
                temp.insert(nums2[i]);
        }
        for (set <int>::iterator it = temp.begin(); it != temp.end(); it ++) {
            intersec.push_back(*it);
        }
        return intersec;
    }
};
