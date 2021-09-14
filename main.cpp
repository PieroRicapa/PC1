#include <iostream>
#include "lista.h"
#include "type.h"
using namespace std;

int main() 
{
  L vect[10] = {1,2,3,4,5,6,7,8,9,10};
  linkedlist<L> mylist;
  for (auto x=0; x<10; x++){
    mylist.insert_at_tail(vect[x]);
    
    mylist.print(cout);
  }
  mylist.insert_at_head(20);
  mylist.print(cout);
  
}
