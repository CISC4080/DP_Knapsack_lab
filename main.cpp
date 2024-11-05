//Test two versions of Knapsack problems
#include <iostream>
#include <vector>
#include "Item.h"
#include "knapsack_func.h"

using namespace std;

int main()
{
    vector<Item> items; 

    //0. Push into items vector a "NULL" element
    items.push_back (Item("NIL",0,0));

    //1. Read the number of types of items
    int item_num;

    cout <<"How many types of items:";
    cin >>item_num;

    //2. For loop that reads each item type's name, weight and value 
    //   Create an Item object, and push it to the vector "items" 
    string name;
    int wgt, value;
    for (int i=1;i<=item_num;i++) {
       cout <<"What's name, weight, and value of "<<i<<"-th item:";
       cin >> name >> wgt >> value;
       items.push_back (Item(name, wgt, value));
    }

    //3. Read in the weight capacity W 
    int W;
    cout <<"What's the capacity of the Knapsack:";
    cin >> W;


    //4. Call 0/1 Knapsack (recursive implementation)  and display max. value achieved 
    int maxV1_rec = Knapsack_recursive (items, W, item_num);
    cout <<"max value:"<<maxV1_rec<<endl;

    //5. Call 0/1 Knapsack (tabulation)  and display max. value achieved 
    vector<int> chosen;
    int maxV1_tab = Knapsack_tabulation (items, W, chosen);


    //6. Call unlimited Knapsack (recursive implementation), and display max. value achieved 
    int maxV2_rec = Unlimited_Knapsack_recursive (items, W); 


    //7. Call unlimited Knapsack (memoization implementation), and display max. value achieved 
    int maxV2_tab = Unlimited_Knapsack_wrapper (items, W);
       
    

}
