//=========================================================
//HW#: HW4 bintree
//Your name: Heriberto Bernal
//Complier:  gcc compiler
//File type: client program (tester)
//===========================================================

// CS311 This client tests the BST class

#include <iostream>
using namespace std;

#include "binstree.h"

//PURPOSE of the Program: This program will create a binary tree
//Algorithm/ Design: It will create a tree and when a new node will be added, the program will place it in the right position depending its number
int main()
{
  //***** test 1 **********************************************

  cout << "===  Starting a new tree with many nodes ===="<< endl;
  BST MyTree;  // my first binary search tree

  for(int i = 1; i <=9 ; i=i+2)   // inserting 1,3,5,7,9 into the tree
      MyTree.Insertvertex(i);

  for(int i = 10; i >=2 ; i=i-2)     // inserting 10,8,6,4,2 into the tree
      MyTree.Insertvertex(i);

  MyTree.ShowInOrder();  // should show in the sorted order
  
  MyTree.ShowPreOrder(); // should show the parent before children

  //***** test 2 **********************************************

  cout << "===  Starting a new tree with 3 nodes ===="<< endl;
  BST Nums1;  // Nums1 is the second binary search tree

   Nums1.Insertvertex(1);
   Nums1.Insertvertex(2);
   Nums1.Insertvertex(3);
   Nums1.DeleteVertex(7); // cannot delete
   Nums1.DeleteVertex(1); // delete the root
   Nums1.ShowInOrder();

  //******* test 3 ********************************************

  cout << "===  Starting another tree with 3 nodes ===="<< endl;
  BST Nums2;  // Nums2 is another binary search tree

   Nums2.Insertvertex(10);
   Nums2.Insertvertex(9);
   Nums2.Insertvertex(8);
   Nums2.DeleteVertex(7);   // cannot delete
   Nums2.DeleteVertex(10);  // delete the root
   Nums2.ShowInOrder();

 //****** test 4 **************************************
  cout << "===  Starting a new tree with 7 nodes ===="<< endl;
  BST Nums;  // Nums is the last binary search tree

  // creates a shallowest 7 node tree (draw this)
  Nums.Insertvertex(3);  // root
  Nums.Insertvertex(1);  // level 1 L
  Nums.Insertvertex(2);    // level 2 R
  Nums.Insertvertex(0);    // level 2 L
  Nums.Insertvertex(5);  // level 1 R
  Nums.Insertvertex(6);    // level 2 R
  Nums.Insertvertex(4);    // level 2 L
  Nums.Insertvertex(4);   // should be an error

  //and show the nodes in sorted order
  Nums.ShowInOrder();

  cout << "then delete some nodes .." << endl;
  
    //  - level 2 right most leaf
    Nums.DeleteVertex(6);
  
    // - level 1 right mode node with one left child
    Nums.DeleteVertex(5);
  
    // - level 0 root with two children
    Nums.DeleteVertex(3);
  
    // - deleting a non-existing one
    Nums.DeleteVertex(7);
  
    //and then show the remaining nodes in sorted order
    Nums.ShowInOrder();
  
  
}// end of program


