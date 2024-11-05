#include <vector>
#include "Item.h"
using namespace std;
//Define function prototypes

////////////////////// 0/1 Knapsack //////////////////////
//Return maximum value achievable by choosing objects from the first n element in "items" vector 
//subject to the contraint that the total weight of chosen objects is less than weight_capacity
//Each item can be chosen at most once 
int Knapsack_recursive (const vector<Item> & items, int weight_capacity, int n);

//Return maximum value achievable by choosing objects from the first n element in "items" vector
// and also set the chosen vector to be the index of items chosen (e.g., [1,2] if first and second
//items are chosen) that achieves the max. value.
//subject to the contraint that the total weight of chosen objects is less than weight_capacity
//Each item can be chosen at most once 
int Knapsack_recursive_full (const vector<Item> & items, int weight_capacity, int n, vector<int> & chosen);

//DP with Tabulation
//Return maximum value achievable by choosing objects from the "items" vector 
// subject to the contraint that the total weight of chosen objects is less than weight_capacity
// and set the "chosen" vector to include the indices of items chosen 
//Each item can be chosen at most once 
int Knapsack_tabulation (const vector<Item> & items, int weight_capacity, vector<int> & chosen);



//////////////////////////Unlimited Knapsack /////////////////////////////

//Return maximum value achievable by choosing objects from "items" vector 
//subject to the contraint that the total weight of chosen objects is less than weight_capacity
//Each item can be chosen multiple times (i.e., repetition allowed) 
int Unlimited_Knapsack_recursive (const vector<Item> & items, int weight_capacity, vector<int> & chosen);

//Return maximum value achievable by choosing objects from "items" vector 
//subject to the contraint that the total weight of chosen objects is less than weight_capacity
//Each item can be chosen multiple times (i.e., repetition allowed) 
int Unlimited_Knapsack_wrapper (const vector<Item> & items, int weight_capacity);


//Passing the table created by the wrapper func to the memoized DP 
int Unlimited_Knapsack_memoized (const vector<Item> & items, int weight_capacity, vector<int> & K);
