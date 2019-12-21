Solution 1 uses two pointers to traverse the whole array. If 0 is found, all the elements following (zeros are not included) moves 
one-step foward.

However, it is very time-wasting because moving elements costs lots of time.

Solution 1 is faster than 6.32% and less than 98.61%.

Solution 2 is space optimal but not time optimal. This solution uses a slow pointer and a fast pointer. If the fast one equals to 0, it 
overwrites the value of the slow one. Remember to write zeros in the end.

Solution 2 is faster than 62.93% and less than 100.00%.

Solution 3 is the optimal one. Instead of doing the *overwriting* process, it swaps the value of fast pointer and slow pointer.
However, it has the same complexity as the previous solution when the situation is worst.

Solution 3 is faster than 62.93% and less than 100.00%.

The question is shown below:

![img](https://github.com/MingCheng991129/Solutions-to-Leetcode-Problems/blob/master/283.%20Move%20Zeroes/question.png)
