**Solution 1**

The procedure of solution 1 is shown as below:

1. Define an array *arr*, with the nth element as **number of BST when input is n.** 
Note that arr[0] = 1, arr[1] = 1.

2. When n >= 2, [1, n - 1] must be the left children of the final BST and [n + 1, ∞) must be the right children.

3. Therefore, arr[n] = arr[0]\*arr[n - 1] + arr[1]\*arr[n - 2] +... + arr[n - 1]\*arr[0]


**Submission result:**

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Unique Binary Search Trees.
Memory Usage: 8.3 MB, less than 56.82% of C++ online submissions for Unique Binary Search Trees.
