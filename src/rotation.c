#include "rotation.h"
#include "node.h"
#include <stdio.h>

/*
*     X      <                      Y
*    / \      \    left rotate     / \
*   a  [Y]     /   ---------->    X   c  
*      / \                      / \
*   [b]  c                     a   b
*
*/


void rotateLeft(Node **nodePtr){
  Node *root, *child, *grandChild; 
  root = *nodePtr;
  child = root->right;
  
  if(child != NULL){
  grandChild = root->right->left;
 
  *nodePtr = child;   
  (*nodePtr)->left = root;
  (*nodePtr)->left->right = grandChild;  
  }
  else 
      *nodePtr = root; 
}


/*
*   >       X                         Y
*  /      / \      right rotate      / \
*  \    [Y] c      ---------->      a  X  
*       / \                           / \  
*      a  [b]                        b  c
*
*/

void rotateRight(Node **nodePtr){
  Node *root, *child, *grandChild; 
  root = *nodePtr;
  child = root->left;
  
  if(child != NULL){
  grandChild = root->left->right;
 
  *nodePtr = child;   
  (*nodePtr)->right = root;
  (*nodePtr)->right->left = grandChild;  
  }
  else 
      *nodePtr = root; 
}


void rotateLeftRight(Node **nodePtr){
  rotateLeft(&((*nodePtr)->left));
  rotateRight(&(*nodePtr));
}

void rotateRightLeft(Node **nodePtr){
  rotateRight(&((*nodePtr)->right));
  rotateLeft(&(*nodePtr));  
}

/*
*   @function
*   if uncle is black
*     1)change colour of P and U as Black
*     2)colour of Grandparent as Red
*     3)change current node = current node's grandparent 
*
*
*              100(B)<-Grandparent                    100(R)<- current node
*             /   \                                    /  \
* Parent-> 80(R)  120(R)<-Uncle         ------>     80(B) 120(B)
*           \      /(R)                              / \  /(B)
*       70(R)<-current node                       70(R)
*
*/
void violationCaseOneRight(Node **nodePtr, Node *addNode){
  Node *grandParent, *parent, *uncle; 
  grandParent = *nodePtr;
  uncle = grandParent->right;
  parent = grandParent->left;
  insert((Node *)nodePtr, addNode);
/*   Case : 1
    The uncle of pt is also red
    Only Recolouring required */
  if( uncle != NULL){
    if ( uncle->colour == RED && parent->colour == RED){
      grandParent->colour = RED;
      parent->colour = BLACK;
      uncle->colour = BLACK;
      addNode->colour = RED;
    }
  }
}
/*  
*       120 (B)                              120(B)
*       / \        left rotate(parent)       / \   
*  (R)80  170(B)   ----------------->    80(R) 170(B)
*    / \                                   /
*      100(R)                            100(R)
*
*
*
*/
void violationCaseTwoRight(Node **nodePtr, Node *addNode){
  Node *grandParent, *parent, *uncle; 
  grandParent = *nodePtr;
  uncle = grandParent->right;
  parent = grandParent->left;
  insert((Node *)nodePtr, addNode);
  if (uncle->colour == BLACK && parent->colour == RED){
    rotateLeft(&parent);
  }
}
//http://quiz.geeksforgeeks.org/c-program-red-black-tree-insertion/

//http://cs.lmu.edu/~ray/notes/redblacktrees/
//http://web.eecs.umich.edu/~sugih/courses/eecs281/f11/lectures/11-Redblack.pdf
//http://btechsmartclass.com/DS/U5_T4.html