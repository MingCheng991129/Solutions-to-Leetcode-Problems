Solution 1 uses dynamic programming to solve the problem. Solution 1 defines two variables: ***local*** and ***global***. 

*local* remains the local optimal value, which means: 

***local = max(local + current, current)***

*local* has to contain *current value*.

- *local* = *current value* if *local* <= 0.
- *local* = *local + current value* otherwise.

*global* remains the global optimal value, which means:

***global = max(global, local)***

- *global* = *global* if *local* < *global*.
- *global* = *local* to update the value of *global*.

Submission result:
Runtime: 4 ms, faster than 98.55% of C++ online submissions for Maximum Subarray.
Memory Usage: 9.3 MB, less than 79.41% of C++ online submissions for Maximum Subarray.
