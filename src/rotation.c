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
*   @func
*   if uncle is black
*     1)change colour of P and U as Black
*     2)colour of Grandparent as Red
*     3)change current node = current node's grandparent 
*
*
*              100(B)<-Grandparent                    100(R)<- current node
*             /   \                                    /  \
* Parent-> 80(R)  120(R)<-Uncle         ------>     80(B) 120(B)
*           /      /(R)                              / \  /(B)
*       70(R)<-current node                       70(R)
*
*/
void case1Recolour(Node **nodePtr){
  /*
    x->color = RED;
  // Move violation of #3 up tree, maintaining #4 as invariant:
  while (x!=root && x->p->color == RED)
  if (x->p == x->p->p->left)
      y = x->p->p->right;
      if (y->color == RED)
          x->p->color = BLACK;
          y->color = BLACK;
          x->p->p->color = RED;
          x = x->p->p;

  */
  Node *grandParent, *parent, *uncle, *currNode; 
  currNode = *nodePtr;
  uncle = currNode->right;
  
  if( uncle != NULL){
    if ( uncle->colour == RED){
      
    }
  }
}