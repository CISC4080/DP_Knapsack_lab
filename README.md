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

```
   int Knapsack_tabulation (const vector<Item> & items, int weight_capacity)
```

   * (Extra credit) Implement DP algorithm using the tabulation approach in the following function, which set **chosen** vector to store
   the indices of objects chosen that achieves the maximum value.

```
//Extra credits: DP with Tabulation
//Return maximum value achievable by choosing objects from the "items" vector 
// subject to the contraint that the total weight of chosen objects is less than weight_capacity
// and set the "chosen" vector to include the indices of items chosen 
//Each item can be chosen at most once 
int Knapsack_tabulation (const vector<Item> & items, int weight_capacity, vector<int> & chosen)
```

   You can refer to the [in-class exercise ](https://docs.google.com/document/d/11SFWDhwUdlROWRuy7dKDpH-5tEh3539WrBRmS_D1zz4/edit?usp=sharing) from Nov 7 for hints. 

2. Unlimited Knapsack Problem:
   
    * Write a pure recursive algorithm for this problem in **Unlimited_Knapsack_recursive**

```
//Pure recursive solution 
//Return maximum value achievable by choosing objects from "items" vector 
//subject to the contraint that the total weight of chosen objects is less than weight_capacity
//Each item can be chosen multiple times (i.e., repetition allowed) 
int Unlimited_Knapsack_recursive (const vector<Item> & items, int weight_capacity)
```
   * (Extra credits) Implement a pure recursive algorithm in the following function, which set the **chosen** vector to
the list of items chosen.

```
//Extra credits: pure recursive solution + setting "chosen" vector 
//Return maximum value achievable by choosing objects from "items" vector 
//subject to the contraint that the total weight of chosen objects is less than weight_capacity
//Each item can be chosen multiple times (i.e., repetition allowed) 
int Unlimited_Knapsack_recursive (const vector<Item> & items, int weight_capacity, vector<int> & chosen)
```
      
    * Implement DP algorithm using the memoization approach, in **Unlimited_Knapsack_wrapper**, and **Unlimited_Knapsack_memoized**.

  Hint: For the unlimited Knapsack Problem, you can refer to CoinChange problem  when thinking about the recursive solution.    


## Test cases:

 Your program will be tested on multiple pairs of input and expected output. 
 
 ```
  $ ./lab3.exe < input1.txt > myoutput1.txt  //Run the program, redirect standard input to file input1.txt, and standard output is redirected to myoutput1.txt 
  $ diff output1.txt myoutput1.txt   //check for difference between expected output1.txt and my program’s output: myoutput1.txt 
 ```

For example,  if input1.txt contains the following: 
```
3
Bottle-water 5 2 3 
Sanitizer 3 3 4
Sunscreen 2 10 2 
8
8
```
Note: this input specifies that there are 3 different types of items to choose from, the total weight capacity for both version of knapsack problem is 8: 


The output2.txt gives the expected output:
```
Unlimited Knapsack with weight capacity: 8
Max. value achieved: 40
With: Sunscreen Sunscreen Sunscreen Sunscreen 

General Knapsack with weight capacity 8
Max. value achieved: 23
```

There are a total of three testcases:

* Testcase 1.  input1.txt, output1.txt.  (2 types of items) 
* Testcase 2: input2.txt output2.txt  or output2_2.txt  (4 types of items) 
  Note that for this testcase, there are two ways to choose objects for general Knapsack problem that achieves the same maximum value. If you output matches with outpu2.txt OR output2_2.txt, then you pass this testcase. 
* Testcase 3: Input3.txt output3.txt  (10 types of items)

## What to submit 

Submit your knapsack_func.cpp at the following site:
TBA.

The autogravder system will run command “make” to compile your program, and then run the following commands to test your program with the above three cases one by one: 
$./lab3.exe < input1.txt > output1_result.txt 
$ diff output1_result.txt output1.txt. 
Repeat for test case 2 and 3. 
