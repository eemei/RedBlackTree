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
*   if uncle is RED
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
*   Case : 1
    The uncle of addNode is also red
    Only Recolouring required 
*/
void violationCaseOneLeft(Node **nodePtr, Node *addNode){
  Node *grandParent, *parent, *uncle; 
  grandParent = *nodePtr;
  uncle = grandParent->right;
  parent = grandParent->left;
  //insert((Node *)nodePtr, addNode);

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
*       120 (B)                              120(B)                          100(B)
*       / \        left rotate(parent)       / \        apply case three      /  \
*  (R)80  170(B)   ----------------->    100(R) 170(B)  --------------->   80(R) 120(R)
*    / \                                   /                                      / \
*      100(R)                            80(R)                                      170(B)
*
*   @function
*   if uncle is Black or NULL and left right case
*   - parent of addNode rotate left
*
*/
void violationCaseTwoLeft(Node **nodePtr, Node *addNode){
  Node *grandParent, *parent, *uncle; 
  grandParent = *nodePtr;
  uncle = grandParent->right;
  parent = grandParent->left;
  // insert((Node *)nodePtr, addNode);
  if (uncle == NULL || uncle->colour == BLACK){
    if (parent->colour == RED){
      rotateLeft(&((*nodePtr)->left));
      addNode->colour = RED;
      violationCaseThreeLeft(&((*nodePtr)), addNode);
    }
  }
}

/*  
*       120 (B)                                   80(B)
*       / \        right rotate(grandparent)       / \   
*  (R)80  170(B)   ----------------->           70(R) 120(R)
*    /                                                  \
*   70(R)                                             170(B)
*
*   @function
*   if uncle is Black or NULL and left left case
*   - grandparent of addNode rotate right
*   - swap the colour of grandParent and parent
*/
void violationCaseThreeLeft(Node **nodePtr, Node *addNode){
  Node *grandParent, *parent, *uncle; 
  grandParent = *nodePtr;
  uncle = grandParent->right;
  parent = grandParent->left;

  if (uncle == NULL || uncle->colour == BLACK){
    if (parent->colour == RED){
      rotateRight(&(*nodePtr));
      (*nodePtr)->colour = BLACK;
      (*nodePtr)->left->colour = RED;
      (*nodePtr)->right->colour = RED;      
      (*nodePtr)->right->right->colour = BLACK;
    }
  }
}
/*####################### reflection #################################*/

void violationCaseOneRight(Node **nodePtr, Node *addNode){
  Node *grandParent, *parent, *uncle; 
  grandParent = *nodePtr;
  uncle = grandParent->left;
  parent = grandParent->right;

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
*       120 (B)                              120(B)                            150(B)
*       / \        right rotate(parent)       / \        apply case three      /  \
*  (B)80  170(R)   ----------------->    80(R) 150(B)         right         120(R) 170(R)
*          /                                    \        --------------->    /  \
*         150(R)                              170(R)                      80(B)
*
*   @function
*   if uncle is Black or NULL and right left case
*   - parent of addNode rotate right
*
*/
void violationCaseTwoRight(Node **nodePtr, Node *addNode){
  Node *grandParent, *parent, *uncle; 
  grandParent = *nodePtr;
  uncle = grandParent->left;
  parent = grandParent->right;

  if (uncle == NULL || uncle->colour == BLACK){
    if (parent->colour == RED){
      rotateRight(&((*nodePtr)->right));
      addNode->colour = RED;
      violationCaseThreeRight(&((*nodePtr)), addNode);
    }
  }
}

/*  
*       120 (B)                                   170(B)
*       / \        left rotate(grandparent)       / \   
*  (B)80  170(R)   ----------------->           120(R) 250(R)
*          \                                     /
*         250(R)                                80(B)
*
*   @function
*   if uncle is Black or NULL and Right Right case
*   - grandparent of addNode rotate left
*   - swap the colour of grandParent and parent
*/
void violationCaseThreeRight(Node **nodePtr, Node *addNode){
  Node *grandParent, *parent, *uncle; 
  grandParent = *nodePtr;
  uncle = grandParent->left;
  parent = grandParent->right;

  if (uncle == NULL || uncle->colour == BLACK){
    if (parent->colour == RED){
      rotateLeft(&(*nodePtr));
      (*nodePtr)->colour = BLACK;
      (*nodePtr)->left->colour = RED;
      (*nodePtr)->right->colour = RED;      
      (*nodePtr)->left->left->colour = BLACK;
    }
  }
}






void rbtAdd(Node **nodePtr, Node *addNode){
  if(*nodePtr == NULL){
    *nodePtr = addNode;
		(*nodePtr)->colour = BLACK;
		return;
  }
 

  
  printf("0nodePtr = value = %d\n", (*nodePtr)->value);  
  if((*nodePtr)->value < addNode->value){ 
    rbtAdd(&((*nodePtr)->right), addNode);
    addNode->colour = RED;
    addNode->left = NULL;
    addNode->right = NULL;
    printf("1nodePtr = value = %d\n", (*nodePtr)->value);
  }
        
  else if ((*nodePtr)->value > addNode->value){
    rbtAdd(&((*nodePtr)->left), addNode);
    addNode->colour = RED;
    addNode->left = NULL;
    addNode->right = NULL;
  }
  
  if((*nodePtr)->left != NULL && (*nodePtr)->right != NULL){
    violationCaseOneRight(&(*nodePtr), addNode); 
    violationCaseOneLeft(&(*nodePtr), addNode);
    //violationCaseTwoRight(&(*nodePtr), addNode); 
    //violationCaseTwoLeft(&(*nodePtr), addNode);     
  }
  
  //violationCaseTwoRight(&(*nodePtr), addNode); 
 //violationCaseOneRight(&(*nodePtr), addNode); 
  printf("2nodePtr = value = %d\n", (*nodePtr)->value);
  //(*nodePtr)->colour = BLACK;
}



































//http://quiz.geeksforgeeks.org/c-program-red-black-tree-insertion/

//http://cs.lmu.edu/~ray/notes/redblacktrees/
//http://web.eecs.umich.edu/~sugih/courses/eecs281/f11/lectures/11-Redblack.pdf
//http://btechsmartclass.com/DS/U5_T4.html