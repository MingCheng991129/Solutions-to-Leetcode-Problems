I use two pointers to solve this problem: one is *slow* (moves one step each time) while the other one is *fast* (moves
two steps each time). If *slow == fast*, then there is a cycle.

To find the start location of the cycle, just use another two pointers: one of them begins at *head* and the other one begins at where 
*slow* ends. Then move both of them one step each time. The location they meet is the result.

The question is shown below:

![img](https://github.com/MingCheng991129/Solutions-to-Leetcode-Problems/blob/master/142.%20Linked%20List%20Cycle%20II/question.png)
