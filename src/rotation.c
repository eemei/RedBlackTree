#include "rotation.h"
#include "node.h"
#include <stdio.h>

/*
*     X      <                      Y
*    / \      \    left rotate     / \
*   a   Y     /   ---------->    X   c  
*      / \                      / \
*     b  c                     a   b
*
*/

void rotateLeft(Node **nodePtr){  
  if((*nodePtr)->right != NULL){
  Node *tmpNode = *nodePtr;   // X
  Node *tmpNodeRightLeft = (*nodePtr)->right->left; //  b
  
  *nodePtr = (*nodePtr)->right;   // Y  
  (*nodePtr)->left = tmpNode;
  (*nodePtr)->left->right = tmpNodeRightLeft;  
  }
  else 
      *nodePtr = *nodePtr; 
}

/*
*   >       X                         Y
*  /      / \      right rotate      / \
*  \     Y  c      ---------->      a  X  
*       / \                           / \  
*       a  b                         b  c
*
*/

void rotateRight(Node **nodePtr){
  if((*nodePtr)->left != NULL){
  Node *tmpNode = *nodePtr;   // X
  Node *tmpNodeLeftRight = (*nodePtr)->left->right; //  b
  
  *nodePtr = (*nodePtr)->left;   // Y  
  (*nodePtr)->right = tmpNode;
  (*nodePtr)->right->left = tmpNodeLeftRight;  
  }
  else 
      *nodePtr = *nodePtr; 
}

void rotateLeftRight(Node **nodePtr){
  rotateLeft(&((*nodePtr)->left));
  rotateRight(&(*nodePtr));
}

void rotateRightLeft(Node **nodePtr){
  rotateRight(&((*nodePtr)->right));
  rotateLeft(&(*nodePtr));  
}