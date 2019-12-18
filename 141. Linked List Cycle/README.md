Solution 1 is tricky because it will fail if any of the nodes in the list equals to MIN_MAX.

Solution 2 is inspired from *Discuss*, using two pointers: one moves one step each time, while the other one moves two steps each time. If 
there is a cycle, they will meet at some time.

The question is shown below:

![img](https://github.com/MingCheng991129/Solutions-to-Leetcode-Problems/blob/master/141.%20Linked%20List%20Cycle/question.png)
