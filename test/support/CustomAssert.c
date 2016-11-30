#include "CustomAssert.h"
#include <stdio.h>
#include "Unity.h"

/*
* ->function 
*   -verify the node present or not
    -verify left node or right node
*   -verify the data in true node
*   -verify the colour in true node
*/

char *colourName(Colour colour){
  switch(colour){
    case BLACK:
      return "Black";
      break;
    case RED:
      return "red";
      break;      
    case DOUBLE_BLACK:
      return "double black";
      break;
    default:
      return "undefined colour";
      break;   
  }
}

void testAssertNode(int value, Node *left, Node *right, Colour colour, Node *node, int lineNo){
  char buffer[256];
  
  if (node == NULL){
    UNITY_TEST_FAIL(lineNo, "Expect node is not NULL");
  }
  
  if(node->left != left){
    if (node->left == NULL){
      sprintf(buffer,"Expect left node is NULL, but it is %d",     \
      left->value);
      UNITY_TEST_FAIL(lineNo, buffer);
    }
    else if (left == NULL){
    sprintf(buffer,"Expect left node is %d(0x%p), but it is NULL",     \
    node->left->value, node->left);
      UNITY_TEST_FAIL(lineNo, buffer);
    }
    else{
    sprintf(buffer,"Expect left node is %d(0x%p), but it is %d",     \
    node->left->value, node->left, left->value);
    UNITY_TEST_FAIL(lineNo, buffer);
    }
  }
  
    if(node->right != right){
    if (node->right == NULL){
      sprintf(buffer,"Expect right node is NULL, but it is %d",     \
      right->value);
      UNITY_TEST_FAIL(lineNo, buffer);
    }
    else if (right == NULL){
    sprintf(buffer,"Expect right node is %d(0x%p), but it is NULL",     \
    node->right->value, node->right);
      UNITY_TEST_FAIL(lineNo, buffer);
    }
    else{
    sprintf(buffer,"Expect right node is %d(0x%p), but it is %d",     \
    node->right->value, node->right, right->value);
    UNITY_TEST_FAIL(lineNo, buffer);
    }
  }
  // if(node->right != right){
    // sprintf(buffer, "Expect right node is %d(0x%p), but it is %d",    \
    // node->right->value, node->right, right->value);
    // UNITY_TEST_FAIL(lineNo, buffer);
  // }
  if(node->value != value){
    sprintf(buffer, "Expect node %d's value is %d, but it is %d",     \
              node->value, value, node->value);
    UNITY_TEST_FAIL(lineNo, buffer);
  }
  if(node->colour != colour){
    sprintf(buffer, "Expect node %d is %s colour, but it is %s",    \
    node->value, colourName(colour), colourName(node->colour));
    UNITY_TEST_FAIL(lineNo, buffer);
  }
  
}