#include "CustomAssert.h"
#include "node.h"
#include "rotation.h"
#include "unity.h"






void initNode(Node *root ,int value, Node *left, Node *right, Color color){

  root->left = left;

  root->right = right;

  root->colour = color;

  root->value = value;

}

Node node5, node10, node20, node25, node50, node60, node70, node80, node100, node110,

    node120, node130, node150, node170, node250;



void setUp(void){

  initNode(&node5, 5, ((void *)0), ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), BLACK);

  initNode(&node20, 20, ((void *)0), ((void *)0), BLACK);

  initNode(&node25, 25, ((void *)0), ((void *)0), BLACK);

  initNode(&node50, 50, ((void *)0), ((void *)0), BLACK);

  initNode(&node60, 60, ((void *)0), ((void *)0), BLACK);

  initNode(&node70, 70, ((void *)0), ((void *)0), BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  initNode(&node110, 110, ((void *)0), ((void *)0), BLACK);

  initNode(&node120, 120, ((void *)0), ((void *)0), BLACK);

  initNode(&node130, 130, ((void *)0), ((void *)0), BLACK);

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



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)52, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)53, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(80, ((void *)0), ((void *)0), BLACK, &node80, 54);;

}

void test_left_rotation_with_node150(void){

  Node *root = &node150;

  initNode(&node150, 150, ((void *)0), ((void *)0), BLACK);

  rotateLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)69, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(150, ((void *)0), ((void *)0), BLACK, &node150, 70);;

}

void test_left_rotation_with_node_60_and_two_children(void){

  Node *root = &node60;

  initNode(&node60, 60, &node50, &node100, BLACK);

  initNode(&node50, 50, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  rotateLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)88, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)89, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)90, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)91, UNITY_DISPLAY_STYLE_HEX32);

}

void test_left_rotation_with_node_100_and_left_channel(void){

  Node *root = &node100;

  initNode(&node100, 100, &node80, &node150, BLACK);

  initNode(&node150, 150, &node120, &node170, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), BLACK);

  initNode(&node120, 120, ((void *)0), ((void *)0), BLACK);

  initNode(&node170, 170, ((void *)0), ((void *)0), BLACK);

  rotateLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)111, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node170)), (((void *)0)), (_U_UINT)112, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)113, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)114, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->right)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)115, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_node5(void){

  Node *root = &node5;

  initNode(&node5, 5, ((void *)0), ((void *)0), BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node5)), (((void *)0)), (_U_UINT)130, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)131, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)132, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_node10(void){

  Node *root = &node50;

  initNode(&node50, 50, &node10, ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node10)), (((void *)0)), (_U_UINT)148, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)149, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)150, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_node_60_and_two_children(void){

  Node *root = &node60;

  initNode(&node60, 60, &node50, &node100, BLACK);

  initNode(&node50, 50, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)168, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)169, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)170, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->right)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)171, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_node_120_and_two_children(void){

  Node *root = &node120;

  initNode(&node120, 120, &node80, &node150, BLACK);

  initNode(&node80, 80, &node5, &node100, BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 5, ((void *)0), ((void *)0), BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)191, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node5)), (((void *)0)), (_U_UINT)192, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)193, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->right)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)194, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->left)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)195, UNITY_DISPLAY_STYLE_HEX32);

}

void test_left_right_rotation_with_node_100_and_child_80(void){

  Node *root = &node120;

  initNode(&node120, 120, &node80, ((void *)0), BLACK);

  initNode(&node80, 80, &node60, &node100, BLACK);

  initNode(&node60, 60, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  rotateLeftRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)216, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)217, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)218, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)219, UNITY_DISPLAY_STYLE_HEX32);

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



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)241, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(50, &node20, &node150, BLACK, &node50, 242);;

  testAssertNode(20, &node5, &node25, BLACK, &node20, 243);;

  testAssertNode(150, &node100, &node250, BLACK, &node150, 244);;

  testAssertNode(5, ((void *)0), ((void *)0), BLACK, &node5, 245);;

  testAssertNode(25, ((void *)0), ((void *)0), BLACK, &node25, 246);;

  testAssertNode(100, ((void *)0), ((void *)0), BLACK, &node100, 247);;

  testAssertNode(250, ((void *)0), ((void *)0), BLACK, &node250, 248);;

  }

void test_right_left_rotation_simple_with_node_100(void){

  Node *root = &node100;

  initNode(&node100, 100, ((void *)0), &node170, BLACK);

  initNode(&node170, 170, &node120, ((void *)0), BLACK);;

  initNode(&node120, 120, ((void *)0), ((void *)0), BLACK);

  rotateRightLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)265, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(120, &node100, &node170, BLACK, &node120, 266);;

  testAssertNode(100, ((void *)0), ((void *)0), BLACK, &node100, 267);;

  testAssertNode(170, ((void *)0), ((void *)0), BLACK, &node170, 268);;

}

void test_right_left_rotation_with_node_100(void){

  Node *root = &node100;

  initNode(&node100, 100, &node70, &node150, BLACK);

  initNode(&node150, 150, &node120, &node170, BLACK);

  initNode(&node120, 120, &node80, &node130, BLACK);

  initNode(&node70, 70, ((void *)0), ((void *)0), BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), BLACK);

  initNode(&node110, 130, ((void *)0), ((void *)0), BLACK);

  initNode(&node170, 170, ((void *)0), ((void *)0), BLACK);

  rotateRightLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)292, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node70, &node80, BLACK, &node100, 293);;

  testAssertNode(150, &node130, &node170, BLACK, &node150, 294);;

  testAssertNode(70, ((void *)0), ((void *)0), BLACK, &node70, 295);;

  testAssertNode(80, ((void *)0), ((void *)0), BLACK, &node80, 296);;

  testAssertNode(130, ((void *)0), ((void *)0), BLACK, &node130, 297);;

  testAssertNode(170, ((void *)0), ((void *)0), BLACK, &node170, 298);;

}

