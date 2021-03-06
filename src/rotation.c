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
*   >      X                          Y
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

  if (uncle->colour == RED && parent->colour == RED){
    grandParent->colour = RED;
    parent->colour = BLACK;
    uncle->colour = BLACK;
    addNode->colour = RED;
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
  if((uncle == NULL || uncle->colour == BLACK) && parent->colour == RED){
    if ( parent->right->colour == RED){
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

  if ((uncle == NULL || uncle->colour == BLACK) && parent->colour == RED){
    if (parent->left->colour == RED){
      rotateRight(&(*nodePtr));
      (*nodePtr)->colour = BLACK;
      (*nodePtr)->left->colour = RED;
      (*nodePtr)->right->colour = RED;      
    //  (*nodePtr)->right->right->colour = BLACK;
    }
  }
}
/*========== reflection =(right)=========================*/

void violationCaseOneRight(Node **nodePtr, Node *addNode){
  Node *grandParent, *parent, *uncle; 
  grandParent = *nodePtr;
  uncle = grandParent->left;
  parent = grandParent->right;


  if (uncle->colour == RED && parent->colour == RED){
    grandParent->colour = RED;
    parent->colour = BLACK;
    uncle->colour = BLACK;
    addNode->colour = RED;
  }
}
/**  
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

  if ((uncle == NULL || uncle->colour == BLACK) && parent->colour == RED){
    if (parent->left->colour == RED ){
      rotateRight(&((*nodePtr)->right));
      addNode->colour = RED;
      violationCaseThreeRight(&((*nodePtr)), addNode);
    }
  }
}

/**  
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

  if ((uncle == NULL || uncle->colour == BLACK) && parent->colour == RED){
    if ( parent->right->colour == RED){
      rotateLeft(&(*nodePtr));
      (*nodePtr)->colour = BLACK;
      (*nodePtr)->left->colour = RED;
      (*nodePtr)->right->colour = RED;      
    }
  }
}

void InternalAdd(Node **nodePtr, Node *addNode){
  //when nodePtr reached the NULL then add a node into there and RETURN
  if(*nodePtr == NULL){
    *nodePtr = addNode;
    addNode->left = NULL;
    addNode->right = NULL;    
		(*nodePtr)->colour = RED;
		return;
  }
  // violation -> 1) Recolouring 
  if((*nodePtr)->left != NULL && (*nodePtr)->right != NULL){
     violationCaseOneRight(&(*nodePtr), addNode);
     violationCaseOneLeft(&(*nodePtr), addNode);
  } 
  // x < add's Node
  if((*nodePtr)->value < addNode->value){ 
    InternalAdd(&((*nodePtr)->right), addNode);
    addNode->colour = RED;
  }
  
  // x > add's Node      
  else if ((*nodePtr)->value > addNode->value){
    InternalAdd(&((*nodePtr)->left), addNode);
    addNode->colour = RED;
  }
  // x = add's Node
  else {
    printf(" cannot be add because existing the same node !\n");
  }
  /* violation ->:    */
  // 2) left right rotate 
  if((*nodePtr)->left != NULL && (*nodePtr)->left->right!= NULL){  
    violationCaseTwoLeft(&(*nodePtr), addNode);
  }
  /* 3) right rotation */
  else if((*nodePtr)->left != NULL && (*nodePtr)->left->left!= NULL){   
   violationCaseThreeLeft(&(*nodePtr), addNode);  
  }
  /* 4) right left rotation */
  else if((*nodePtr)->right != NULL && (*nodePtr)->right->left != NULL){   
    violationCaseTwoRight(&(*nodePtr), addNode);
  }
  /* 5) left rotation */
  else if((*nodePtr)->right != NULL && (*nodePtr)->right->right!= NULL){  
    violationCaseThreeRight(&(*nodePtr), addNode);
  }
}

void rbtAdd(Node **nodePtr, Node *addNode){
  InternalAdd(nodePtr, addNode);
  (*nodePtr)->colour = BLACK;
}


/**
* @function:
* remember the node that will delete from red black tree
* return whole structure that is ReturnedObject structure
*/
ReturnedObject rbtRemoveInt(Node *deleteNode){
  ReturnedObject ro;
  
    ro.removedNode = deleteNode;
    ro.returnedColour = DOUBLE_BLACK;
    ro.removedNode->colour = DOUBLE_BLACK;
    ro.removedNode->value = deleteNode->value;
    return ro;
}

/** 
*==============
    CASE 1(a)
*==============
* left double black  
* sibling = cut off node's sibling
* parent = sibling's parent 
* child = sibling's child
*
*     /                               /
*   2(R)                             3(R)
*  // \                              /  \
*  . 3(B)     Rotate left         2(B)  5(B)
*     / \     ---------->         / \   / \
*    .  5(R)                     .  .  .  .
*       / \
*      .   .
*
* if sibling is black
* right child is red (with the parent being RED) 
*==================================================
*
*     /                               /
*   2(B)                             3(B)
*  // \                              /  \
*  . 3(B)     Rotate left         2(B)  5(B)
*     / \     ---------->         / \   / \
*    .  5(R)                     .  .  .  .
*       / \
*      .   .
*
* if sibling is black
* right child is red (with the parent being BLACK) 
*/
void caseOneALeft(Node **nodePtr, Node *deleteNode){
  Node *parent, *sibling, *child;
  parent = *nodePtr;
  sibling = parent->right;
  child = sibling->right;
  
  if (parent->left != NULL){
    if(parent->left->colour == DOUBLE_BLACK){
    //(*nodePtr)->left = NULL;
  
      if (parent->colour == RED && sibling->colour == BLACK){
        if (child != NULL && child->colour == RED){
          (*nodePtr)->colour = BLACK;
          (*nodePtr)->right->colour = RED;
          (*nodePtr)->right->right->colour =  BLACK;
          (*nodePtr)->left->colour = BLACK;
          rotateLeft(&(*nodePtr));
          (*nodePtr)->left->left->colour = BLACK;
          
            if (parent->left->value == deleteNode->value){
              parent->left = NULL;
            }
        }
      }
      else if (parent->colour == BLACK && sibling->colour == BLACK){
        if (child != NULL && child->colour == RED){
          (*nodePtr)->right->right->colour = BLACK;  
          (*nodePtr)->left->colour = BLACK;      
          rotateLeft(&(*nodePtr));
          (*nodePtr)->left->left->colour = BLACK;
          
          if (parent->left->value == deleteNode->value){
              parent->left = NULL;
            }
        }
      }
    }
    
  }

}

/** 
*==============
    CASE 1(b)
*==============
* left double black  
* sibling = cut off node's sibling
* parent = sibling's parent 
* child = sibling's child
*     /                               /
*   2(R)                             3(R)
*  // \                              /  \
*  . 5(B)     Rotate right         2(B)  5(B)
*     / \         left              / \   / \
*  3(R)  .    ---------->          .  .  .  .
*       / \
*      .   .
*
* if sibling is black
* left child is red (with the parent being RED) 
*==================================================
*
*     /                               /
*   2(B)                             3(B)
*  // \                              /  \
*  . 5(B)     Rotate right         2(B)  5(B)
*     / \         left              / \   / \
*  3(R)  .    ---------->          .  .  .  .
*   / \
*  .   .
*
* if sibling is black
* left child is red (with the parent being BLACK) 
*/
void caseOneBLeft(Node **nodePtr, Node *deleteNode){
  Node *parent, *sibling, *child;
  parent = *nodePtr;
  sibling = parent->right;
  child = sibling->left;
  
  if (parent->left != NULL){
    if(parent->left->colour == DOUBLE_BLACK){

      if (parent->colour == RED && sibling->colour == BLACK){
        if (child != NULL && child->colour == RED){
          (*nodePtr)->colour = BLACK;
          (*nodePtr)->left->colour = BLACK;      
          rotateRightLeft(&(*nodePtr));
          (*nodePtr)->left->left->colour = BLACK;
          
          if (parent->left->value == deleteNode->value){
              parent->left = NULL;
            }
        }
      }
      else if (parent->colour == BLACK && sibling->colour == BLACK){
        if (child != NULL && child->colour == RED){
          (*nodePtr)->left->colour = BLACK;   
          (*nodePtr)->right->left->colour = BLACK;        
          rotateRightLeft(&(*nodePtr));
          (*nodePtr)->left->left->colour = BLACK;
          
          if (parent->left->value == deleteNode->value){
              parent->left = NULL;
            }
        }
      }
    }
  }
}
/** 
*==============
    CASE 2(a)
*==============
* left double black
*
*     /                               //
*   2(B)                             2(D.B)
*  // \                              /  \
*  . 5(B)         flip              .   5(R)
*     / \         colour                 / \   
*  3(B)  7(B)    ------->             3(B) 7(B)
*  /  \  /  \                         / \   / \
* .   .  .  .                        .   .  .  .
*
* if sibling is black
* BOTH sibling's children are BLACK (with the parent being BLACK) 
*=================================================================
*     /                               //
*   2(B)                             2(D.B)
*  // \                              /  \
*  . 5(B)         flip              .   5(R)
*     / \         colour                 / \   
*     .  .       ------->               .  .
* if sibling is black
* BOTH sibling's children are NULL (with the parent being BLACK) 
*/
void caseTwoALeft(Node **nodePtr, Node *deleteNode){
  Node *parent, *sibling, *childLeft, *childRight;
  parent = *nodePtr;
  sibling = parent->right;
  childLeft = sibling->left;
  childRight = sibling->right;
    
  if (parent->left != NULL){
    if(parent->left->colour == DOUBLE_BLACK){
  
      if (parent->colour == BLACK && sibling->colour == BLACK){
        if (childLeft == NULL && childRight == NULL){
          (*nodePtr)->colour = DOUBLE_BLACK;
          (*nodePtr)->left->colour = BLACK;        
          (*nodePtr)->right->colour = RED;
          if (parent->left->value == deleteNode->value){
              parent->left = NULL;
            }
        }
        else if (childLeft->colour == BLACK && childRight->colour == BLACK){
          (*nodePtr)->colour = DOUBLE_BLACK;
          (*nodePtr)->left->colour = BLACK;   
          (*nodePtr)->right->colour = RED;  
          if (parent->left->value == deleteNode->value){
              parent->left = NULL;
            }
        }
      }
    }
  }
}
/*
*==============
    CASE 2(b)
*==============
* left double black
*
*     /                                /
*   2(R)                             2(B)
*  // \                              /  \
*  . 5(B)         flip              .   5(R)
*     / \         colour                 / \   
*  3(B)  7(B)    ------->             3(B) 7(B)
*  /  \  /  \                         / \   / \
* .   .  .  .                        .   .  .  .
*
* if sibling is black
* BOTH sibling's children are BLACK (with the parent being RED) 
*=================================================================
*     /                               /
*   2(R)                             2(B)
*  // \                              /  \
*  . 5(B)         flip              .   5(R)
*     / \         colour                 / \   
*     .  .       ------->               .  .
* if sibling is black
* BOTH sibling's children are NULL (with the parent being RED) 
*/
void caseTwoBLeft(Node **nodePtr, Node *deleteNode){
  Node *parent, *sibling, *childLeft, *childRight;
  parent = *nodePtr;
  sibling = parent->right;
  childLeft = sibling->left;
  childRight = sibling->right;
  

  if (parent->left != NULL){
    if(parent->left->colour == DOUBLE_BLACK){

      if (parent->colour == RED && sibling->colour == BLACK){
        if (childLeft == NULL && childRight == NULL){
          (*nodePtr)->colour = BLACK;
          (*nodePtr)->left->colour = BLACK;   
          (*nodePtr)->right->colour = RED;
          if (parent->left->value == deleteNode->value){
              parent->left = NULL;
            }
        }
        else if (childLeft->colour == BLACK && childRight->colour == BLACK){
          (*nodePtr)->colour = BLACK;
          (*nodePtr)->left->colour = BLACK;         
          (*nodePtr)->right->colour = RED;  
          if (parent->left->value == deleteNode->value){
              parent->left = NULL;
            }
        }
      }
    }
  }
}

/*
* ==========
*  CASE 3 left 
* ==========
*         /                   /                      /
*       2(B)      rotate     5(B)       use         5(B)
*      //  \      left       /  \       case 2      / \
*      .  5(R)    ----->   2(R) 7(B)    ----->   2(B) 7(B)
*         /  \            // \   / \             / \   / \
*       3(B) 7(B)        .  3(B) .  .           . 3(R) . .
*                           / \                    / \
*                           . .                    . .
*
* the sibling is red 
*
*/
void caseThreeLeft(Node **nodePtr, Node *deleteNode){
  Node *parent, *sibling, *childLeft, *childRight;
  parent = *nodePtr;
  sibling = parent->right; 
  
  if (parent->left != NULL){
    if(parent->left->colour == DOUBLE_BLACK){  
      
      if(sibling->colour == RED){
        sibling->colour = (*nodePtr)->colour;
        (*nodePtr)->colour = RED;      
        rotateLeft(&(*nodePtr));
        caseOneALeft(&((*nodePtr)->left), deleteNode);
        caseOneBLeft(&((*nodePtr)->left), deleteNode);
        caseThreeLeft(&((*nodePtr)->left), deleteNode);
        if((*nodePtr)->left->colour == RED && (*nodePtr)->left->right->colour == BLACK){
          caseTwoBLeft(&((*nodePtr)->left), deleteNode);
        }
       else if((*nodePtr)->left->colour == BLACK && (*nodePtr)->left->right->colour == BLACK){
          caseTwoALeft(&((*nodePtr)->left), deleteNode);
        }
        
      }
    }
  }
}
/*================= Reflection ==(Right)===========================*/
/*
*==============
    CASE 1(a)
*==============
* Right double black  
* sibling = cut off node's sibling
* parent = sibling's parent 
* child = sibling's child
*
*     /                               /
*   5(R)                            3(R)
*   / \\                           /  \
* 3(B) .   Rotate Right         2(B)  5(B)
* /  \     ---------->         / \   / \
*2(R)                        .  .  .  .
* / \
*.  . 
*
* if sibling is black
* left child of sibling is red (with the parent being RED) 
*==================================================
*
*       /                               /
*     5(B)                            3(B)
*     / \\                           /  \
*  3(B)  .   Rotate Right         2(B)  5(B)
*   / \     ---------->           / \   / \
* 2(R)                            .  .  .  .
* / \
* . .
*
* if sibling is black
* left child is red (with the parent being BLACK) 
*/
void caseOneARight(Node **nodePtr, Node *deleteNode){
  Node *parent, *sibling, *child;
  parent = *nodePtr;
  sibling = parent->left;
  child = sibling->left;
  
  if (parent->right != NULL){
    if(parent->right->colour == DOUBLE_BLACK){
  
      if (parent->colour == RED && sibling->colour == BLACK){
        if (child != NULL && child->colour == RED){
          (*nodePtr)->colour = BLACK;
          (*nodePtr)->right->colour = BLACK;
          (*nodePtr)->left->colour = RED;
          (*nodePtr)->left->left->colour =  BLACK;
          rotateRight(&(*nodePtr));
          if (parent->right->value == deleteNode->value){
              parent->right = NULL;
            }
        }
      }
      else if (parent->colour == BLACK && sibling->colour == BLACK){
        if (child != NULL && child->colour == RED){
          (*nodePtr)->right->colour = BLACK;
          (*nodePtr)->left->left->colour = BLACK;  
          rotateRight(&(*nodePtr));
          if (parent->right->value == deleteNode->value){
            parent->right = NULL;
            }
        }
      }
    }
  }
}
/*
*==============
    CASE 1(b)
*==============
* Right double black  
* sibling = cut off node's sibling
* parent = sibling's parent 
* child = sibling's child
*     /                               /
*   5(R)                             3(R)
*  /  \\                              /  \
* 2(B) .     Rotate left         2(B)  5(B)
* / \         right              / \   / \
*. 3(R)      ---------->        .  .  .  .
*  / \
*  .  .
*
* if sibling is black
* right child is red (with the parent being RED) 
*==================================================
*     /                                /
*   5(B)                             3(B)
*  /  \\                              /  \
* 2(B) .     Rotate left         2(B)  5(B)
* / \         right              / \   / \
*. 3(R)      ---------->        .  .  .  .
*  / \
*  .  .
* if sibling is black
* right child is red (with the parent being BLACK) 
*/
void caseOneBRight(Node **nodePtr, Node *deleteNode){
  Node *parent, *sibling, *child;
  parent = *nodePtr;
  sibling = parent->left;
  child = sibling->right;
  
  if (parent->right != NULL){
    if(parent->right->colour == DOUBLE_BLACK){
  
      if (parent->colour == RED && sibling->colour == BLACK){
        if (child != NULL && child->colour == RED){
          (*nodePtr)->colour = BLACK;
          (*nodePtr)->right->colour = BLACK;
          rotateLeftRight(&(*nodePtr));
          if (parent->right->value == deleteNode->value){
            parent->right = NULL;
            }
        }
      }
      else if (parent->colour == BLACK && sibling->colour == BLACK){
        if (child != NULL && child->colour == RED){
          (*nodePtr)->right->colour = BLACK;   
          (*nodePtr)->left->right->colour = BLACK;        
          rotateLeftRight(&(*nodePtr));
          if (parent->right->value == deleteNode->value){
            parent->right = NULL;
            }          
        }
      }
    }
  }
}
/*
*==============
    CASE 2(a) -right
*==============
* right double black
*
*          /                            //
*       7(B)                           7(D.B)
*      /   \\                         /  \
*     3(B)  .     flip              3(R)  .
*    / \         colour             / \   
* 2(B) 5(B)    ------->         2(B) 5(B)
* /  \  /  \                   / \   / \
* .   .  .  .                 .   .  .  .
*
* if sibling is black
* BOTH sibling's children are BLACK (with the parent being BLACK) 
*=================================================================
*      /                         //
*    7(B)                      7(D.B)
*   /  \\                      /  \
*  3(B) .      flip         3(R)  .
*  / \        colour        / \   
* .  .       ------->      .  .
* if sibling is black
* BOTH sibling's children are NULL (with the parent being BLACK) 
*/
void caseTwoARight(Node **nodePtr, Node *deleteNode){
  Node *parent, *sibling, *childLeft, *childRight;
  parent = *nodePtr;
  sibling = parent->left;
  childLeft = sibling->left;
  childRight = sibling->right;
  
  if (parent->right != NULL){
    if(parent->right->colour == DOUBLE_BLACK){
  
      if (parent->colour == BLACK && sibling->colour == BLACK){
        if (childLeft == NULL && childRight == NULL){
          (*nodePtr)->colour = DOUBLE_BLACK;
          (*nodePtr)->right->colour = BLACK;   
          (*nodePtr)->left->colour = RED;
          if (parent->right->value == deleteNode->value){
            parent->right = NULL;
            }          
        }
        else if (childLeft->colour == BLACK && childRight->colour == BLACK){
          (*nodePtr)->colour = DOUBLE_BLACK;
          (*nodePtr)->right->colour = BLACK;   
          (*nodePtr)->left->colour = RED;  
          if (parent->right->value == deleteNode->value){
            parent->right = NULL;
            }        
        }
      }
    }
  }
}
/*
*==============
    CASE 2(b) -right
*==============
* right double black
*
*          /                            /
*       7(R)                           7(B)
*      /   \\                         /  \
*     3(B)  .     flip              3(R)  .
*    / \         colour             / \   
* 2(B) 5(B)    ------->         2(B) 5(B)
* /  \  /  \                   / \   / \
* .   .  .  .                 .   .  .  .
*
* if sibling is black
* BOTH sibling's children are BLACK (with the parent being RED) 
*=================================================================
*      /                         /
*    7(R)                      7(B)
*   /  \\                      /  \
*  3(B) .      flip         3(R)  .
*  / \        colour        / \   
* .  .       ------->      .  .
* if sibling is black
* BOTH sibling's children are NULL (with the parent being RED) 
*/
void caseTwoBRight(Node **nodePtr, Node *deleteNode){
  Node *parent, *sibling, *childLeft, *childRight;
  parent = *nodePtr;
  sibling = parent->left;
  childLeft = sibling->left;
  childRight = sibling->right;
  
  if (parent->right != NULL){
    if(parent->right->colour == DOUBLE_BLACK){
  
      if (parent->colour == RED && sibling->colour == BLACK){
        if (childLeft == NULL && childRight == NULL){
          (*nodePtr)->colour = BLACK;
          (*nodePtr)->right->colour = BLACK;   
          (*nodePtr)->left->colour = RED;
          if (parent->right->value == deleteNode->value){
            parent->right = NULL;
            }          
        }
        else if (childLeft->colour == BLACK && childRight->colour == BLACK){
          (*nodePtr)->colour = BLACK;
          (*nodePtr)->right->colour = BLACK;   
          (*nodePtr)->left->colour = RED;  
          if (parent->right->value == deleteNode->value){
            parent->right = NULL;
            }          
        }
      }
    }
  }
}
/*
* ==========
*  CASE 3 right 
* ==========
*         /                   /                      /
*       7(B)      rotate     3(B)       use         3(B)
*      /  \\      right     /   \     case 2      / \
*     3(R) .     ----->   2(B)  7(R)    ----->   2(B) 7(B)
*    /  \                 / \  / \\             / \  /  \
* 2(B) 5(B)             .   . 5(B) .           .  . 5(R) . 
*                            / \                    / \
*                           .  .                    . .
*
* the sibling is red 
*
*/
void caseThreeRight(Node **nodePtr, Node *deleteNode){
  Node *parent, *sibling, *child;
  parent = *nodePtr;
  sibling = parent->left;  
  child = sibling->left;
  
  if (parent->right != NULL){
    if(parent->right->colour == DOUBLE_BLACK){
      
      if(sibling->colour == RED){
        rotateRight(&(*nodePtr));
        (*nodePtr)->colour = BLACK;
        (*nodePtr)->right->colour = RED; 

          caseOneARight(&((*nodePtr)->right), deleteNode);
          caseOneBRight(&((*nodePtr)->right), deleteNode);
          caseThreeRight(&((*nodePtr)->right), deleteNode);
          if(((*nodePtr)->right->colour == RED) && ((*nodePtr)->right->left->colour == BLACK)){
            caseTwoBRight(&((*nodePtr)->right), deleteNode);
          }
          else if(((*nodePtr)->right->colour == BLACK) && ((*nodePtr)->right->left->colour == BLACK)){
            caseTwoARight(&((*nodePtr)->right), deleteNode);
          }
      }
    }
  }  
}

void deleteRBTNode(Node **nodePtr, Node *deleteNode, ReturnedObject ro){
  deleteRBTNodeInt(nodePtr, deleteNode, ro);
  (*nodePtr)->colour = BLACK;
  
  if((*nodePtr)->value == deleteNode->value){
    deleteNode = NULL;
    (*nodePtr) = deleteNode;
  }
}

void deleteRBTNodeInt(Node **nodePtr, Node *deleteNode, ReturnedObject ro){
  Node *returnReplacedNode;
 // ReturnedObject ro;
  int i=0;
  if((*nodePtr) == NULL){
    if (ro.removedNode->value == deleteNode->value){
      return;
    }
    else {
      printf("cannot be delete because nothing match inside the tree\n");
      return;
    }
  } 
  
  else if((*nodePtr)->value == deleteNode->value){
    printf("<+> nodePtr value %d\n ", (*nodePtr)->value);
    if((*nodePtr)->right != NULL){
      returnReplacedNode = Replacement((*nodePtr)->right);
    printf("<1+> returnReplacedNode value %d\n ", (returnReplacedNode)->value);
    }
    rbtRemoveInt(deleteNode);
    
   
    return;
  }
  
  else if((*nodePtr)->left != NULL && (*nodePtr)->right != NULL){
    if ((*nodePtr)->value > deleteNode->value){
      deleteRBTNodeInt(&(*nodePtr)->left, deleteNode, ro);
      caseOneALeft(&((*nodePtr)), deleteNode);
      caseOneBLeft(&((*nodePtr)), deleteNode);
      caseTwoALeft(&((*nodePtr)), deleteNode);
      caseTwoBLeft(&((*nodePtr)), deleteNode);
      caseThreeLeft(&((*nodePtr)), deleteNode);      
    } 
    else if ((*nodePtr)->value < deleteNode->value){
      deleteRBTNodeInt(&(*nodePtr)->right, deleteNode, ro);
      caseThreeRight(&((*nodePtr)), deleteNode);
      caseOneARight(&((*nodePtr)), deleteNode);
      caseOneBRight(&((*nodePtr)), deleteNode);
      caseTwoARight(&((*nodePtr)), deleteNode);
      caseTwoBRight(&((*nodePtr)), deleteNode);
      caseThreeRight(&((*nodePtr)), deleteNode);
    }  
  }
  printf("nodePtr value %d\n ", (*nodePtr)->value);
}

Node *Replacement(Node *nodeReplace){
  Node *parent, *leftMost, *tempNode;
  if ((nodeReplace) == NULL){
    return nodeReplace;
  }
  // for right side
  else if ((nodeReplace) != NULL){
    if ((nodeReplace)->left == NULL){
       leftMost = nodeReplace;
      // return leftMost;
    }
 
    else if ((nodeReplace)->left != NULL){
      Replacement((nodeReplace)->left);
      return;
    }
  }
  //printf("123node ptr value = %d\n", (nodeReplace)->value);
  if (nodeReplace->right != NULL){
    parent = nodeReplace->right;
    (nodeReplace) = parent;
  }
  //leftMost = nodeReplace;
  return leftMost;
  }






/*
void Replacement(Node **nodePtr, Node *deleteNode){
  ReturnedObject ro;  
  Node *parent, *tempNode, *tempNodeLeft, *tempNodeRight, *leftMost;
  Node *tempSwapNode, *deleteNodeLeft, *deleteNodeRight;

  if (deleteNode->value == (*nodePtr)->value){  
    // CASE 1: If current has no right child, then current's left child becomes
    //         the node pointed to by the parent
    if ((*nodePtr)->right == NULL){
      tempNode = *nodePtr;
      (*nodePtr) = (*nodePtr)->left;
      (*nodePtr)->colour = deleteNode->colour;
      (*nodePtr)->left = tempNode;
      tempNode->left = NULL;
      tempNode->right = NULL;
      leftMost = NULL;
  
    }
    
    // CASE 2: If current's right child has no left child, then current's right child
    //         replaces current in the tree
    else if ((*nodePtr)->right->left == NULL){
      tempNode = *nodePtr;
      tempNodeLeft = (*nodePtr)->left;      
      (*nodePtr) = (*nodePtr)->right;
      (*nodePtr)->colour = deleteNode->colour;
      (*nodePtr)->right = tempNode;
      (*nodePtr)->left = tempNodeLeft;
      tempNode->left = NULL;
      tempNode->right = NULL;
      leftMost = NULL;      
     
    }
    
    // CASE 3: If current's right child has a left child, replace current with current's
    //          right child's left-most descendent    
    else if ((*nodePtr)->right->left != NULL){
      leftMost = (*nodePtr)->right->left;
      parent = (*nodePtr)->right;
      // We first need to find the right node's left-most child 
      while (leftMost->left != NULL){
        parent = leftMost;
        leftMost = leftMost->left;
      }
      //getReplacingNode(leftMost);
      
      if (leftMost->right != NULL){
        tempNode = (*nodePtr);
        deleteNodeLeft = (*nodePtr)->left;
        tempSwapNode = leftMost->right;
        deleteNodeRight = (*nodePtr)->right;
        (*nodePtr) = leftMost;
        (*nodePtr)->colour = deleteNode->colour;
        (*nodePtr)->right = deleteNodeRight;
        (*nodePtr)->left = deleteNodeLeft;
        // internalSwap(&leftMost, leftMost->right);
        //leftMost = tempSwapNode;
        //leftMost->right = deleteNode;
      }
      else {
        //tempSwapNode = (*nodePtr);
        tempNodeLeft = (*nodePtr)->left;
        tempNodeRight = (*nodePtr)->right;
        tempNode = (*nodePtr);
        printf (" tempnode addr = %p\n", tempNode);
        printf (" tempnode addr = %d\n", tempNode->value);
        (*nodePtr) = leftMost;
        (*nodePtr)->colour = deleteNode->colour;
        (*nodePtr)->left = tempNodeLeft;
        (*nodePtr)->right = tempNodeRight;
        parent = (*nodePtr)->right;
        leftMost = (*nodePtr)->right->left;
        printf ("100 parent value = %d\n", parent->value);
         while (leftMost->left->left != NULL){
          parent = leftMost;
          printf ("100 parent value = %d\n", parent->value);
          leftMost = leftMost->left;
        }
        printf ("100 parent value = %d\n", parent->value);
        if ((*nodePtr)->value == parent->value){
           (*nodePtr)->left = deleteNode;
         
        }
        else {
          if ((*nodePtr)->value > deleteNode->value){
            Replacement(&(*nodePtr)->left, parent);
          }
          else if ((*nodePtr)->value < deleteNode->value){
            Replacement(&(*nodePtr)->right, parent);
          }
        }
      }
   
    }
  }
  
    
  else {
      if ((*nodePtr)->value > deleteNode->value){
        Replacement(&(*nodePtr)->left, deleteNode);
      }
      else if ((*nodePtr)->value < deleteNode->value){
        Replacement(&(*nodePtr)->right, deleteNode);
      }
    }
}

*/


void internalSwap(Node **nodePtr, Node *ptr, Node *left, Node *right){
  Node *tempPtrA, *tempPtrB;
  tempPtrA = ptr;
  tempPtrA->value = ptr->value;
  tempPtrB = (*nodePtr);
  tempPtrB->value = (*nodePtr)->value;  
  ptr = tempPtrB;
  ptr->value = tempPtrB->value;
  
  (*nodePtr) = tempPtrA;
  (*nodePtr)->right = ptr;
  ptr->left = left;
  ptr->right = right;
  
}

ReturnedObject getReplacingNode(Node *replacingNode){
  ReturnedObject ro;

    ro.replacedNode = replacingNode;
    // ro.returnedColour = replacingNode->colour;
    ro.replacedNode->colour = replacingNode->colour;
    ro.replacedNode->value = replacingNode->value;
    return ro;
}
