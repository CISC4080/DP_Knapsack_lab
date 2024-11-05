/* Define Item class with the following member fields:

   string name: name of the item
   int weight: weight,
   int value: the item's value
 
   provide constructor, print, get_name, get_value, get_weight member functions 
   
*/
#ifndef ITEM_H
#define ITEM_H
#include <string>
using namespace std;

class Item{
 private: 

   string name;
   int weight;
   int value;
 public:
   Item (string n, int w, int v){
     name=n;
     weight=w;
     value=v;
   }
   int get_weight() const {
	return weight;
   }
   int get_value() const {
	return value;
   }
};
#endif
