Solution 1 first defines a function to return the height of all subtrees. Then it traverses the entire tree to check all the subtrees.
Obviously, solution 1 needs to traverse the entire tree twice.

Submission result:

Runtime: 20 ms, faster than 20.37% of C++ online submissions for Balanced Binary Tree.
Memory Usage: 17.3 MB, less than 81.36% of C++ online submissions for Balanced Binary Tree.


Solution 2 will be faster when the tree is not balanced: is any one subtree is not balanced, there is no need to get the height of that subtree, but just return -1. 

Submission result:

Runtime: 60 ms, faster than 5.26% of C++ online submissions for Balanced Binary Tree.
Memory Usage: 17.5 MB, less than 35.59% of C++ online submissions for Balanced Binary Tree.
