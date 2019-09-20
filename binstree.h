//=========================================================
//HW#: HW4 bintree
//Your name: Heriberto Bernal
//Complier:  gcc compiler
//File type: header file
//===========================================================

// tree element type is int for now
typedef int elem_t;   // elem_t is hidden from the client

// definition of what a Vertex is - also hidden from the client
struct Vertex
{
  Vertex *Left;
  elem_t  Elem;
  Vertex *Right;
};   


class BST
{

 private:
  Vertex *Root;  // data member is Root which is a pointer to the root vertex

 public:
  
   BST();
  ~BST();  // destructor calls dtraverse to destroy the dynamic tree


  // PURPOSE: these will show the vertices in IN order 
  // TO CALL: No parameter to ShowInOrder but provide a pointer to 
  //          the root vertex in calling INorderTraversal
  void ShowInOrder();      

  // PURPOSE: Does IN order traversal from V recursively
  // PARAM: V is te pointer to the vertex to visit right now
  void INorderTraversal(Vertex*);

  // PURPOSE: these will show the vertices in PRE order - same as Depth First
  // TO CALL: No parameter to ShowPreOrder but provide a pointer to 
  //          the root vertex in calling PREorderTraversal
  void ShowPreOrder();

  // PURPOSE: Does PRE order traversal from V recursively
  // PARAM: V is the pointer to the vertex to be visited now
  void PREorderTraversal(Vertex*);

  // PURPOSE: This inserts a new vertex into the BST 
  // TO CALL: provide the element to be inserted into the tree
  void Insertvertex(elem_t);
  
  // PURPOSE: This deletes a vertex with the given element - calls remove and
  // findMax
  // TO CALL: procide the element to be removed from the tree
  void DeleteVertex(elem_t);
  
  protected: // utility functions follow - these are not for the clients to use
             // These were created to implement the public methods
   void dtraverse(Vertex*); // traverse and delete all vertices in post order
   void remove(Vertex*, Vertex*); // removes the vertex knowing its parent
   elem_t findMax(Vertex*);  // finds the MAX element in the
                             // left sub-tree of the vertex and also deletes it
};


