#include "node.h"
#include "rotation.h"
#include "unity.h"


typedef enum{

  RED, BLACK,DOUBLE_BLACK

}Color;



void initNode(Node *root ,int value, Node *left, Node *right, int color){

  root->left = left;

  root->right = right;

  root->colour = color;

  root->value = value;

}

Node node5, node10, node20, node25, node50, node60, node80, node100,

    node120, node150, node170, node250;



void setUp(void){

  initNode(&node5, 5, ((void *)0), ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), BLACK);

  initNode(&node20, 20, ((void *)0), ((void *)0), BLACK);

  initNode(&node25, 25, ((void *)0), ((void *)0), BLACK);

  initNode(&node50, 50, ((void *)0), ((void *)0), BLACK);

  initNode(&node60, 60, ((void *)0), ((void *)0), BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  initNode(&node120, 120, ((void *)0), ((void *)0), BLACK);

  initNode(&node150, 150, ((void *)0), ((void *)0), BLACK);

  initNode(&node170, 170, ((void *)0), ((void *)0), BLACK);

  initNode(&node250, 250, ((void *)0), ((void *)0), BLACK);

}



void tearDown(void){}

void test_left_rotation_with_node80_and_one_child(void){

  Node *root = &node80;

  initNode(&node80, 80, ((void *)0), &node150, BLACK);

  initNode(&node150, 150, ((void *)0), ((void *)0), BLACK);

  rotateLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)50, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)51, UNITY_DISPLAY_STYLE_HEX32);

}

void test_left_rotation_with_node150(void){

  Node *root = &node150;

  initNode(&node150, 150, ((void *)0), ((void *)0), BLACK);

  rotateLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)66, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)67, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)68, UNITY_DISPLAY_STYLE_HEX32);

}

void test_left_rotation_with_node_60_and_two_children(void){

  Node *root = &node60;

  initNode(&node60, 60, &node50, &node100, BLACK);

  initNode(&node50, 50, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  rotateLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)86, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)87, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)88, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)89, UNITY_DISPLAY_STYLE_HEX32);

}

void test_left_rotation_with_node_100_and_left_channel(void){

  Node *root = &node100;

  initNode(&node100, 100, &node80, &node150, BLACK);

  initNode(&node150, 150, &node120, &node170, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), BLACK);

  initNode(&node120, 120, ((void *)0), ((void *)0), BLACK);

  initNode(&node170, 170, ((void *)0), ((void *)0), BLACK);

  rotateLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)109, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node170)), (((void *)0)), (_U_UINT)110, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)111, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)112, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->right)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)113, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_node5(void){

  Node *root = &node5;

  initNode(&node5, 5, ((void *)0), ((void *)0), BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node5)), (((void *)0)), (_U_UINT)128, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)129, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)130, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_node10(void){

  Node *root = &node50;

  initNode(&node50, 50, &node10, ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node10)), (((void *)0)), (_U_UINT)146, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)147, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)148, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_node_60_and_two_children(void){

  Node *root = &node60;

  initNode(&node60, 60, &node50, &node100, BLACK);

  initNode(&node50, 50, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)166, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)167, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)168, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->right)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)169, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_node_120_and_two_children(void){

  Node *root = &node120;

  initNode(&node120, 120, &node80, &node150, BLACK);

  initNode(&node80, 80, &node5, &node100, BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 5, ((void *)0), ((void *)0), BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)189, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node5)), (((void *)0)), (_U_UINT)190, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)191, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->right)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)192, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->left)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)193, UNITY_DISPLAY_STYLE_HEX32);

}

void test_left_right_rotation_with_node_100_and_child_80(void){

  Node *root = &node120;

  initNode(&node120, 120, &node80, ((void *)0), BLACK);

  initNode(&node80, 80, &node60, &node100, BLACK);

  initNode(&node60, 60, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  rotateLeftRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)214, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)215, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)216, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)217, UNITY_DISPLAY_STYLE_HEX32);

}

void test_left_right_rotation_with_node_150_and_child_20(void){

  Node *root = &node150;

  initNode(&node150, 150, &node20, &node250, BLACK);

  initNode(&node20, 20, &node5, &node50, BLACK);

  initNode(&node50, 50, &node25, &node100, BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  initNode(&node25, 25, ((void *)0), ((void *)0), BLACK);

  initNode(&node5, 5, ((void *)0), ((void *)0), BLACK);

  rotateLeftRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)239, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node20)), (((void *)0)), (_U_UINT)240, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)241, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node5)), (((void *)0)), (_U_UINT)242, UNITY_DISPLAY_STYLE_HEX32);



}
