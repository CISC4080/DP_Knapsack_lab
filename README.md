# DP_Knapsack_lab

This lab practices problem solving via Dynamic Programming.
 


## Requirements:

Consider another variant of Knapasck problem where there are unlimited supply of each item, and come up a recursive solution to the problem. 

   Please use the following decision tree to come up with your algorithm: 
```
      At each node, choose from all objects which one to include in your knapsack, the options are:  choose any of the i-th item from the objects, for i=0, 1, … objects.size( )-1, as long as its weight is less than or equal to current weight capacity.
```
``` 
  /* Return max value achievable when choosing from the given set of objects so that the total weight <= weight_capacity, and total value is maximized. There are unlimited quantity of each type of items. The items chosen to achieve the value are stored in itemsChosen. 
 @param objects are vector of available  objects to choose from 
 @param weight_capacity: the max. Total weights for objects chosen    
@postcondition: itemsChosen stores objects that maximize total value with total weight <=weight_capacity, the max. Value is returned */
int UnlimitedKnapsack(const vector<Item> & objects, int weight_capacity, vector<Item> & itemsChosen)
```

Improve the above algorithm’s performance by using memoization to avoid recomputing same subproblems. 

### Note: 


4.  Test your three functions from main, and output the chosen items (in ascending order of the item name) following the expected format (see below Test cases for details).
   


## Test cases:

 Your program will be tested on multiple pairs of input and expected output. 
  $ ./lab5.exe < input1.txt > myoutput1.txt  //Run the program, redirect standard input to file input1.txt, and standard output is redirected to myoutput1.txt 
  $ diff output1.txt myoutput1.txt   //check for difference between expected output1.txt and my program’s output: myoutput1.txt 
 
So please be careful with the output format, and make sure you delete other cout statements that you add for debugging purposes before submitting to the autogravder system.

For example,  if input1.txt contains the following: 
3
Bottle-water 5 2 3 
Sanitizer 3 3 4
Sunscreen 2 10 2 
8
8

Note: this input specifies that there are 3 different types of items to choose from, the total weight capacity for both version of knapsack problem is 8: 


The output2.txt gives the expected output:

Unlimited Knapsack with weight capacity: 8
Max. value achieved: 40
With: Sunscreen Sunscreen Sunscreen Sunscreen 

General Knapsack with weight capacity 8
Max. value achieved: 23


Testcase 1.  input1.txt, output1.txt.  (2 types of items) 
Testcase 2: input2.txt output2.txt  or output2_2.txt  (4 types of items) 
  Note that for this testcase, there are two ways to choose objects for general Knapsack problem that achieves the same maximum value. If you output matches with outpu2.txt OR output2_2.txt, then you pass this testcase. 
Testcase 3: Input3.txt output3.txt  (10 types of items)

What to submit 

Submit all six files (with the exact file names as required) on autogravder system at this link: TBA.

The autogravder system will run command “make” to compile your program, and then run the following commands to test your program with the above three cases one by one: 
$./lab3.exe < input1.txt > output1_result.txt 
$ diff output1_result.txt output1.txt. 
Repeat for test case 2 and 3. 