void test_parent_of_addNode_is_left_child_of_Grandparent_of_addNode_and_addNode_is_left_child_of_parent(void){

  Node *root = &node100;

  Node *addNode = &node70;

  initNode(&node100, 100, &node80, &node120, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), RED);

  initNode(&node120, 120, ((void *)0), ((void *)0), RED);



  insert(root, addNode);

  violationCaseOneLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)318, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, RED, &node100, 319);;

  testAssertNode(80, &node70, ((void *)0), BLACK, &node80, 320);;

  testAssertNode(120, ((void *)0), ((void *)0), BLACK, &node120, 321);;

  testAssertNode(70, ((void *)0), ((void *)0), RED, &node70, 322);;

}

void test_parent_of_addNode_is_left_child_of_Grandparent_of_addNode_and_addNode_is_right_child_of_parent(void){

  Node *root = &node100;

  Node *addNode = &node80;

  initNode(&node100, 100, &node70, &node120, BLACK);

  initNode(&node70, 70, ((void *)0), ((void *)0), RED);

  initNode(&node120, 120, ((void *)0), ((void *)0), RED);



  insert(root, addNode);

  violationCaseOneLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)341, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node70, &node120, RED, &node100, 342);;

  testAssertNode(70, ((void *)0), &node80, BLACK, &node70, 343);;

  testAssertNode(120, ((void *)0), ((void *)0), BLACK, &node120, 344);;

  testAssertNode(80, ((void *)0), ((void *)0), RED, &node80, 345);;

}

void test_case_two_uncle_is_black_and_addNode_at_left_right_of_root(void){

  Node *root = &node120;

  Node *addNode = &node100;

  initNode(&node120, 120, &node80, &node170, BLACK);

  initNode(&node80, 80, ((void *)0),((void *)0), RED);

  initNode(&node170, 170, ((void *)0), ((void *)0), BLACK);



  insert(root, addNode);

  violationCaseTwoLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)367, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, BLACK, &node100, 368);;

  testAssertNode(80, ((void *)0), ((void *)0), RED, &node80, 369);;

  testAssertNode(120, ((void *)0), &node170, RED, &node120, 370);;

  testAssertNode(170, ((void *)0), ((void *)0), BLACK, &node170, 371);;

}

void test_case_three_uncle_is_black_and_addNode_at_left_left_of_root(void){

  Node *root = &node120;

  Node *addNode = &node70;

  initNode(&node120, 120, &node80, &node170, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), RED);

  initNode(&node170, 170, ((void *)0), ((void *)0), BLACK);



  insert(root, addNode);

  violationCaseThreeLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)390, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(80, &node70, &node120, BLACK, &node80, 391);;

  testAssertNode(70, ((void *)0), ((void *)0), RED, &node70, 392);;

  testAssertNode(120, ((void *)0), &node170, RED, &node120, 393);;

  testAssertNode(170, ((void *)0), ((void *)0), BLACK, &node170, 394);;

}

void test_parent_of_addNode_is_right_child_of_Grandparent_of_addNode(void){

  Node *root = &node100;

  Node *addNode = &node150;

  initNode(&node100, 100, &node80, &node120, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), RED);

  initNode(&node120, 120, ((void *)0), ((void *)0), RED);



  insert(root, addNode);

  violationCaseOneLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)414, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, RED, &node100, 415);;

  testAssertNode(120, ((void *)0), &node150, BLACK, &node120, 416);;

  testAssertNode(80, ((void *)0), ((void *)0), BLACK, &node80, 417);;

  testAssertNode(150, ((void *)0), ((void *)0), RED, &node150, 418);;

}

void test_case_two_uncle_is_black_and_addNode_at_right_left_of_root(void){

  Node *root = &node120;

  Node *addNode = &node150;

  initNode(&node120, 120, &node80, &node170, BLACK);

  initNode(&node80, 80, ((void *)0),((void *)0), BLACK);

  initNode(&node170, 170, ((void *)0), ((void *)0), RED);



  insert(root, addNode);

  violationCaseTwoRight(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)440, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(150, &node120, &node170, BLACK, &node150, 441);;

  testAssertNode(80, ((void *)0), ((void *)0), BLACK, &node80, 442);;

  testAssertNode(120, &node80, ((void *)0), RED, &node120, 443);;

  testAssertNode(170, ((void *)0), ((void *)0), RED, &node170, 444);;

}

void test_case_three_uncle_is_black_and_addNode_at_right_right_of_root(void){

  Node *root = &node120;

  Node *addNode = &node250;

  initNode(&node120, 120, &node80, &node170, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), BLACK);

  initNode(&node170, 170, ((void *)0), ((void *)0), RED);



  insert(root, addNode);

  violationCaseThreeRight(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node170)), (((void *)0)), (_U_UINT)464, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(170, &node120, &node250, BLACK, &node170, 465);;

  testAssertNode(250, ((void *)0), ((void *)0), RED, &node250, 466);;

  testAssertNode(120, &node80, ((void *)0), RED, &node120, 467);;

  testAssertNode(80, ((void *)0), ((void *)0), BLACK, &node80, 468);;

}
