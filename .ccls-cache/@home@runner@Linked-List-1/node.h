class node
{private:
    int id;
	   string name; 
    node* next;
 public:
    node(int,string);
    void print();
    node* get_next();
    voide set_next(node*);
   ~node();
     };

node x;

typedef node* nodePtr;
nodePtr y;

