#include "unity.h"
#include "rotation.h"
#include "node.h"
#include "CustomAssert.h"



void initNode(Node *root ,int value, Node *left, Node *right, Color color){
  root->left = left;
  root->right = right;
  root->colour = color;
  root->value = value;
}
Node node5, node10, node20, node25, node50, node60, node70, node80, node100, node110,\
    node120, node130, node150, node170, node250;

void setUp(void){
  initNode(&node5, 5, NULL, NULL, BLACK);
  initNode(&node10, 10, NULL, NULL, BLACK);
  initNode(&node20, 20, NULL, NULL, BLACK);
  initNode(&node25, 25, NULL, NULL, BLACK);   
  initNode(&node50, 50, NULL, NULL, BLACK);
  initNode(&node60, 60, NULL, NULL, BLACK);
  initNode(&node70, 70, NULL, NULL, BLACK);    
  initNode(&node80, 80, NULL, NULL, BLACK);
  initNode(&node100, 100, NULL, NULL, BLACK);
  initNode(&node110, 110, NULL, NULL, BLACK);
  initNode(&node120, 120, NULL, NULL, BLACK);
  initNode(&node130, 130, NULL, NULL, BLACK);    
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
  TEST_ASSERT_EQUAL_NODE(80, NULL, NULL, BLACK, &node80);
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
  TEST_ASSERT_EQUAL_NODE(150, NULL, NULL, BLACK, &node150);
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
  TEST_ASSERT_EQUAL_NODE(50, &node20, &node150, BLACK, &node50);
  TEST_ASSERT_EQUAL_NODE(20, &node5, &node25, BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(150, &node100, &node250, BLACK, &node150);
  TEST_ASSERT_EQUAL_NODE(5, NULL, NULL, BLACK, &node5);
  TEST_ASSERT_EQUAL_NODE(25, NULL, NULL, BLACK, &node25);
  TEST_ASSERT_EQUAL_NODE(100, NULL, NULL, BLACK, &node100);  
  TEST_ASSERT_EQUAL_NODE(250, NULL, NULL, BLACK, &node250);
  }

/*
*       100   right     100     left    120
*         \   ---->       \    ---->    / \
*         170            120          100  170
*         /               \
*         120            170        
*/
void test_right_left_rotation_simple_with_node_100(void){
  Node *root = &node100;
  initNode(&node100, 100, NULL, &node170, BLACK);
  initNode(&node170, 170, &node120, NULL, BLACK);;  
  initNode(&node120, 120, NULL, NULL, BLACK);    
  rotateRightLeft(&root);
  
  TEST_ASSERT_EQUAL_PTR(root, &node120);
  TEST_ASSERT_EQUAL_NODE(120, &node100, &node170, BLACK, &node120);
  TEST_ASSERT_EQUAL_NODE(100, NULL, NULL, BLACK, &node100);  
  TEST_ASSERT_EQUAL_NODE(170, NULL, NULL, BLACK, &node170);
}
  
/*
*         100                  100                120
*        / \        right      / \      left      / \
*       70 150     ------->  70  120   ----->   100 150
*           / \                  / \           / \  / \
*         120  170              80 150       70 80 130 170
*         /\                       / \   
*        80 130                  130 170
*
*/
void test_right_left_rotation_with_node_100(void){
  Node *root = &node100;
  initNode(&node100, 100, &node70, &node150, BLACK);
  initNode(&node150, 150, &node120, &node170, BLACK);
  initNode(&node120, 120, &node80, &node130, BLACK);
  initNode(&node70, 70, NULL, NULL, BLACK);
  initNode(&node80, 80, NULL, NULL, BLACK); 
  initNode(&node110, 130, NULL, NULL, BLACK);  
  initNode(&node170, 170, NULL, NULL, BLACK);    
  rotateRightLeft(&root);
  
  TEST_ASSERT_EQUAL_PTR(root, &node120);
  TEST_ASSERT_EQUAL_NODE(100, &node70, &node80, BLACK, &node100);
  TEST_ASSERT_EQUAL_NODE(150, &node130, &node170, BLACK, &node150);
  TEST_ASSERT_EQUAL_NODE(70, NULL, NULL, BLACK, &node70);
  TEST_ASSERT_EQUAL_NODE(80, NULL, NULL, BLACK, &node80);
  TEST_ASSERT_EQUAL_NODE(130, NULL, NULL, BLACK, &node130);  
  TEST_ASSERT_EQUAL_NODE(170, NULL, NULL, BLACK, &node170);
}

/*
*              100(B)<-Grandparent                    100(R)<- current node
*             /   \                                    /  \
* Parent-> 80(R)  120(R)<-Uncle         ------>     80(B) 120(B)
*           /      /(R)                              / \  /(B)
*       70(R)<-current node                       70(R)
*
*/
void test_parent_of_addNode_is_left_child_of_Grandparent_of_addNode_and_addNode_is_left_child_of_parent(void){
  Node *root = &node100;
  Node *addNode = &node70;
  initNode(&node100, 100, &node80, &node120, BLACK);
  initNode(&node80, 80, NULL, NULL, RED);
  initNode(&node120, 120, NULL, NULL, RED);
  
  insert(root, addNode);
  violationCaseOneLeft(&root, addNode);
  TEST_ASSERT_EQUAL_PTR(root, &node100);
  TEST_ASSERT_EQUAL_NODE(100, &node80, &node120, RED, &node100);
  TEST_ASSERT_EQUAL_NODE(80, &node70, NULL, BLACK, &node80);
  TEST_ASSERT_EQUAL_NODE(120, NULL, NULL, BLACK, &node120); 
  TEST_ASSERT_EQUAL_NODE(70, NULL, NULL, RED, &node70);
}
/*
*     100(B)                100(R)      
*     / \         ---->     /  \
* 70(R) 120(R)          70(B)  120(B)
*  \                     \
* 80(R)                 80(R)
*
*/
void test_parent_of_addNode_is_left_child_of_Grandparent_of_addNode_and_addNode_is_right_child_of_parent(void){
  Node *root = &node100;
  Node *addNode = &node80;
  initNode(&node100, 100, &node70, &node120, BLACK);
  initNode(&node70, 70, NULL, NULL, RED);
  initNode(&node120, 120, NULL, NULL, RED);

  insert(root, addNode);  
  violationCaseOneLeft(&root, addNode);
  TEST_ASSERT_EQUAL_PTR(root, &node100);
  TEST_ASSERT_EQUAL_NODE(100, &node70, &node120, RED, &node100);
  TEST_ASSERT_EQUAL_NODE(70, NULL, &node80, BLACK, &node70);
  TEST_ASSERT_EQUAL_NODE(120, NULL, NULL, BLACK, &node120); 
  TEST_ASSERT_EQUAL_NODE(80, NULL, NULL, RED, &node80);
}

/*  
*       120 (B)                              120(B)                          100(B)
*       / \        left rotate(parent)       / \        apply case three      /  \
*  (R)80  170(B)   ----------------->    100(R) 170(B)  --------------->   80(R) 120(R)
*    / \                                   /                                      / \
*      100(R)                            80(R)                                      170(B)
*
*
*
*/
void test_case_two_uncle_is_black_and_addNode_at_left_right_of_root(void){
  Node *root = &node120;
  Node *addNode = &node100;
  initNode(&node120, 120, &node80, &node170, BLACK);
  initNode(&node80, 80, NULL,NULL, RED);
  initNode(&node170, 170, NULL, NULL, BLACK);

  insert(root, addNode);  
  violationCaseTwoLeft(&root, addNode);
  TEST_ASSERT_EQUAL_PTR(root, &node100);
  TEST_ASSERT_EQUAL_NODE(100, &node80, &node120, BLACK, &node100);
  TEST_ASSERT_EQUAL_NODE(80, NULL, NULL, RED, &node80); 
  TEST_ASSERT_EQUAL_NODE(120, NULL, &node170, RED, &node120);
  TEST_ASSERT_EQUAL_NODE(170, NULL, NULL, BLACK, &node170);    
}

/*  
*       120 (B)                                   80(B)
*       / \        right rotate(grandparent)       / \   
*  (R)80  170(B)   ----------------->           70(R) 120(R)
*    /                                                  \
*   70(R)                                               170(B)
*/ 
void test_case_three_uncle_is_black_and_addNode_at_left_left_of_root(void){
  Node *root = &node120;
  Node *addNode = &node70;
  initNode(&node120, 120, &node80, &node170, BLACK);
  initNode(&node80, 80, NULL, NULL, RED);
  initNode(&node170, 170, NULL, NULL, BLACK);

  insert(root, addNode);  
  violationCaseThreeLeft(&root, addNode);
  TEST_ASSERT_EQUAL_PTR(root, &node80);
  TEST_ASSERT_EQUAL_NODE(80, &node70, &node120, BLACK, &node80);
  TEST_ASSERT_EQUAL_NODE(70, NULL, NULL, RED, &node70);
  TEST_ASSERT_EQUAL_NODE(120, NULL, &node170, RED, &node120); 
  TEST_ASSERT_EQUAL_NODE(170, NULL, NULL, BLACK, &node170);  
}

/*
*              100(B)<-Grandparent                    100(R)<- current node
*             /   \                                    /  \
*          80(R)  120(R)         ------>           80(B) 120(B)
*           /      \                                      /  \  
*                 150(R)<-current node                      150(R)
*
*/
void test_parent_of_addNode_is_right_child_of_Grandparent_of_addNode(void){
  Node *root = &node100;
  Node *addNode = &node150;
  initNode(&node100, 100, &node80, &node120, BLACK);
  initNode(&node80, 80, NULL, NULL, RED);
  initNode(&node120, 120, NULL, NULL, RED);
  
  insert(root, addNode);
  violationCaseOneLeft(&root, addNode);
  TEST_ASSERT_EQUAL_PTR(root, &node100);
  TEST_ASSERT_EQUAL_NODE(100, &node80, &node120, RED, &node100);
  TEST_ASSERT_EQUAL_NODE(120, NULL, &node150, BLACK, &node120);
  TEST_ASSERT_EQUAL_NODE(80, NULL, NULL, BLACK, &node80); 
  TEST_ASSERT_EQUAL_NODE(150, NULL, NULL, RED, &node150);
}

/*  
*       120 (B)                              120(B)                            150(B)
*       / \        right rotate(parent)       / \        apply case three      /  \
*  (B)80  170(R)   ----------------->    80(R) 150(B)         right         120(R) 170(R)
*          /                                    \        --------------->    /  \
*         150(R)                              170(R)                      80(B)
*
*
*
*/
void test_case_two_uncle_is_black_and_addNode_at_right_left_of_root(void){
  Node *root = &node120;
  Node *addNode = &node150;
  initNode(&node120, 120, &node80, &node170, BLACK);
  initNode(&node80, 80, NULL,NULL, BLACK);
  initNode(&node170, 170, NULL, NULL, RED);

  insert(root, addNode);  
  violationCaseTwoRight(&root, addNode);
  TEST_ASSERT_EQUAL_PTR(root, &node150);
  TEST_ASSERT_EQUAL_NODE(150, &node120, &node170, BLACK, &node150);
  TEST_ASSERT_EQUAL_NODE(80, NULL, NULL, BLACK, &node80); 
  TEST_ASSERT_EQUAL_NODE(120, &node80, NULL, RED, &node120);
  TEST_ASSERT_EQUAL_NODE(170, NULL, NULL, RED, &node170);    
}

/*  
*       120 (B)                                   170(B)
*       / \        left rotate(grandparent)       / \   
*  (B)80  170(R)   ----------------->           120(R) 250(R)
*          \                                     /
*         250(R)                                80(B)
*                                          
*/ 
void test_case_three_uncle_is_black_and_addNode_at_right_right_of_root(void){
  Node *root = &node120;
  Node *addNode = &node250;
  initNode(&node120, 120, &node80, &node170, BLACK);
  initNode(&node80, 80, NULL, NULL, BLACK);
  initNode(&node170, 170, NULL, NULL, RED);

  insert(root, addNode);  
  violationCaseThreeRight(&root, addNode);
  TEST_ASSERT_EQUAL_PTR(root, &node170);
  TEST_ASSERT_EQUAL_NODE(170, &node120, &node250, BLACK, &node170);
  TEST_ASSERT_EQUAL_NODE(250, NULL, NULL, RED, &node250);
  TEST_ASSERT_EQUAL_NODE(120, &node80, NULL, RED, &node120); 
  TEST_ASSERT_EQUAL_NODE(80, NULL, NULL, BLACK, &node80);  
}