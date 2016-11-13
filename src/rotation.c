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