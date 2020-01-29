Solution 1 traverses the entire array and updates the value of the last element of the array if needed. **A new method to initialize the 2-D 
array is useful: *vector <vector <int> > res{intervals[0]};***

Submission result:
Runtime: 24 ms, faster than 47.04% of C++ online submissions for Merge Intervals.
Memory Usage: 12.3 MB, less than 100.00% of C++ online submissions for Merge Intervals.

Solution 2 bulids two array: **start** and **end** and sorts them. Then these two arrays are traversed. **The termination condition 
of the loop should be noticed: *if (i == intervals.size() - 1 || start[i + 1] > end[i])***

Submission result:
Runtime: 24 ms, faster than 47.04% of C++ online submissions for Merge Intervals.
Memory Usage: 12.7 MB, less than 38.37% of C++ online submissions for Merge Intervals.
