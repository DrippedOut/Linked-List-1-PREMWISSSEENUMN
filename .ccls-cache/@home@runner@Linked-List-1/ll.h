#include "node.h"

class LL{
   nodePtr hol; //head of linked list
   int size;
  public:
     LL();
      void insert_node(string,int);
	    void print_all();
     ~LL();
};
LL::LL(){
  hol=NULL;
  size=0;
}
