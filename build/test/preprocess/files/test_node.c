#include "node.h"
#include "unity.h"


void setUp(void){}



void tearDown(void){}



void test_create_a_new_node_with_the_node_value_is_40(void){

  int color = 20;

  int data = 40;

  Node *newNode;

  newNode = createNode(color, data);



  UnityAssertEqualNumber((_U_SINT)((20)), (_U_SINT)((newNode->colour)), (((void *)0)), (_U_UINT)14, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((40)), (_U_SINT)((newNode->value)), (((void *)0)), (_U_UINT)15, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((((void *)0))), (_U_SINT)((newNode->right)), (((void *)0)), (_U_UINT)16, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((((void *)0))), (_U_SINT)((newNode->left)), (((void *)0)), (_U_UINT)17, UNITY_DISPLAY_STYLE_INT);

}



void test_insert_a_child_into_the_tree_right_side(void){

  int color = 20;

  int data = 80;

  int data2 = 150;

  Node *newNode, *child;

  newNode = createNode(color, data);

  child = createNode(color, data2);

  insert(newNode, child);



  UnityAssertEqualNumber((_U_SINT)(_UP)((newNode->right)), (_U_SINT)(_UP)((child)), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((newNode->left)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)30, UNITY_DISPLAY_STYLE_HEX32);

}



void test_insert_a_child_into_the_tree_left_side(void){

  int color = 20;

  int data = 80;

  int data2 = 40;

  Node *newNode, *child;

  newNode = createNode(color, data);

  child = createNode(color, data2);

  insert(newNode, child);



  UnityAssertEqualNumber((_U_SINT)(_UP)((newNode->left)), (_U_SINT)(_UP)((child)), (((void *)0)), (_U_UINT)42, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((newNode->right)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)43, UNITY_DISPLAY_STYLE_HEX32);

}
