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
  Node *tmpNode = *nodePtr;   // X
  Node *tmpNodeRightLeft = (*nodePtr)->right->left; //  b
  
  *nodePtr = (*nodePtr)->right;   // Y  
  (*nodePtr)->left = tmpNode;
  tmpNode->right = tmpNodeRightLeft;  
}