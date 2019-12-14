The question is shown below:

![image](https://github.com/MingCheng991129/Solutions-to-Leetcode-Problems/blob/master/2.%20Add%20Two%20Numbers_medium/question.png)

**Solution 1:**

The solution is not very complex, which is to use two pointers to traverse two LinkRecs. 

However, there is a tricky point to be noticed:

if the input is like: 

[5]

[5]

You should notice that after the traversing, there is still a *carry* left.


