The original solution is that: I choose the medium index value as root node (nums.size() / 2) and create left subtree and 
right subtree iteratively. However, this solution cannot make sure **all subtrees** but **only the entire tree** is balanced.

Solution 1 is similar to the idea above, but there exist some differences... I think it is worth thinking and learning solution 1.

Submission result:

Runtime: 16 ms, faster than 87.80% of C++ online submissions for Convert Sorted Array to Binary Search Tree.
Memory Usage: 21.1 MB, less than 91.89% of C++ online submissions for Convert Sorted Array to Binary Search Tree.
