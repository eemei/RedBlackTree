#include "unity.h"
#include "rotation.h"
#include "node.h"
#include "CustomAssert.h"



void initNode(Node *root ,int value, Node *left, Node *right, Colour colour){
  root->left = left;
  root->right = right;
  root->colour = colour;
  root->value = value;
}
Node node1, node2, node3, node4, node5, node6, node7, node8, node10, node11, node12, node14, node15, \
    node20, node25, node50, node40, node60, \
    node65, node70, node75, node80, node90, node100, node110,\
    node120, node130, node150, node170, node250;

void setUp(void){
  initNode(&node1, 1, NULL, NULL, BLACK);
  initNode(&node2, 2, NULL, NULL, BLACK);
  initNode(&node3, 3, NULL, NULL, BLACK);  
  initNode(&node4, 4, NULL, NULL, BLACK);  
  initNode(&node5, 5, NULL, NULL, BLACK);
  initNode(&node6, 6, NULL, NULL, BLACK);
  initNode(&node7, 7, NULL, NULL, BLACK);
  initNode(&node8, 8, NULL, NULL, BLACK);  
  initNode(&node10, 10, NULL, NULL, BLACK);
  initNode(&node11, 11, NULL, NULL, BLACK);  
  initNode(&node12, 12, NULL, NULL, BLACK);  
  initNode(&node14, 14, NULL, NULL, BLACK);
  initNode(&node15, 15, NULL, NULL, BLACK);  
  initNode(&node20, 20, NULL, NULL, BLACK);
  initNode(&node25, 25, NULL, NULL, BLACK);   
  initNode(&node40, 40, NULL, NULL, BLACK);   
  initNode(&node50, 50, NULL, NULL, BLACK);
  initNode(&node60, 60, NULL, NULL, BLACK);
  initNode(&node65, 65, NULL, NULL, BLACK);  
  initNode(&node70, 70, NULL, NULL, BLACK);
  initNode(&node75, 75, NULL, NULL, BLACK);  
  initNode(&node80, 80, NULL, NULL, BLACK);
  initNode(&node90, 90, NULL, NULL, BLACK);  
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

void test_left_rotation_with_node_one_five_zero(void){
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

void test_left_rotation_with_node_sixty_and_two_children(void){
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
void test_left_rotation_with_node_hundred_and_left_channel(void){
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

void test_right_rotation_with_nodeFive(void){
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

void test_right_rotation_with_nodeTen(void){
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

void test_right_rotation_with_node_sixty_and_two_children(void){
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

void test_right_rotation_with_node_one_hundred_and_twenty_and_two_children(void){
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

void test_left_right_rotation_with_node_hundred_and_child_eighty(void){
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
void test_left_right_rotation_with_node_one_hundred_and_fifty_and_child_twenty(void){
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
void test_right_left_rotation_simple_with_node_hundred(void){
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
void test_right_left_rotation_with_node_hundred(void){
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

/*
*      node  ----> node
*        |          |
*      NULL         50
*                   |
*                 NULL
*/
void test_pointer_attract_to_a_node_fifty_and_return_null(void){
  Node *rootPtr = NULL; 
  Node *addNode = &node50;
  initNode(&node50, 50, &node70, &node80, BLACK);  
  rbtAdd(&rootPtr, addNode);
 
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node50);
  TEST_ASSERT_EQUAL_NODE(50, NULL, NULL, BLACK, &node50); 
}
/*
*      node  ----> node
*        |          |
*       80          80
*                  / \
*                    120
*/
void test_add_a_node_at_right_of_root(void){
  Node *rootPtr = &node80; 
  Node *addNode = &node120;
  initNode(&node80, 80, NULL, NULL, BLACK); 
  initNode(&node120, 120, &node50, &node250, BLACK);  
  rbtAdd(&rootPtr, addNode);
 
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node80);
  TEST_ASSERT_EQUAL_NODE(80, NULL, &node120, BLACK, &node80);
  TEST_ASSERT_EQUAL_NODE(120, NULL, NULL, RED, &node120);   
}
/*
* case 3 rotate left
*     50               50                     80
*    / \   add 120    / \     rotate left     / \
*      80  -->          80(R)  --------->   50  120
*                         \
*                         120
*/
void test_add_a_node_at_right_of_right_of_root_and_case_three(void){
  Node *rootPtr = &node50;
  Node *addNode = &node120;
  initNode(&node50, 50, NULL, &node80, BLACK); 
  initNode(&node80, 80, NULL, NULL, RED); 
  initNode(&node120, 120, &node90, &node250, BLACK);    
  rbtAdd(&rootPtr, addNode);
 
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node80);
  TEST_ASSERT_EQUAL_NODE(50, NULL, NULL, RED, &node50);  
  TEST_ASSERT_EQUAL_NODE(80, &node50, &node120, BLACK, &node80);
  TEST_ASSERT_EQUAL_NODE(120, NULL, NULL, RED, &node120);   
}

/*  case 1 Recolour
*
*   60 (B)     ADD    60 (B)                   60 (b)                     
*    / \       80     / \                      / \
*     100(B)   -->     100(B)      Recolour  null  100(R)      
*      / \               / \         ---->       /  \        
*   70(R) 120(R)      70(R) 120(R)           70(B)  120(B)   
*                       \                       \
*                        80(R)                  80(R)
*
*/
void test_add_a_node_and_recolour(void){
  Node *rootPtr = &node60;
  Node *addNode = &node80;
  
  initNode(&node60, 60, NULL, &node100, BLACK);  
  initNode(&node100, 100, &node70, &node120, BLACK);
  initNode(&node70, 70, NULL, NULL, RED);
  initNode(&node120, 120, NULL, NULL, RED);
  initNode(&node80, 80, &node250, &node250, BLACK);
  
  rbtAdd(&rootPtr, addNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node60);
  TEST_ASSERT_EQUAL_NODE(60, NULL, &node100, BLACK, &node60);
  TEST_ASSERT_EQUAL_NODE(100, &node70, &node120, RED, &node100);  
  TEST_ASSERT_EQUAL_NODE(120, NULL, NULL, BLACK, &node120);
  TEST_ASSERT_EQUAL_NODE(70, NULL, &node80, BLACK, &node70); 
  TEST_ASSERT_EQUAL_NODE(80, NULL, NULL, RED, &node80);  
}

/*  case 1 Recolour
*
*       100(R)      ADD          100(R)   Recolour     100(B)
*       / \          60           / \      ----->       / \
*    80(R) 120(R)   --->      80(R) 120(R)           80(B) 120(B)
*     / \                      / \                   / \
*      90(B)              60(R) 90(B)            60(R) 90(B)
*
*
*/
void test_add_a_node_and_recolour_at_rightChild_of_rightNode_and_recolour(void){
  Node *rootPtr = &node100;
  Node *addNode = &node60;
  
  initNode(&node100, 100, &node80, &node120, RED);  
  initNode(&node80, 80, NULL, &node90, RED);
  initNode(&node90, 90, NULL, NULL, BLACK);
  initNode(&node120, 120, NULL, NULL, RED);
  initNode(&node60, 60, &node250, &node50, BLACK);
  
  rbtAdd(&rootPtr, addNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node100);
  TEST_ASSERT_EQUAL_NODE(100, &node80, &node120, BLACK, &node100);
  TEST_ASSERT_EQUAL_NODE(80, &node60, &node90, BLACK, &node80);  
  TEST_ASSERT_EQUAL_NODE(120, NULL, NULL, BLACK, &node120);
  TEST_ASSERT_EQUAL_NODE(60, NULL, NULL, RED, &node60); 
  TEST_ASSERT_EQUAL_NODE(90, NULL, NULL, BLACK, &node90);  
}

/*
* case 3 right rotate 
*                    
*      150(B)          150(B)     Right ROTATION        20(B)
*      /               / \       --------->              /  \ 
*  (R)20    ADD    (R)20                              (R)5 150(R)
*            5     /                   
*                 (R)5                
*                   
*/
void test_rbtAdd_case_two_left_right_rotation(void){
  Node *rootPtr = &node150;
  Node *addNode = &node5;
  
  initNode(&node150, 150, &node20, NULL, BLACK);
  initNode(&node20, 20, NULL, NULL, RED);
  initNode(&node5, 5, &node250, NULL, BLACK);  
  rbtAdd(&rootPtr, addNode);
  
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node20);
  TEST_ASSERT_EQUAL_NODE(20, &node5, &node150, BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(5, NULL, NULL, RED, &node5);  
  TEST_ASSERT_EQUAL_NODE(150, NULL, NULL, RED, &node150);
}

/*
* case 2 and 3 (LEFT side)
*
*                  11(B)                             11(B)                         7(B)
*                 /    \                             /  \                          /  \
*              2(R)    14(B)                      7(R)  14(B)                    2(R)  11(R)
*             / \              CASE 2             /            CASE 3           /         \
*  ADD    1(B) 7(R)             ------>         2(R)           ------->       1(B)         14(B)
*   7                                            /
*                                               1(B)
*           
*                                       
*
*
*/
void test_rbtAdd_with_case_two_and_case_three(void){
  Node *rootPtr = &node11;
  Node *addNode = &node7;
  
  initNode(&node11, 11, &node2, &node14, BLACK);
  initNode(&node2, 2, &node1, &node7, RED);
  initNode(&node1, 1, NULL, NULL, BLACK);  
  initNode(&node14, 14, NULL, NULL, BLACK);  
  initNode(&node7, 7, NULL, NULL, BLACK);   
  
  rbtAdd(&rootPtr, addNode);  
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node7); 
  TEST_ASSERT_EQUAL_NODE(7, &node2, &node11, BLACK, &node7);  
  TEST_ASSERT_EQUAL_NODE(2, &node1, NULL, RED, &node2);  
  TEST_ASSERT_EQUAL_NODE(1, NULL, NULL, BLACK, &node1);  
  TEST_ASSERT_EQUAL_NODE(11, NULL, &node14, RED, &node11);   
  TEST_ASSERT_EQUAL_NODE(14, NULL, NULL, BLACK, &node14);  
}

/*
* case 3 (RIGHT side)
*
*             2(B)                        2(B)      
*              / \                        / \
*          1(B)  4(B)                  1(B) 5(B)
*                \         CASE 3           / \
*    ADD -->      5(R)    ------>       4(R) 10(R)
*     10            \
*                 10(R)
*
*/
void test_rbtAdd_with_case_three_at_right_side(void){
  Node *rootPtr = &node2;
  Node *addNode = &node10;
  
  initNode(&node2, 2, &node1, &node4, BLACK);
  initNode(&node4, 4, NULL, &node5, BLACK);
  initNode(&node1, 1, NULL, NULL, BLACK);
  initNode(&node5, 5, NULL, &node10, RED);  
  initNode(&node10, 10, NULL, NULL, BLACK);  

  rbtAdd(&rootPtr, addNode);  
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node2); 
  TEST_ASSERT_EQUAL_NODE(2, &node1, &node5, BLACK, &node2);  
  TEST_ASSERT_EQUAL_NODE(1, NULL, NULL, BLACK, &node1);  
  TEST_ASSERT_EQUAL_NODE(5, &node4, &node10, BLACK, &node5);  
  TEST_ASSERT_EQUAL_NODE(4, NULL, NULL, RED, &node4);   
  TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, RED, &node10);  
}

/*
* case 1 Recolour
*
*                     2(B)                  2(B) 
*                     / \     Recolour      / \ 
*                 1(B) 5(B)   ------->   1(B) 5(R) 
*      ADD 3          / \                     / \
*     ---->        4(R) 10(R)              4(B) 10(B) 
*                   /                       /
*                 3(R)                    3(R)
*
*/
void test_rbtAdd_with_case_one_at_left_side(void){
  Node *rootPtr = &node2;
  Node *addNode = &node3;
  
  initNode(&node2, 2, &node1, &node5, BLACK);
  initNode(&node4, 4, &node3, NULL, RED);
  initNode(&node1, 1, NULL, NULL, BLACK);
  initNode(&node5, 5, &node4, &node10, BLACK);  
  initNode(&node10, 10, NULL, NULL, RED);  
  initNode(&node3, 3, NULL, NULL, BLACK);   

  rbtAdd(&rootPtr, addNode);  
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node2); 
  TEST_ASSERT_EQUAL_NODE(2, &node1, &node5, BLACK, &node2);  
  TEST_ASSERT_EQUAL_NODE(1, NULL, NULL, BLACK, &node1);  
  TEST_ASSERT_EQUAL_NODE(5, &node4, &node10, RED, &node5);  
  TEST_ASSERT_EQUAL_NODE(4, &node3, NULL, BLACK, &node4);   
  TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, BLACK, &node10);
  TEST_ASSERT_EQUAL_NODE(3, NULL, NULL, RED, &node3);  
}

/*   case 2 rotation (multiple rotate)
*     
*             2(B)                                     2(B)                            2(B)
*             / \                                     /  \                            /  \
*  ADD     1(B) 5(R)               Rotate node      1(B) 5(R)      Rotate node      1(B) 5(R) 
*   7           / \                    10               / \           10                 / \ 
*            4(B) 10(B)          ------->           4(B) 10(R)     ------>           4(B) 7(B)
*             /     /                               /     /                          /    / \
*           3(R)   6(R)                            3(R)  7(B)                       3(R) 6(R) 10(R) 
*                   \                                     /
*                   7(R)                                6(R)
* 
*/
void test_rbtAdd_with_case_one_and_case_2_with_Add_node_seven(void){
  Node *rootPtr = &node2;
  Node *addNode = &node7;
  
  initNode(&node2, 2, &node1, &node5, BLACK);
  initNode(&node4, 4, &node3, NULL, BLACK);
  initNode(&node1, 1, NULL, NULL, BLACK);
  initNode(&node5, 5, &node4, &node10, RED);  
  initNode(&node10, 10, &node6, NULL, BLACK);  
  initNode(&node6, 6, NULL, NULL, RED);   
  initNode(&node3, 3, NULL, NULL, RED);   
  initNode(&node7, 7, NULL, NULL, BLACK);   

  rbtAdd(&rootPtr, addNode);  
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node2); 
  TEST_ASSERT_EQUAL_NODE(2, &node1, &node5, BLACK, &node2);  
  TEST_ASSERT_EQUAL_NODE(1, NULL, NULL, BLACK, &node1);  
  TEST_ASSERT_EQUAL_NODE(5, &node4, &node7, RED, &node5);  
  TEST_ASSERT_EQUAL_NODE(4, &node3, NULL, BLACK, &node4);   
  TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, RED, &node10);
  TEST_ASSERT_EQUAL_NODE(3, NULL, NULL, RED, &node3);  
  TEST_ASSERT_EQUAL_NODE(7, &node6, &node10, RED, &node7); 
  TEST_ASSERT_EQUAL_NODE(6, NULL, NULL, RED, &node6);  
}
/*
*
*            20(B)                       20(B)                          20(R) 
*            / \                         / \                            / \ 
*         12(R) 25(R)                 12(R) 25(R)                   12(B) 25(B)
*                \        recolour            \         recolour            \
* add --->      50(B)     ------>           50(R)        ----->            50(R)
*  60           /  \                        /  \                           /  \
*            40(R) 70(R)                40(B) 70(B)                     40(B) 70(B)
*                   /                          /                               /
*                  60(R)                    60(R)                            60(R)
*
*/
void recolour_twice(void){
  Node *rootPtr = &node20;
  Node *addNode = &node60;
  
  initNode(&node20, 20, &node12, &node25, BLACK);
  initNode(&node12, 12, NULL, NULL, RED);
  initNode(&node25, 25, NULL, &node50, RED);
  initNode(&node50, 50, &node40, &node70, BLACK);  
  initNode(&node40, 40, NULL, NULL, RED);  
  initNode(&node70, 70, &node60, NULL, RED);   
  initNode(&node60, 60, NULL, NULL, BLACK);      

  rbtAdd(&rootPtr, addNode);  
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node2);
  TEST_ASSERT_EQUAL_NODE(20, &node12, &node25, RED, &node20);   
  TEST_ASSERT_EQUAL_NODE(25, NULL, &node50, BLACK, &node25);   
  TEST_ASSERT_EQUAL_NODE(12, NULL, NULL, BLACK, &node12);   
  TEST_ASSERT_EQUAL_NODE(50, &node40, &node70, RED, &node50);   
  TEST_ASSERT_EQUAL_NODE(40, NULL, NULL, BLACK, &node40);   
  TEST_ASSERT_EQUAL_NODE(60, NULL, NULL, RED, &node60);   
  TEST_ASSERT_EQUAL_NODE(70, &node60, NULL, BLACK, &node70);   
}
/*
* case 1(a) 
*
*    /                               /
*   20(R)                             40(R)
*  // \                              /  \
*  . 40(B)     Rotate left         20(B)  60(B)
*     / \     ---------->         / \   / \
*    .  60(R)                     .  .  .  .
*       / \
*      .   .
*/
void test_fuction_caseOneParentRedBlack_when_parent_red(void){
  Node *rootPtr = &node20; 
  Node *deleteNode = &node10;
  initNode(&node20, 20, &node10, &node40, RED);
  initNode(&node40, 40, NULL, &node60, BLACK);
  initNode(&node60, 60, NULL, NULL, RED);
  initNode(&node10, 10, NULL, NULL, DOUBLE_BLACK);

  caseOneALeft(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node40); 
  TEST_ASSERT_EQUAL_NODE(40, &node20, &node60, RED, &node40);
  TEST_ASSERT_EQUAL_NODE(20, NULL, NULL, BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(60, NULL, NULL, BLACK, &node60);
 // TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, BLACK, &node10);
}
/* 
* case 1(a)
*
*    /                                 /
*   20(B)                             40(B)
*  // \                              /  \
*  . 40(B)     Rotate left         20(B)  60(B)
*     / \     ---------->         / \   / \
*    .  60(R)                     .  .  .  .
*       / \
*      .   .
*/
void test_fuction_caseOneParentRedBlack_when_parent_Black(void){
  Node *rootPtr = &node20; 
  Node *deleteNode = &node10;  
  initNode(&node20, 20, &node10, &node40, BLACK);
  initNode(&node40, 40, NULL, &node60, BLACK);
  initNode(&node60, 60, NULL, NULL, RED);
  initNode(&node10, 10, NULL, NULL, DOUBLE_BLACK);

  caseOneALeft(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node40); 
  TEST_ASSERT_EQUAL_NODE(40, &node20, &node60, BLACK, &node40);
  TEST_ASSERT_EQUAL_NODE(20, NULL, NULL, BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(60, NULL, NULL, BLACK, &node60);
 // TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, BLACK, &node10);
}
/*
*
* case 1(b)
*
*     /                               /
*   20(R)                             40(R)
*  // \                              /  \
*  . 60(B)     Rotate right       20(B)  60(B)
*     / \         left              / \   / \
*  40(R) .    ---------->          .  .  .  .
*       / \
*      .   .
*/
void test_fuction_caseOneParentRedBlack_the_sibling_of_child_at_left_when_parent_red(void){
  Node *rootPtr = &node20;
  Node *deleteNode = &node10;  
  initNode(&node20, 20, &node10, &node60, RED);
  initNode(&node60, 60, &node40, NULL, BLACK);
  initNode(&node40, 40, NULL, NULL, RED);
  initNode(&node10, 10, NULL, NULL, DOUBLE_BLACK);

  caseOneBLeft(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node40); 
  TEST_ASSERT_EQUAL_NODE(40, &node20, &node60, RED, &node40);
  TEST_ASSERT_EQUAL_NODE(20, NULL, NULL, BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(60, NULL, NULL, BLACK, &node60);
  //TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, BLACK, &node10);
}
/*
* case 1(b)
*
*     /                               /
*   20(B)                             40(B)
*  // \                              /  \
*  . 60(B)     Rotate right       20(B)  60(B)
*     / \         left              / \   / \
*  40(R) .    ---------->          .  .  .  .
*       / \
*      .   .
*/
void test_fuction_caseOneParentRedBlack_the_sibling_at_left_and_parent_is_black_colour(void){
  Node *rootPtr = &node20; 
  Node *deleteNode = &node10;   
  initNode(&node20, 20, &node10, &node60, BLACK);
  initNode(&node60, 60, &node40, NULL, BLACK);
  initNode(&node40, 40, NULL, NULL, RED);
  initNode(&node10, 10, NULL, NULL, DOUBLE_BLACK);

  caseOneBLeft(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node40); 
  TEST_ASSERT_EQUAL_NODE(40, &node20, &node60, BLACK, &node40);
  TEST_ASSERT_EQUAL_NODE(20, NULL, NULL, BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(60, NULL, NULL, BLACK, &node60);
  //TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, BLACK, &node10);  
}
/* 
* case 2(a)
*
*    /                                //
*   20(B)                             20(D.B)
*  // \                              /  \
*  . 40(B)     FLIP COLOUR          .   40(R)
*     / \     ---------->                / \
* 25(B) 60(B)                         25(B) 60(B)
* / \    / \                      / \    / \
* . .    . .                      . .    . .
*/
void test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_black(void){
  Node *rootPtr = &node20; 
  Node *deleteNode = &node10;
  initNode(&node20, 20, &node10, &node40, BLACK);
  initNode(&node40, 40, &node25, &node60, BLACK);
  initNode(&node60, 60, NULL, NULL, BLACK);
  initNode(&node25, 25, NULL, NULL, BLACK);
  initNode(&node10, 10, NULL, NULL, DOUBLE_BLACK);

  caseTwoALeft(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node20); 
  TEST_ASSERT_EQUAL_NODE(20, NULL, &node40, DOUBLE_BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(40, &node25, &node60, RED, &node40);
  TEST_ASSERT_EQUAL_NODE(25, NULL, NULL, BLACK, &node25);
  TEST_ASSERT_EQUAL_NODE(60, NULL, NULL, BLACK, &node60);
  //TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, BLACK, &node10); 
}
/* 
* case 2(a)
*
*    /                                //
*   20(B)                             20(D.B)
*  // \                              /  \
*  . 40(B)     FLIP COLOUR          .   40(R)
*     / \     ---------->                / \
*    .  .                               .  .
*/
void test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_NULL(void){
  Node *rootPtr = &node20; 
  Node *deleteNode = &node10;
  initNode(&node20, 20, &node10, &node40, BLACK);
  initNode(&node40, 40, NULL, NULL, BLACK);
  initNode(&node10, 10, NULL, NULL, DOUBLE_BLACK);

  caseTwoALeft(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node20); 
  TEST_ASSERT_EQUAL_NODE(20, NULL, &node40, DOUBLE_BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(40, NULL, NULL, RED, &node40);
  //TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, BLACK, &node10); 
}
/* 
* case 2(b)
*
*    /                                 /
*   20(R)                             20(B)
*  // \                              /  \
*  . 40(B)     FLIP COLOUR          .   40(R)
*     / \     ---------->                / \
* 25(B) 60(B)                         25(B) 60(B)
* / \    / \                           / \    / \
* . .    . .                           . .    . .
*/
void test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_black(void){
  Node *rootPtr = &node20; 
  Node *deleteNode = &node10;
  initNode(&node20, 20, &node10, &node40, RED);
  initNode(&node40, 40, &node25, &node60, BLACK);
  initNode(&node60, 60, NULL, NULL, BLACK);
  initNode(&node25, 25, NULL, NULL, BLACK);
  initNode(&node10, 10, NULL, NULL, DOUBLE_BLACK);

  caseTwoBLeft(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node20); 
  TEST_ASSERT_EQUAL_NODE(20, NULL, &node40, BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(40, &node25, &node60, RED, &node40);
  TEST_ASSERT_EQUAL_NODE(25, NULL, NULL, BLACK, &node25);
  TEST_ASSERT_EQUAL_NODE(60, NULL, NULL, BLACK, &node60);
  //TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, BLACK, &node10); 
}
/* 
* case 2(b)
*
*    /                                 /
*   20(R)                             20(B)
*  // \                              /  \
*  . 40(B)     FLIP COLOUR          .   40(R)
*     / \     ---------->                / \
*    .  .                               .  .
*/
void test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_NULL(void){
  Node *rootPtr = &node20; 
  Node *deleteNode = &node10;
  initNode(&node20, 20, &node10, &node40, RED);
  initNode(&node40, 40, NULL, NULL, BLACK);
  initNode(&node10, 10, NULL, NULL, DOUBLE_BLACK);

  caseTwoBLeft(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node20); 
  TEST_ASSERT_EQUAL_NODE(20, NULL, &node40, BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(40, NULL, NULL, RED, &node40);
 // TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, BLACK, &node10); 
}
/* 
* case 3 left 
*
*         /                   /                      /
*       20(B)      rotate    40(B)       use        40(B)
*      //  \      left       /  \       case 2      / \
*      . 40(R)    ----->  20(R) 60(B)    ----->  20(B) 60(B)
*         /  \            // \   / \             / \    / \
*      25(B) 60(B)       . 25(B) .  .           . 25(R) . .
*                           / \                    / \
*                           . .                    . .
*/
void test_fuction_caseThree_the_sibling_is_red_and_right_child_of_parent(void){
  Node *rootPtr = &node20; 
  Node *deleteNode = &node10;
  initNode(&node20, 20, &node10, &node40, BLACK);
  initNode(&node40, 40, &node25, &node60, RED);
  initNode(&node60, 60, NULL, NULL, BLACK);
  initNode(&node25, 25, NULL, NULL, BLACK);
  initNode(&node10, 10, NULL, NULL, DOUBLE_BLACK);

  caseThreeLeft(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node40); 
  TEST_ASSERT_EQUAL_NODE(40, &node20, &node60, BLACK, &node40);
  TEST_ASSERT_EQUAL_NODE(20, NULL, &node25, BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(25, NULL, NULL, RED, &node25);
  TEST_ASSERT_EQUAL_NODE(60, NULL, NULL, BLACK, &node60);
  //TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, BLACK, &node10); 
}
/*---------------------- right ---------------------------------*/
/*
*
* case 1(a)-right
*
*     /                               /
*   60(R)                            40(R)
*   /  \\                            /  \
* 40(B) .    Rotate right       20(B)  60(B)
*   / \                          / \   / \
*20(R) .    ---------->          .  .  .  .
* / \
* . .
*/
void test_fuction_caseOne_thesibling_at_left_child_of_parent_and_parent_is_red(void){
  Node *rootPtr = &node60;
  Node *deleteNode = &node70;  
  initNode(&node60, 60, &node40, &node70, RED);
  initNode(&node40, 40, &node20, NULL, BLACK);
  initNode(&node20, 20, NULL, NULL, RED);
  initNode(&node70, 70, NULL, NULL, DOUBLE_BLACK);

  caseOneARight(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node40); 
  TEST_ASSERT_EQUAL_NODE(40, &node20, &node60, RED, &node40);
  TEST_ASSERT_EQUAL_NODE(20, NULL, NULL, BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(60, NULL, NULL, BLACK, &node60);
  //TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, BLACK, &node10);
}

/*
*
* case 1(a)-right
*
*     /                               /
*   60(B)                            40(B)
*   /  \\                            /  \
* 40(B) .    Rotate right       20(B)  60(B)
*   / \                          / \   / \
*20(R) .    ---------->          .  .  .  .
* / \
* . .
*/
void test_fuction_caseOne_the_sibling_at_left_child_of_parent_and_parent_is_Black(void){
  Node *rootPtr = &node60;
  Node *deleteNode = &node70;  
  initNode(&node60, 60, &node40, &node70, BLACK);
  initNode(&node40, 40, &node20, NULL, BLACK);
  initNode(&node20, 20, NULL, NULL, RED);
  initNode(&node70, 70, NULL, NULL, DOUBLE_BLACK);

  caseOneARight(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node40); 
  TEST_ASSERT_EQUAL_NODE(40, &node20, &node60, BLACK, &node40);
  TEST_ASSERT_EQUAL_NODE(20, NULL, NULL, BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(60, NULL, NULL, BLACK, &node60);
  //TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, BLACK, &node10);
}
/*
*
* case 1(b)right
*
*     /                               /
*   60(R)                            40(R)
*  /   \\                              /  \
* 20(B)  .     Rotate left        20(B)  60(B)
* / \         right               / \   / \
* . 40(R)      ---------->        .  .  .  .
*  / \
*  .  .
*/
void test_fuction_caseOne_the_sibling_at_left_child_of_parent_and_parent_is_red(void){
  Node *rootPtr = &node60;
  Node *deleteNode = &node70;  
  initNode(&node60, 60, &node20, &node70, RED);
  initNode(&node20, 20, NULL, &node40, BLACK);
  initNode(&node40, 40, NULL, NULL, RED);
  initNode(&node70, 70, NULL, NULL, DOUBLE_BLACK);

  caseOneBRight(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node40); 
  TEST_ASSERT_EQUAL_NODE(40, &node20, &node60, RED, &node40);
  TEST_ASSERT_EQUAL_NODE(20, NULL, NULL, BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(60, NULL, NULL, BLACK, &node60);
  //TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, BLACK, &node10);
}
/*
*
* case 1(b)right
*
*     /                               /
*   60(B)                            40(B)
*  /  \\                             /  \
* 20(B) .     Rotate left        20(B)  60(B)
* / \         right               / \   / \
*. 40(R)      ---------->        .  .  .  .
*  / \
*  .  .
*/
void test_fuction_caseOne_the_sibling_at_left_child_of_parent_and_parent_is_black(void){
  Node *rootPtr = &node60;
  Node *deleteNode = &node70;  
  initNode(&node60, 60, &node20, &node70, BLACK);
  initNode(&node20, 20, NULL, &node40, BLACK);
  initNode(&node40, 40, NULL, NULL, RED);
  initNode(&node70, 70, NULL, NULL, DOUBLE_BLACK);

  caseOneBRight(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node40); 
  TEST_ASSERT_EQUAL_NODE(40, &node20, &node60, BLACK, &node40);
  TEST_ASSERT_EQUAL_NODE(20, NULL, NULL, BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(60, NULL, NULL, BLACK, &node60);
  //TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, BLACK, &node10);
}
/* 
* case 2(a) -right
*
*         /                            //
*       60(B)                         60(D.B)
*      /   \\                         /  \
*    25(B)  .     flip             25(R)  .
*    / \         colour             / \   
*20(B) 40(B)    ------->        20(B) 40(B)
* /  \  /  \                   / \   / \
* .   .  .  .                 .   .  .  .

*/
void test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_black_the_sibling_at_left_side(void){
  Node *rootPtr = &node60; 
  Node *deleteNode = &node70;
  initNode(&node60, 60, &node25, &node70, BLACK);
  initNode(&node25, 25, &node20, &node40, BLACK);
  initNode(&node20, 20, NULL, NULL, BLACK);
  initNode(&node40, 40, NULL, NULL, BLACK);
  initNode(&node70, 70, NULL, NULL, DOUBLE_BLACK);

  caseTwoARight(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node60); 
  TEST_ASSERT_EQUAL_NODE(60, &node25, NULL, DOUBLE_BLACK, &node60);
  TEST_ASSERT_EQUAL_NODE(25, &node20, &node40, RED, &node25);
  TEST_ASSERT_EQUAL_NODE(20, NULL, NULL, BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(40, NULL, NULL, BLACK, &node40);
  //TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, BLACK, &node10); 
}
/* 
* case 2(a) -right
*
*         /                            //
*       60(B)                         60(D.B)
*      /   \\                         /  \
*    25(B)  .     flip             25(R)  .
*    / \         colour             / \   
*   .   .    ------->              .  .
*/
void test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_NULL_the_sibling_at_left_side(void){
  Node *rootPtr = &node60; 
  Node *deleteNode = &node70;
  initNode(&node60, 60, &node25, &node70, BLACK);
  initNode(&node25, 25, NULL, NULL, BLACK);
  initNode(&node70, 70, NULL, NULL, DOUBLE_BLACK);

  caseTwoARight(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node60); 
  TEST_ASSERT_EQUAL_NODE(60, &node25, NULL, DOUBLE_BLACK, &node60);
  TEST_ASSERT_EQUAL_NODE(25, NULL, NULL, RED, &node25);
}
/* 
* case 2(b) -right
*
*         /                            /
*       60(R)                         60(B)
*      /   \\                         /  \
*    25(B)  .     flip             25(R)  .
*    / \         colour             / \   
*20(B) 40(B)    ------->        20(B) 40(B)
* /  \  /  \                   / \   / \
* .   .  .  .                 .   .  .  .

*/
void test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_black_the_sibling_at_left_side(void){
  Node *rootPtr = &node60; 
  Node *deleteNode = &node70;
  initNode(&node60, 60, &node25, &node70, RED);
  initNode(&node25, 25, &node20, &node40, BLACK);
  initNode(&node20, 20, NULL, NULL, BLACK);
  initNode(&node40, 40, NULL, NULL, BLACK);
  initNode(&node70, 70, NULL, NULL, DOUBLE_BLACK);

  caseTwoBRight(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node60); 
  TEST_ASSERT_EQUAL_NODE(60, &node25, NULL, BLACK, &node60);
  TEST_ASSERT_EQUAL_NODE(25, &node20, &node40, RED, &node25);
  TEST_ASSERT_EQUAL_NODE(20, NULL, NULL, BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(40, NULL, NULL, BLACK, &node40);
  //TEST_ASSERT_EQUAL_NODE(10, NULL, NULL, BLACK, &node10); 
}
/* 
* case 2(b) -right
*
*         /                            /
*       60(R)                         60(B)
*      /   \\                         /  \
*    25(B)  .     flip             25(R)  .
*    / \         colour             / \   
*   .   .    ------->              .  .
*/
void test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_NULL_the_sibling_at_left_side(void){
  Node *rootPtr = &node60; 
  Node *deleteNode = &node70;
  initNode(&node60, 60, &node25, &node70, RED);
  initNode(&node25, 25, NULL, NULL, BLACK);
  initNode(&node70, 70, NULL, NULL, DOUBLE_BLACK);

  caseTwoBRight(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node60); 
  TEST_ASSERT_EQUAL_NODE(60, &node25, NULL, BLACK, &node60);
  TEST_ASSERT_EQUAL_NODE(25, NULL, NULL, RED, &node25);
}
/* 
* case 3 left 
*
*
*         /                   /                      /
*       60(B)      rotate    25(B)       use        25(B)
*      /  \\      right       /  \     case 2      /   \
*     25(R) .     ----->  20(R) 60(B)    ----->  20(B) 60(B)
*    /  \                 / \  /  \\             / \  /  \
* 20(B) 40(B)             . .40(B) .           .  . 40(R) . 
*                              / \                  / \
*                              . .                  . .
*/
void test_fuction_caseThree_the_sibling_is_red_and_left_child_of_parent(void){
  Node *rootPtr = &node60; 
  Node *deleteNode = &node70;
  initNode(&node60, 60, &node25, &node70, BLACK);
  initNode(&node25, 25, &node20, &node40, RED);
  initNode(&node20, 20, NULL, NULL, BLACK);
  initNode(&node40, 40, NULL, NULL, BLACK);
  initNode(&node70, 70, NULL, NULL, DOUBLE_BLACK);

  caseThreeRight(&rootPtr, deleteNode);
  TEST_ASSERT_EQUAL_PTR(rootPtr, &node25); 
  TEST_ASSERT_EQUAL_NODE(25, &node20, &node60, BLACK, &node25);
  TEST_ASSERT_EQUAL_NODE(20, NULL, NULL, BLACK, &node20);
  TEST_ASSERT_EQUAL_NODE(60, &node40, NULL, BLACK, &node60);
  TEST_ASSERT_EQUAL_NODE(40, NULL, NULL, RED, &node40);
}

void test_rbtRemoveInt_function_given_a_delete_node_then_return_node_and_colour(void){
  Node *deleteNode = &node5;
  ReturnedObject ro;
  ro = rbtRemoveInt(deleteNode);

  TEST_ASSERT_EQUAL(ro.removedNode, deleteNode);
  TEST_ASSERT_EQUAL(ro.returnedColour, DOUBLE_BLACK);
  TEST_ASSERT_EQUAL(ro.removedNode->colour, DOUBLE_BLACK);
}


/*
*    100(R)   ------>   NULL
*     / \     DELETE
*   NULL NULL   10
*
*/
void test_delete_one_node_and_that_is_the_root(void){
  Node *rootPtr = &node100;
  Node *delete = &node100;    
  initNode(&node100, 100, NULL, NULL, RED);

  deleteRBTNode(&rootPtr, delete);
  TEST_ASSERT_EQUAL_PTR(rootPtr, NULL); 
}