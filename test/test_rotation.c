#include "unity.h"
#include "rotation.h"
#include "node.h"

typedef enum{
  RED, BLACK,DOUBLE_BLACK
}Color;

void initNode(Node *root ,int value, Node *left, Node *right, int color){
  root->left = left;
  root->right = right;
  root->colour = color;
  root->value = value;
}
Node node5, node10, node20, node25, node50, node60, node80, node100, \
    node120, node150, node170, node250;

void setUp(void){
  initNode(&node5, 5, NULL, NULL, BLACK);
  initNode(&node10, 10, NULL, NULL, BLACK);
  initNode(&node20, 20, NULL, NULL, BLACK);
  initNode(&node25, 25, NULL, NULL, BLACK);   
  initNode(&node50, 50, NULL, NULL, BLACK);
  initNode(&node60, 60, NULL, NULL, BLACK);
  initNode(&node80, 80, NULL, NULL, BLACK);
  initNode(&node100, 100, NULL, NULL, BLACK);
  initNode(&node120, 120, NULL, NULL, BLACK);    
  initNode(&node150, 150, NULL, NULL, BLACK);  
  initNode(&node170, 170, NULL, NULL, BLACK);  
  initNode(&node250, 250, NULL, NULL, BLACK);  
}

void tearDown(void){}

/*
*     80                         150
*    / \        left rotate     / \
*      150      ---------->   80     
*      / \                     
*   null null                  
*
*/

void test_left_rotation_with_node80_and_one_child(void){
  Node *root = &node80;
  initNode(&node80, 80, NULL, &node150, BLACK);
  initNode(&node150, 150, NULL, NULL, BLACK);
  rotateLeft(&root);
  
  TEST_ASSERT_EQUAL_PTR(root, &node150);
  TEST_ASSERT_EQUAL_PTR(root->left, &node80);
}

/*
*    150                         150
*    / \         left rotate     / \
*                ---------->   
*    
*/

void test_left_rotation_with_node150(void){
  Node *root = &node150;
  initNode(&node150, 150, NULL, NULL, BLACK);
  rotateLeft(&root);
  
  TEST_ASSERT_EQUAL_PTR(root, &node150);
  TEST_ASSERT_EQUAL_PTR(root->left, NULL);
  TEST_ASSERT_EQUAL_PTR(root->right, NULL);
}

/*
*     60                         100
*    / \         left rotate     / \
*   50 100       ---------->   60
*                             /
*                            50
*/

void test_left_rotation_with_node_60_and_two_children(void){
  Node *root = &node60;
  initNode(&node60, 60, &node50, &node100, BLACK);
  initNode(&node50, 50, NULL, NULL, BLACK);
  initNode(&node100, 100, NULL, NULL, BLACK);
  rotateLeft(&root);
  
  TEST_ASSERT_EQUAL_PTR(root, &node100);
  TEST_ASSERT_EQUAL_PTR(root->left, &node60);
  TEST_ASSERT_EQUAL_PTR(root->right, NULL);
  TEST_ASSERT_EQUAL_PTR(root->left->left, &node50);  
}

/*
*     100                          150
*    / \           left rotate     / \
*   80 150         ---------->   100  170  
*      / \                      / \
*   120 170                   80  120
*
*/
void test_left_rotation_with_node_100_and_left_channel(void){
  Node *root = &node100;
  initNode(&node100, 100, &node80, &node150, BLACK);
  initNode(&node150, 150, &node120, &node170, BLACK);
  initNode(&node80, 80, NULL, NULL, BLACK);
  initNode(&node120, 120, NULL, NULL, BLACK);
  initNode(&node170, 170, NULL, NULL, BLACK);
  rotateLeft(&root);
  
  TEST_ASSERT_EQUAL_PTR(root, &node150);
  TEST_ASSERT_EQUAL_PTR(root->right, &node170);
  TEST_ASSERT_EQUAL_PTR(root->left, &node100);
  TEST_ASSERT_EQUAL_PTR(root->left->left, &node80);  
  TEST_ASSERT_EQUAL_PTR(root->left->right, &node120);    
}

/*
*     5                           5
*    / \         right rotate    / \
*                ---------->   
*    
*/

void test_right_rotation_with_node5(void){
  Node *root = &node5;
  initNode(&node5, 5, NULL, NULL, BLACK);
  rotateRight(&root);
  
  TEST_ASSERT_EQUAL_PTR(root, &node5);
  TEST_ASSERT_EQUAL_PTR(root->left, NULL);
  TEST_ASSERT_EQUAL_PTR(root->right, NULL);
}

