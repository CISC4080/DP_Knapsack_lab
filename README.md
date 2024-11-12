# DP_Knapsack_lab

This lab practices solving two different variations of Knapsack problems via Dynamic Programming.
 * 0/1 Knapsack problem, where each item is either included once or not included
 * unlimited Knapsack problem, where each item can be chosen repeatedly.

## Provided files:
  * Item.h: define the ItemClass
  * knapsack_func.h, knapsack_func.cpp: declare and implement the various knapsack problem solving functions.
  * main.cpp: read items, and test various knapsack functions.
  * Makefile: for compiling the executable **lab3.exe**.

## Requirements:

1. 0/1 Knapsack Problem:

    * for this problem, a basic recursive algorithm is given **int Knapsack_recursive ()**
    * Implement another recursive function **Knapsack_recursive_full** that additionally set a reference parameter to store indices of items included.
    * Implement DP algorithm using the tabulation approach, in function **Knapsack_tabulation**.
    * (Extra credit) Implement DP algorithm using the tabulation approach in function **Knapsack_tabulation_full**, which sets **chosen** vector to store
   the indices of objects chosen that achieves the maximum value.

   You can refer to the [in-class exercise ](https://docs.google.com/document/d/11SFWDhwUdlROWRuy7dKDpH-5tEh3539WrBRmS_D1zz4/edit?usp=sharing) from Nov 7 for hints. 

2. Unlimited Knapsack Problem:
   
    * Write a pure recursive algorithm for this problem in function **Unlimited_Knapsack_recursive**
    * (Extra credits) Implement a pure recursive algorithm in function **Unlimited_Knapsack_recursive_full**, which sets the **chosen** vector to
the list of items chosen.
    * Implement DP algorithm using the memoization approach, in **Unlimited_Knapsack_wrapper**, and **Unlimited_Knapsack_memoized**.

  Hint: For the unlimited Knapsack Problem, you can refer to CoinChange problem  when thinking about the recursive solution.    


## Test cases:

 Your program will be tested on multiple pairs of input and expected output. 
 
 ```
  $ ./lab3.exe < input1.txt  //Run the program, redirect standard input to file input1.txt 
 ```

For example,  input1.txt contains the following: 
```
3
Bottle-water 5 2 3 
Sanitizer 3 3 4
Sunscreen 2 10 2 
8
8
```
Note: this input specifies that there are 3 different types of items to choose from, the total weight capacity for both version of knapsack problem is 8: 


The output1.txt gives the expected max values for the two versions of Knapsack problem, and the corresponding set of items chosen. 
```
0/1 Knapsack, W=8
max value:13
Object chosen:Sanitizer Sunscreen 

Unlimited Knapsack, W=8
max value:40
Objects chosen:Sunscreen Sunscreen Sunscreen Sunscreen
```

There are a total of three testcases (all pairs of files are provided). **Note that you don't need to worry about outputing the results in the same format
as these output files, as the Autograder will call your functions and compare your functions' return values and reference parameters with the expected ones.**

* Testcase 1.  input1.txt, output1.txt.  (2 types of items) 
* Testcase 2: input2.txt output2.txt    (4 types of items) 
* Testcase 3: Input3.txt output3.txt  (10 types of items)

## What to submit 

Submit your knapsack_func.cpp at the following site:
[lab3 submission link.](https://storm.cis.fordham.edu:8443/web/project/2043)


