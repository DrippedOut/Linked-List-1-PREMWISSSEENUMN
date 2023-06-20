#include <iostream>

using namespace std;

class node {
private:
  int id;
  string name;
  node *next;

public:
  node(int, string);
  ~node();
  void print();
  node *get_next();
  void set_next(node *);
};

typedef node* nodePtr;

node::node(int i, string n) {
  id = i;
  name = n;
}

node::~node() { cout << name << " deleted " << endl; }

void node::print() { 
  cout << 
    "ID: " << id << endl << 
    "Name: " << name << endl; }

node *node::get_next() { return next; }

void node::set_next(node *nextNode) { next = nextNode; }
