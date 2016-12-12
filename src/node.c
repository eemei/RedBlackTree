#include "node.h"
#include "rotation.h"
#include <stdlib.h>
#include <stdio.h>

Node *createNode (int colour, int data){
  Node *newNode = malloc(sizeof(Node));
  newNode->left = NULL;
  newNode->right = NULL;
  newNode->colour = colour;
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

  if(root->value < child->value){  
    if (root->right == 0){
      root->right = child;
      child->colour = RED;
    }
    else 
      insert(root->right, child);
  }
  else if (root->value > child->value){
    if (root->left == 0){
      root->left = child; 
      child->colour = RED;  
    }
    else
    insert(root->left, child);
  }
}
