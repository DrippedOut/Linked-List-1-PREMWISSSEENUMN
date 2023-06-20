#include <iostream>

using namespace std;
#include "ll.h"

int main(int argc, char **argv) {
  LL l; // Link-list
  int argCount = argc - 1;
  
  // insert input into nodes
  for (int i = 1; i < argCount; i += 2) {
    // insert_node
     int id = atoi(argv[i]);
     string name = argv[i+1];
    l.insert_node(name,id);
  }

  // print out each node
  l.print_all();

} // automatically call destructor