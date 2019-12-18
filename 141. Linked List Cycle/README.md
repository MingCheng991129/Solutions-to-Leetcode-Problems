Solution 1 is tricky because it will fail if any of the nodes in the list equals to MIN_MAX.

Solution 2 is inspired from *Discuss*, using two pointers: one moves one step each time, while the other one moves two steps each time. If 
there is a cycle, they will meet at some time.

Solution 2: faster than 97.24%, less than 81.58%.

**NOTICE: When using the second method, notice the situation of NULL pointers. That is to say, *p2->next* may be NULL, and there shouldn't exist *p2->next->next.***

**That is to say, *while (p2 -> next != NULL && p2 -> next -> next != NULL)* is different from *while (p2 -> next -> next != NULL && p2 -> next != NULL)***

The question is shown below:

![img](https://github.com/MingCheng991129/Solutions-to-Leetcode-Problems/blob/master/141.%20Linked%20List%20Cycle/question.png)
