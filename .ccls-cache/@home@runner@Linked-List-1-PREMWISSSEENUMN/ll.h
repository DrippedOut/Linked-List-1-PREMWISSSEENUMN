#include "node.h"

typedef node *nodePtr;

class LL {
  nodePtr hol; // head of linked list
  int size;

public:
  LL();
  ~LL();
  void insert_node(string, int);
  void print_all();
};

LL::LL() {
  hol = NULL; // hol: head of linkedlist
  size = 0;
}

LL::~LL() {
  int i;
  nodePtr t = hol;
  for (i = 0; i < size; i++) {
    hol = hol->get_next();
    delete t;
    t = hol;
  }
}

void LL::insert_node(string name, int id) {
  size++;                          // increment size
  nodePtr n1 = new node(id, name); // create new node
  
  if (hol == NULL) {
    hol = n1; // point hol to n1(new node)
  }
  else {
    nodePtr temp = hol;
    
    // loop til last node
    while (temp->get_next()) {
      temp = temp->get_next();
    }

    // set next node to n1
    temp->set_next(n1);
  }
}

void LL::print_all() {
  for (nodePtr temp = hol; temp != NULL; temp = temp -> get_next()) {
    temp->print();
  }
}