/*
*     50                          10
*    / \         right rotate    / \
*   10           ---------->       50
*    
*/

void test_right_rotation_with_node10(void){
  Node *root = &node50;
  initNode(&node50, 50, &node10, NULL, BLACK);
  initNode(&node10, 10, NULL, NULL, BLACK);
  rotateRight(&root);
  
  TEST_ASSERT_EQUAL_PTR(root, &node10);
  TEST_ASSERT_EQUAL_PTR(root->left, NULL);
  TEST_ASSERT_EQUAL_PTR(root->right, &node50);
}

/*
*     60                           50
*    / \         right rotate     / \
*   50 100       ---------->        60
*                                    \
*                                   100
*/

void test_right_rotation_with_node_60_and_two_children(void){
  Node *root = &node60;
  initNode(&node60, 60, &node50, &node100, BLACK);
  initNode(&node50, 50, NULL, NULL, BLACK);
  initNode(&node100, 100, NULL, NULL, BLACK);
  rotateRight(&root);
  
  TEST_ASSERT_EQUAL_PTR(root, &node50);
  TEST_ASSERT_EQUAL_PTR(root->left, NULL);
  TEST_ASSERT_EQUAL_PTR(root->right, &node60);
  TEST_ASSERT_EQUAL_PTR(root->right->right, &node100);  
}

/*
*        120                         80
*        / \      right rotate      / \
*       80  150    ---------->    5  120  
*       / \                          / \  
*       5 100                      100 150
*
*/

void test_right_rotation_with_node_120_and_two_children(void){
  Node *root = &node120;
  initNode(&node120, 120, &node80, &node150, BLACK);
  initNode(&node80, 80, &node5, &node100, BLACK);
  initNode(&node100, 100, NULL, NULL, BLACK);
  initNode(&node100, 5, NULL, NULL, BLACK);
  rotateRight(&root);
  
  TEST_ASSERT_EQUAL_PTR(root, &node80);
  TEST_ASSERT_EQUAL_PTR(root->left, &node5);
  TEST_ASSERT_EQUAL_PTR(root->right, &node120);
  TEST_ASSERT_EQUAL_PTR(root->right->right, &node150);  
  TEST_ASSERT_EQUAL_PTR(root->right->left, &node100); 
}

/*
*     120                             100                      
*      /     left right rotate        / \
*     80         ---------->         80 120
*    / \                             /                    
*  60 100                          60
*                                 
*                                 
*/

void test_left_right_rotation_with_node_100_and_child_80(void){
  Node *root = &node120;
  initNode(&node120, 120, &node80, NULL, BLACK);
  initNode(&node80, 80, &node60, &node100, BLACK);
  initNode(&node60, 60, NULL, NULL, BLACK);
  initNode(&node100, 100, NULL, NULL, BLACK);
  rotateLeftRight(&root);
  
  TEST_ASSERT_EQUAL_PTR(root, &node100);
  TEST_ASSERT_EQUAL_PTR(root->left, &node80);
  TEST_ASSERT_EQUAL_PTR(root->right, &node120);
  TEST_ASSERT_EQUAL_PTR(root->left->left, &node60);
}

/*
*         150       leftRight            50
*         / \      --------->           /  \
*        20 250                        20   150  
*       / \                           / \   / \
*      5  50                         5  25 100 250
*         / \
*        25 100
*/
void test_left_right_rotation_with_node_150_and_child_20(void){
  Node *root = &node150;
  initNode(&node150, 150, &node20, &node250, BLACK);
  initNode(&node20, 20, &node5, &node50, BLACK);
  initNode(&node50, 50, &node25, &node100, BLACK);
  initNode(&node100, 100, NULL, NULL, BLACK);
  initNode(&node25, 25, NULL, NULL, BLACK); 
  initNode(&node5, 5, NULL, NULL, BLACK);  
  rotateLeftRight(&root);
  
  TEST_ASSERT_EQUAL_PTR(root, &node50);
  TEST_ASSERT_EQUAL_PTR(root->left, &node20);
  TEST_ASSERT_EQUAL_PTR(root->right, &node150);
  TEST_ASSERT_EQUAL_PTR(root->left->left, &node5);
  //....
}

/*
*         60                          
*        / \        rightLeft
*       50  100     ----------->
*           / \
*         80  170
*             / \
*            150 250
*
*/


