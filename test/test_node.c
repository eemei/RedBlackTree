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