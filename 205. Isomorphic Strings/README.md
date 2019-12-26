Solution 1 uses two hashmaps.

There is a point easy to get failed: the result of mapping should not just **add 1** each time, but should **add i + 1 (add i will also fail)**. Otherwise, 
the algorithm will not judge the situation of *"abba", "baba"* and *"aa", "ab"*.

The question is shown below:

![img](https://github.com/MingCheng991129/Solutions-to-Leetcode-Problems/blob/master/205.%20Isomorphic%20Strings/question.png)
