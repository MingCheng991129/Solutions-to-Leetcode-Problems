There are several key parts in solution 1:
- remember to **sort** the array.
- two key variables are defined: **size** and **new_size**, to control the inner loop. 

  If there are duplicated elements, such as the second 2 in [1, 2, 2], the times of the loop is **the differences between two times**. Otherwise,
  the inner loop will start at 0 (size == new_size).

Submission result:
Runtime: 8 ms, faster than 84.96% of C++ online submissions for Subsets II.
Memory Usage: 9.3 MB, less than 72.73% of C++ online submissions for Subsets II.
