class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // solution 1
        // O(m*n)
        // Runtime: 20 ms, faster than 6.29% of C++ online submissions for 
        // Intersection of Two Arrays.
        // Memory Usage: 9.2 MB, less than 70.00% of C++ online submissions for 
        // Intersection of Two Arrays.
        set <int> intersec;
        vector <int> result;
        if (nums1.empty() || nums2.empty())
            return result;
        for (int i = 0; i < nums1.size(); i ++) {
            for (int j = 0; j < nums2.size(); j ++) {
                if (nums1[i] == nums2[j]) 
                    intersec.insert(nums1[i]);
            }
        }
        if (intersec.empty())
            return result;
        for (set<int>::iterator it = intersec.begin(); it != intersec.end(); it ++) {
            result.push_back(*it);
        }
        return result;
      
    }
};
