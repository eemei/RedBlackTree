#include "node.h"
#include "rotation.h"
#include <stdlib.h>
#include <stdio.h>

Node *createNode (int color, int data){
  Node *newNode = malloc(sizeof(Node));
  newNode->left = NULL;
  newNode->right = NULL;
  newNode->colour = color;
  newNode->value = data;
  
  return newNode;
}

/*  
*         20  // head
*        / \
*      15  25 // child
*
*/
void insert(Node *root, Node *child){
// root == 0
  if(root->value < child->value){  
    if (root->right == 0){
      root->right = child;
    }
    else 
    insert(root->right, child);
  }
  else if (root->value > child->value){
    if (root->left == 0){
    root->left = child; 
    }
    else
    insert(root->left, child);
  }
}