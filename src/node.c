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




// // This function fixes violations caused by BST insertion
// void RBTree::fixViolation(Node *&root, Node *&pt)
// {
    // Node *parent_pt = NULL;
    // Node *grand_parent_pt = NULL;
 
    // while ((pt != root) && (pt->color != BLACK) &&
           // (pt->parent->color == RED))
    // {
 
        // parent_pt = pt->parent;
        // grand_parent_pt = pt->parent->parent;
 
        // /*  Case : A
            // Parent of pt is left child of Grand-parent of pt */
        // if (parent_pt == grand_parent_pt->left)
        // {
 
            // Node *uncle_pt = grand_parent_pt->right;
 
            // /* Case : 1
               // The uncle of pt is also red
               // Only Recoloring required */
            // if (uncle_pt != NULL && uncle_pt->color == RED)
            // {
                // grand_parent_pt->color = RED;
                // parent_pt->color = BLACK;
                // uncle_pt->color = BLACK;
                // pt = grand_parent_pt;
            // }
 
            // else
            // {
                // /* Case : 2
                   // pt is right child of its parent
                   // Left-rotation required */
                // if (pt == parent_pt->right)
                // {
                    // rotateLeft(root, parent_pt);
                    // pt = parent_pt;
                    // parent_pt = pt->parent;
                // }
 
                // /* Case : 3
                   // pt is left child of its parent
                   // Right-rotation required */
                // rotateRight(root, grand_parent_pt);
                // swap(parent_pt->color, grand_parent_pt->color);
                // pt = parent_pt;
            // }
        // }
 
        // /* Case : B
           // Parent of pt is right child of Grand-parent of pt */
        // else
        // {
            // Node *uncle_pt = grand_parent_pt->left;
 
            // /*  Case : 1
                // The uncle of pt is also red
                // Only Recoloring required */
            // if ((uncle_pt != NULL) && (uncle_pt->color == RED))
            // {
                // grand_parent_pt->color = RED;
                // parent_pt->color = BLACK;
                // uncle_pt->color = BLACK;
                // pt = grand_parent_pt;
            // }
            // else
            // {
                // /* Case : 2
                   // pt is left child of its parent
                   // Right-rotation required */
                // if (pt == parent_pt->left)
                // {
                    // rotateRight(root, parent_pt);
                    // pt = parent_pt;
                    // parent_pt = pt->parent;
                // }
 
                // /* Case : 3
                   // pt is right child of its parent
                   // Left-rotation required */
                // rotateLeft(root, grand_parent_pt);
                // swap(parent_pt->color, grand_parent_pt->color);
                // pt = parent_pt;
            // }
        // }
    // }
 
    // root->color = BLACK;
// }
 
// // Function to insert a new node with given data
// void RBTree::insert(const int &data)
// {
    // Node *pt = new Node(data);
 
    // // Do a normal BST insert
    // root = BSTInsert(root, pt);
 
    // // fix Red Black Tree violations
    // fixViolation(root, pt);
// }
// */