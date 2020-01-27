Notice:

There are totally two differences between No.39 and No.40:

1. In the *combinationSum(candidates, res, target - candidates[i], combination, i + 1);* syntax, use *i+1* instead of *i*.

2. Remember to add a new syntax to delete duplicated element in *candidates* array. 

   *if (i == begin || (i != begin && candidates[i] != candidates[i - 1]))*
   
   

Submission result:

Runtime: 4 ms, faster than 99.05% of C++ online submissions for Combination Sum II.
Memory Usage: 9 MB, less than 94.74% of C++ online submissions for Combination Sum II.

