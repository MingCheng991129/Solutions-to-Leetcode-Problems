In solution 1, I first judge whether the array has been rotated or not. If not, just use the binary search directly. If so,
I should first find the range of search (either in the first part of the array, or in the second part). Then I use binary search 
in the corresponding area.

Submission result: Runtime: 4 ms, faster than **98.66%** of C++ online submissions for Search in Rotated Sorted Array II.
Memory Usage: 8.7 MB, less than **100.00%** of C++ online submissions for Search in Rotated Sorted Array II.

The question is shown below:

![img](https://github.com/MingCheng991129/Solutions-to-Leetcode-Problems/blob/master/81.%20Search%20in%20Rotated%20Sorted%20Array%20II/question.png)
