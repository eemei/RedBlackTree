#include "unity.h"
#include "node.h"

void setUp(void){}

void tearDown(void){}

void test_create_a_new_node_with_the_node_value_is_40(void){
  int color = 20;
  int data = 40;
  Node *newNode;
  newNode = createNode(color, data);
  
  TEST_ASSERT_EQUAL(20, newNode->colour);
  TEST_ASSERT_EQUAL(40, newNode->value);
  TEST_ASSERT_EQUAL(NULL, newNode->right);
  TEST_ASSERT_EQUAL(NULL, newNode->left);
}

void test_insert_a_child_into_the_tree_right_side(void){
  int color = 20;
  int data = 80;
  int data2 = 150;
  Node *newNode, *child;
  newNode = createNode(color, data);
  child = createNode(color, data2);
  insert(newNode, child);
 
  TEST_ASSERT_EQUAL_PTR(newNode->right, child);
  TEST_ASSERT_EQUAL_PTR(newNode->left, NULL);
}

void test_insert_a_child_into_the_tree_left_side(void){
  int color = 20;
  int data = 80;
  int data2 = 40;
  Node *newNode, *child;
  newNode = createNode(color, data);
  child = createNode(color, data2);
  insert(newNode, child);
 
  TEST_ASSERT_EQUAL_PTR(newNode->left, child);
  TEST_ASSERT_EQUAL_PTR(newNode->right, NULL);
}

void test_insert_two_layer_into_the_tree(void){
  int color = 2;
  int data = 80;
  int data2 = 40;
  int data3 = 100;
  int data4 = 20;
  Node *newNode, *child1, *child2, *grandChild;
  newNode = createNode(color, data);
  child1 = createNode(color, data2); 
  child2 = createNode(color, data3);
  grandChild = createNode(color, data4); 
  insert(newNode, child1);
  insert(newNode, child2);
  insert(newNode, grandChild);
  
  TEST_ASSERT_EQUAL_PTR(newNode->left, child1);
  TEST_ASSERT_EQUAL_PTR(newNode->right, child2);
  TEST_ASSERT_EQUAL_PTR(newNode->left->left, grandChild);
  TEST_ASSERT_EQUAL_PTR(newNode->left->right, NULL);  
}