class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty())
            return false;
        int left = 0, m = matrix.size(), n = matrix[0].size();
        int right = m * n - 1, mid;
        while (left <= right && left < m * n && right >= 0) {
            mid = (left + right) / 2;
            if (matrix[mid / n][mid % n] == target)
                return true;
            if (matrix[mid / n][mid % n] < target)
                left = mid + 1;
            cout << left;
            if (matrix[mid / n][mid % n] > target)
                right = mid - 1;
        }
        return false;
    }
};
