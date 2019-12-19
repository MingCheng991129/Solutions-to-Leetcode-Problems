Solution 1 uses two-path, which is faster than 69.47% and less than 98.25%.

Solution 2 uses one-path method. It defines two pointers: red and blue. If *nums[i] == nums[red]*, then swap the value between *nums[i]* and *nums[red]* and update red. If *nums[i] == nums[blue]*, then swap the value between *nums[i]* and *nums[blue]* and update **both i and blue**.
**Remember that the upper boundary of i is blue, not the size of the array.**

The question is shown below:

![img](https://github.com/MingCheng991129/Solutions-to-Leetcode-Problems/blob/master/75.%20Sort%20Colors/question.png)
