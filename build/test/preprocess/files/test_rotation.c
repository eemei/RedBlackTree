#include "CustomAssert.h"
#include "node.h"
#include "rotation.h"
#include "unity.h"






void initNode(Node *root ,int value, Node *left, Node *right, Colour colour){

  root->left = left;

  root->right = right;

  root->colour = colour;

  root->value = value;

}

Node node1, node2, node3, node4, node5, node6, node7, node8, node10, node11, node12, node14, node15,

    node20, node25, node30, node40, node45, node50, node55, node60,

    node65, node70, node75, node80, node90, node100, node110,

    node120, node130, node150, node170, node250;



void setUp(void){

  initNode(&node1, 1, ((void *)0), ((void *)0), BLACK);

  initNode(&node2, 2, ((void *)0), ((void *)0), BLACK);

  initNode(&node3, 3, ((void *)0), ((void *)0), BLACK);

  initNode(&node4, 4, ((void *)0), ((void *)0), BLACK);

  initNode(&node5, 5, ((void *)0), ((void *)0), BLACK);

  initNode(&node6, 6, ((void *)0), ((void *)0), BLACK);

  initNode(&node7, 7, ((void *)0), ((void *)0), BLACK);

  initNode(&node8, 8, ((void *)0), ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), BLACK);

  initNode(&node11, 11, ((void *)0), ((void *)0), BLACK);

  initNode(&node12, 12, ((void *)0), ((void *)0), BLACK);

  initNode(&node14, 14, ((void *)0), ((void *)0), BLACK);

  initNode(&node15, 15, ((void *)0), ((void *)0), BLACK);

  initNode(&node20, 20, ((void *)0), ((void *)0), BLACK);

  initNode(&node25, 25, ((void *)0), ((void *)0), BLACK);

  initNode(&node30, 30, ((void *)0), ((void *)0), BLACK);

  initNode(&node40, 40, ((void *)0), ((void *)0), BLACK);

  initNode(&node45, 45, ((void *)0), ((void *)0), BLACK);

  initNode(&node50, 50, ((void *)0), ((void *)0), BLACK);

  initNode(&node55, 55, ((void *)0), ((void *)0), BLACK);

  initNode(&node60, 60, ((void *)0), ((void *)0), BLACK);

  initNode(&node65, 65, ((void *)0), ((void *)0), BLACK);

  initNode(&node70, 70, ((void *)0), ((void *)0), BLACK);

  initNode(&node75, 75, ((void *)0), ((void *)0), BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), BLACK);

  initNode(&node90, 90, ((void *)0), ((void *)0), BLACK);

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



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)72, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)73, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(80, ((void *)0), ((void *)0), BLACK, &node80, 74);;

}

void test_left_rotation_with_node_one_five_zero(void){

  Node *root = &node150;

  initNode(&node150, 150, ((void *)0), ((void *)0), BLACK);

  rotateLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)89, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(150, ((void *)0), ((void *)0), BLACK, &node150, 90);;

}

void test_left_rotation_with_node_sixty_and_two_children(void){

  Node *root = &node60;

  initNode(&node60, 60, &node50, &node100, BLACK);

  initNode(&node50, 50, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  rotateLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)108, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)109, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)110, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)111, UNITY_DISPLAY_STYLE_HEX32);

}

void test_left_rotation_with_node_hundred_and_left_channel(void){

  Node *root = &node100;

  initNode(&node100, 100, &node80, &node150, BLACK);

  initNode(&node150, 150, &node120, &node170, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), BLACK);

  initNode(&node120, 120, ((void *)0), ((void *)0), BLACK);

  initNode(&node170, 170, ((void *)0), ((void *)0), BLACK);

  rotateLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)131, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node170)), (((void *)0)), (_U_UINT)132, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)133, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)134, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->right)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)135, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_nodeFive(void){

  Node *root = &node5;

  initNode(&node5, 5, ((void *)0), ((void *)0), BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node5)), (((void *)0)), (_U_UINT)150, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)151, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)152, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_nodeTen(void){

  Node *root = &node50;

  initNode(&node50, 50, &node10, ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node10)), (((void *)0)), (_U_UINT)168, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)169, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)170, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_node_sixty_and_two_children(void){

  Node *root = &node60;

  initNode(&node60, 60, &node50, &node100, BLACK);

  initNode(&node50, 50, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)188, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)189, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)190, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->right)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)191, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_node_one_hundred_and_twenty_and_two_children(void){

  Node *root = &node120;

  initNode(&node120, 120, &node80, &node150, BLACK);

  initNode(&node80, 80, &node5, &node100, BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 5, ((void *)0), ((void *)0), BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)211, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node5)), (((void *)0)), (_U_UINT)212, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)213, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->right)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)214, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->left)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)215, UNITY_DISPLAY_STYLE_HEX32);

}

void test_left_right_rotation_with_node_hundred_and_child_eighty(void){

  Node *root = &node120;

  initNode(&node120, 120, &node80, ((void *)0), BLACK);

  initNode(&node80, 80, &node60, &node100, BLACK);

  initNode(&node60, 60, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  rotateLeftRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)236, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)237, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)238, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)239, UNITY_DISPLAY_STYLE_HEX32);

}

void test_left_right_rotation_with_node_one_hundred_and_fifty_and_child_twenty(void){

  Node *root = &node150;

  initNode(&node150, 150, &node20, &node250, BLACK);

  initNode(&node20, 20, &node5, &node50, BLACK);

  initNode(&node50, 50, &node25, &node100, BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  initNode(&node25, 25, ((void *)0), ((void *)0), BLACK);

  initNode(&node5, 5, ((void *)0), ((void *)0), BLACK);

  rotateLeftRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)261, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(50, &node20, &node150, BLACK, &node50, 262);;

  testAssertNode(20, &node5, &node25, BLACK, &node20, 263);;

  testAssertNode(150, &node100, &node250, BLACK, &node150, 264);;

  testAssertNode(5, ((void *)0), ((void *)0), BLACK, &node5, 265);;

  testAssertNode(25, ((void *)0), ((void *)0), BLACK, &node25, 266);;

  testAssertNode(100, ((void *)0), ((void *)0), BLACK, &node100, 267);;

  testAssertNode(250, ((void *)0), ((void *)0), BLACK, &node250, 268);;

  }

void test_right_left_rotation_simple_with_node_hundred(void){

  Node *root = &node100;

  initNode(&node100, 100, ((void *)0), &node170, BLACK);

  initNode(&node170, 170, &node120, ((void *)0), BLACK);;

  initNode(&node120, 120, ((void *)0), ((void *)0), BLACK);

  rotateRightLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)285, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(120, &node100, &node170, BLACK, &node120, 286);;

  testAssertNode(100, ((void *)0), ((void *)0), BLACK, &node100, 287);;

  testAssertNode(170, ((void *)0), ((void *)0), BLACK, &node170, 288);;

}

void test_right_left_rotation_with_node_hundred(void){

  Node *root = &node100;

  initNode(&node100, 100, &node70, &node150, BLACK);

  initNode(&node150, 150, &node120, &node170, BLACK);

  initNode(&node120, 120, &node80, &node130, BLACK);

  initNode(&node70, 70, ((void *)0), ((void *)0), BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), BLACK);

  initNode(&node110, 130, ((void *)0), ((void *)0), BLACK);

  initNode(&node170, 170, ((void *)0), ((void *)0), BLACK);

  rotateRightLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)312, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node70, &node80, BLACK, &node100, 313);;

  testAssertNode(150, &node130, &node170, BLACK, &node150, 314);;

  testAssertNode(70, ((void *)0), ((void *)0), BLACK, &node70, 315);;

  testAssertNode(80, ((void *)0), ((void *)0), BLACK, &node80, 316);;

  testAssertNode(130, ((void *)0), ((void *)0), BLACK, &node130, 317);;

  testAssertNode(170, ((void *)0), ((void *)0), BLACK, &node170, 318);;

}

void test_parent_of_addNode_is_left_child_of_Grandparent_of_addNode_and_addNode_is_left_child_of_parent(void){

  Node *root = &node100;

  Node *addNode = &node70;

  initNode(&node100, 100, &node80, &node120, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), RED);

  initNode(&node120, 120, ((void *)0), ((void *)0), RED);



  insert(root, addNode);

  violationCaseOneLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)338, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, RED, &node100, 339);;

  testAssertNode(80, &node70, ((void *)0), BLACK, &node80, 340);;

  testAssertNode(120, ((void *)0), ((void *)0), BLACK, &node120, 341);;

  testAssertNode(70, ((void *)0), ((void *)0), RED, &node70, 342);;

}

void test_parent_of_addNode_is_left_child_of_Grandparent_of_addNode_and_addNode_is_right_child_of_parent(void){

  Node *root = &node100;

  Node *addNode = &node80;

  initNode(&node100, 100, &node70, &node120, BLACK);

  initNode(&node70, 70, ((void *)0), ((void *)0), RED);

  initNode(&node120, 120, ((void *)0), ((void *)0), RED);



  insert(root, addNode);

  violationCaseOneLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)361, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node70, &node120, RED, &node100, 362);;

  testAssertNode(70, ((void *)0), &node80, BLACK, &node70, 363);;

  testAssertNode(120, ((void *)0), ((void *)0), BLACK, &node120, 364);;

  testAssertNode(80, ((void *)0), ((void *)0), RED, &node80, 365);;

}

void test_case_two_uncle_is_black_and_addNode_at_left_right_of_root(void){

  Node *root = &node120;

  Node *addNode = &node100;

  initNode(&node120, 120, &node80, &node170, BLACK);

  initNode(&node80, 80, ((void *)0),((void *)0), RED);

  initNode(&node170, 170, ((void *)0), ((void *)0), BLACK);



  insert(root, addNode);

  violationCaseTwoLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)387, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, BLACK, &node100, 388);;

  testAssertNode(80, ((void *)0), ((void *)0), RED, &node80, 389);;

  testAssertNode(120, ((void *)0), &node170, RED, &node120, 390);;

  testAssertNode(170, ((void *)0), ((void *)0), BLACK, &node170, 391);;

}

void test_case_three_uncle_is_black_and_addNode_at_left_left_of_root(void){

  Node *root = &node120;

  Node *addNode = &node70;

  initNode(&node120, 120, &node80, &node170, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), RED);

  initNode(&node170, 170, ((void *)0), ((void *)0), BLACK);



  insert(root, addNode);

  violationCaseThreeLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)410, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(80, &node70, &node120, BLACK, &node80, 411);;

  testAssertNode(70, ((void *)0), ((void *)0), RED, &node70, 412);;

  testAssertNode(120, ((void *)0), &node170, RED, &node120, 413);;

  testAssertNode(170, ((void *)0), ((void *)0), BLACK, &node170, 414);;

}

void test_parent_of_addNode_is_right_child_of_Grandparent_of_addNode(void){

  Node *root = &node100;

  Node *addNode = &node150;

  initNode(&node100, 100, &node80, &node120, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), RED);

  initNode(&node120, 120, ((void *)0), ((void *)0), RED);



  insert(root, addNode);

  violationCaseOneLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)434, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, RED, &node100, 435);;

  testAssertNode(120, ((void *)0), &node150, BLACK, &node120, 436);;

  testAssertNode(80, ((void *)0), ((void *)0), BLACK, &node80, 437);;

  testAssertNode(150, ((void *)0), ((void *)0), RED, &node150, 438);;

}

void test_case_two_uncle_is_black_and_addNode_at_right_left_of_root(void){

  Node *root = &node120;

  Node *addNode = &node150;

  initNode(&node120, 120, &node80, &node170, BLACK);

  initNode(&node80, 80, ((void *)0),((void *)0), BLACK);

  initNode(&node170, 170, ((void *)0), ((void *)0), RED);



  insert(root, addNode);

  violationCaseTwoRight(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)460, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(150, &node120, &node170, BLACK, &node150, 461);;

  testAssertNode(80, ((void *)0), ((void *)0), BLACK, &node80, 462);;

  testAssertNode(120, &node80, ((void *)0), RED, &node120, 463);;

  testAssertNode(170, ((void *)0), ((void *)0), RED, &node170, 464);;

}

void test_case_three_uncle_is_black_and_addNode_at_right_right_of_root(void){

  Node *root = &node120;

  Node *addNode = &node250;

  initNode(&node120, 120, &node80, &node170, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), BLACK);

  initNode(&node170, 170, ((void *)0), ((void *)0), RED);



  insert(root, addNode);

  violationCaseThreeRight(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node170)), (((void *)0)), (_U_UINT)484, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(170, &node120, &node250, BLACK, &node170, 485);;

  testAssertNode(250, ((void *)0), ((void *)0), RED, &node250, 486);;

  testAssertNode(120, &node80, ((void *)0), RED, &node120, 487);;

  testAssertNode(80, ((void *)0), ((void *)0), BLACK, &node80, 488);;

}

void test_pointer_attract_to_a_node_fifty_and_return_null(void){

  Node *rootPtr = ((void *)0);

  Node *addNode = &node50;

  initNode(&node50, 50, &node70, &node80, BLACK);

  rbtAdd(&rootPtr, addNode);



  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)504, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(50, ((void *)0), ((void *)0), BLACK, &node50, 505);;

}















void test_add_a_node_at_right_of_root(void){

  Node *rootPtr = &node80;

  Node *addNode = &node120;

  initNode(&node80, 80, ((void *)0), ((void *)0), BLACK);

  initNode(&node120, 120, &node50, &node250, BLACK);

  rbtAdd(&rootPtr, addNode);



  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)521, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(80, ((void *)0), &node120, BLACK, &node80, 522);;

  testAssertNode(120, ((void *)0), ((void *)0), RED, &node120, 523);;

}

void test_add_a_node_at_right_of_right_of_root_and_case_three(void){

  Node *rootPtr = &node50;

  Node *addNode = &node120;

  initNode(&node50, 50, ((void *)0), &node80, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), RED);

  initNode(&node120, 120, &node90, &node250, BLACK);

  rbtAdd(&rootPtr, addNode);



  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)541, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(50, ((void *)0), ((void *)0), RED, &node50, 542);;

  testAssertNode(80, &node50, &node120, BLACK, &node80, 543);;

  testAssertNode(120, ((void *)0), ((void *)0), RED, &node120, 544);;

}

void test_add_a_node_and_recolour(void){

  Node *rootPtr = &node60;

  Node *addNode = &node80;



  initNode(&node60, 60, ((void *)0), &node100, BLACK);

  initNode(&node100, 100, &node70, &node120, BLACK);

  initNode(&node70, 70, ((void *)0), ((void *)0), RED);

  initNode(&node120, 120, ((void *)0), ((void *)0), RED);

  initNode(&node80, 80, &node250, &node250, BLACK);



  rbtAdd(&rootPtr, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)569, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(60, ((void *)0), &node100, BLACK, &node60, 570);;

  testAssertNode(100, &node70, &node120, RED, &node100, 571);;

  testAssertNode(120, ((void *)0), ((void *)0), BLACK, &node120, 572);;

  testAssertNode(70, ((void *)0), &node80, BLACK, &node70, 573);;

  testAssertNode(80, ((void *)0), ((void *)0), RED, &node80, 574);;

}

void test_add_a_node_and_recolour_at_rightChild_of_rightNode_and_recolour(void){

  Node *rootPtr = &node100;

  Node *addNode = &node60;



  initNode(&node100, 100, &node80, &node120, RED);

  initNode(&node80, 80, ((void *)0), &node90, RED);

  initNode(&node90, 90, ((void *)0), ((void *)0), BLACK);

  initNode(&node120, 120, ((void *)0), ((void *)0), RED);

  initNode(&node60, 60, &node250, &node50, BLACK);



  rbtAdd(&rootPtr, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)598, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, BLACK, &node100, 599);;

  testAssertNode(80, &node60, &node90, BLACK, &node80, 600);;

  testAssertNode(120, ((void *)0), ((void *)0), BLACK, &node120, 601);;

  testAssertNode(60, ((void *)0), ((void *)0), RED, &node60, 602);;

  testAssertNode(90, ((void *)0), ((void *)0), BLACK, &node90, 603);;

}

void test_rbtAdd_case_two_left_right_rotation(void){

  Node *rootPtr = &node150;

  Node *addNode = &node5;



  initNode(&node150, 150, &node20, ((void *)0), BLACK);

  initNode(&node20, 20, ((void *)0), ((void *)0), RED);

  initNode(&node5, 5, &node250, ((void *)0), BLACK);

  rbtAdd(&rootPtr, addNode);



  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node20)), (((void *)0)), (_U_UINT)625, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, &node5, &node150, BLACK, &node20, 626);;

  testAssertNode(5, ((void *)0), ((void *)0), RED, &node5, 627);;

  testAssertNode(150, ((void *)0), ((void *)0), RED, &node150, 628);;

}

void test_rbtAdd_with_case_two_and_case_three(void){

  Node *rootPtr = &node11;

  Node *addNode = &node7;



  initNode(&node11, 11, &node2, &node14, BLACK);

  initNode(&node2, 2, &node1, &node7, RED);

  initNode(&node1, 1, ((void *)0), ((void *)0), BLACK);

  initNode(&node14, 14, ((void *)0), ((void *)0), BLACK);

  initNode(&node7, 7, ((void *)0), ((void *)0), BLACK);



  rbtAdd(&rootPtr, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node7)), (((void *)0)), (_U_UINT)657, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(7, &node2, &node11, BLACK, &node7, 658);;

  testAssertNode(2, &node1, ((void *)0), RED, &node2, 659);;

  testAssertNode(1, ((void *)0), ((void *)0), BLACK, &node1, 660);;

  testAssertNode(11, ((void *)0), &node14, RED, &node11, 661);;

  testAssertNode(14, ((void *)0), ((void *)0), BLACK, &node14, 662);;

}

void test_rbtAdd_with_case_three_at_right_side(void){

  Node *rootPtr = &node2;

  Node *addNode = &node10;



  initNode(&node2, 2, &node1, &node4, BLACK);

  initNode(&node4, 4, ((void *)0), &node5, BLACK);

  initNode(&node1, 1, ((void *)0), ((void *)0), BLACK);

  initNode(&node5, 5, ((void *)0), &node10, RED);

  initNode(&node10, 10, ((void *)0), ((void *)0), BLACK);



  rbtAdd(&rootPtr, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (((void *)0)), (_U_UINT)688, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node5, BLACK, &node2, 689);;

  testAssertNode(1, ((void *)0), ((void *)0), BLACK, &node1, 690);;

  testAssertNode(5, &node4, &node10, BLACK, &node5, 691);;

  testAssertNode(4, ((void *)0), ((void *)0), RED, &node4, 692);;

  testAssertNode(10, ((void *)0), ((void *)0), RED, &node10, 693);;

}

void test_rbtAdd_with_case_one_at_left_side(void){

  Node *rootPtr = &node2;

  Node *addNode = &node3;



  initNode(&node2, 2, &node1, &node5, BLACK);

  initNode(&node4, 4, &node3, ((void *)0), RED);

  initNode(&node1, 1, ((void *)0), ((void *)0), BLACK);

  initNode(&node5, 5, &node4, &node10, BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), RED);

  initNode(&node3, 3, ((void *)0), ((void *)0), BLACK);



  rbtAdd(&rootPtr, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (((void *)0)), (_U_UINT)720, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node5, BLACK, &node2, 721);;

  testAssertNode(1, ((void *)0), ((void *)0), BLACK, &node1, 722);;

  testAssertNode(5, &node4, &node10, RED, &node5, 723);;

  testAssertNode(4, &node3, ((void *)0), BLACK, &node4, 724);;

  testAssertNode(10, ((void *)0), ((void *)0), BLACK, &node10, 725);;

  testAssertNode(3, ((void *)0), ((void *)0), RED, &node3, 726);;

}

void test_rbtAdd_with_case_one_and_case_2_with_Add_node_seven(void){

  Node *rootPtr = &node2;

  Node *addNode = &node7;



  initNode(&node2, 2, &node1, &node5, BLACK);

  initNode(&node4, 4, &node3, ((void *)0), BLACK);

  initNode(&node1, 1, ((void *)0), ((void *)0), BLACK);

  initNode(&node5, 5, &node4, &node10, RED);

  initNode(&node10, 10, &node6, ((void *)0), BLACK);

  initNode(&node6, 6, ((void *)0), ((void *)0), RED);

  initNode(&node3, 3, ((void *)0), ((void *)0), RED);

  initNode(&node7, 7, ((void *)0), ((void *)0), BLACK);



  rbtAdd(&rootPtr, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (((void *)0)), (_U_UINT)756, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node5, BLACK, &node2, 757);;

  testAssertNode(1, ((void *)0), ((void *)0), BLACK, &node1, 758);;

  testAssertNode(5, &node4, &node7, RED, &node5, 759);;

  testAssertNode(4, &node3, ((void *)0), BLACK, &node4, 760);;

  testAssertNode(10, ((void *)0), ((void *)0), RED, &node10, 761);;

  testAssertNode(3, ((void *)0), ((void *)0), RED, &node3, 762);;

  testAssertNode(7, &node6, &node10, RED, &node7, 763);;

  testAssertNode(6, ((void *)0), ((void *)0), RED, &node6, 764);;

}

void recolour_twice(void){

  Node *rootPtr = &node20;

  Node *addNode = &node60;



  initNode(&node20, 20, &node12, &node25, BLACK);

  initNode(&node12, 12, ((void *)0), ((void *)0), RED);

  initNode(&node25, 25, ((void *)0), &node50, RED);

  initNode(&node50, 50, &node40, &node70, BLACK);

  initNode(&node40, 40, ((void *)0), ((void *)0), RED);

  initNode(&node70, 70, &node60, ((void *)0), RED);

  initNode(&node60, 60, ((void *)0), ((void *)0), BLACK);



  rbtAdd(&rootPtr, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (((void *)0)), (_U_UINT)792, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, &node12, &node25, RED, &node20, 793);;

  testAssertNode(25, ((void *)0), &node50, BLACK, &node25, 794);;

  testAssertNode(12, ((void *)0), ((void *)0), BLACK, &node12, 795);;

  testAssertNode(50, &node40, &node70, RED, &node50, 796);;

  testAssertNode(40, ((void *)0), ((void *)0), BLACK, &node40, 797);;

  testAssertNode(60, ((void *)0), ((void *)0), RED, &node60, 798);;

  testAssertNode(70, &node60, ((void *)0), BLACK, &node70, 799);;

}

void test_fuction_caseOneParentRedBlack_when_parent_red(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node100;

  initNode(&node20, 20, &node10, &node40, RED);

  initNode(&node40, 40, ((void *)0), &node60, BLACK);

  initNode(&node60, 60, ((void *)0), ((void *)0), RED);

  initNode(&node10, 10, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseOneALeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (((void *)0)), (_U_UINT)822, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, RED, &node40, 823);;

  testAssertNode(20, &node10, ((void *)0), BLACK, &node20, 824);;

  testAssertNode(60, ((void *)0), ((void *)0), BLACK, &node60, 825);;

  testAssertNode(10, ((void *)0), ((void *)0), BLACK, &node10, 826);;

}

void test_fuction_caseOneParentRedBlack_when_parent_Black(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node10;

  initNode(&node20, 20, &node10, &node40, BLACK);

  initNode(&node40, 40, ((void *)0), &node60, BLACK);

  initNode(&node60, 60, ((void *)0), ((void *)0), RED);

  initNode(&node10, 10, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseOneALeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (((void *)0)), (_U_UINT)849, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, BLACK, &node40, 850);;

  testAssertNode(20, ((void *)0), ((void *)0), BLACK, &node20, 851);;

  testAssertNode(60, ((void *)0), ((void *)0), BLACK, &node60, 852);;



}

void test_fuction_caseOneParentRedBlack_the_sibling_of_child_at_left_when_parent_red(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node100;

  initNode(&node20, 20, &node10, &node60, RED);

  initNode(&node60, 60, &node40, ((void *)0), BLACK);

  initNode(&node40, 40, ((void *)0), ((void *)0), RED);

  initNode(&node10, 10, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseOneBLeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (((void *)0)), (_U_UINT)877, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, RED, &node40, 878);;

  testAssertNode(20, &node10, ((void *)0), BLACK, &node20, 879);;

  testAssertNode(60, ((void *)0), ((void *)0), BLACK, &node60, 880);;

  testAssertNode(10, ((void *)0), ((void *)0), BLACK, &node10, 881);;

}

void test_fuction_caseOneParentRedBlack_the_sibling_at_left_and_parent_is_black_colour(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node10;

  initNode(&node20, 20, &node10, &node60, BLACK);

  initNode(&node60, 60, &node40, ((void *)0), BLACK);

  initNode(&node40, 40, ((void *)0), ((void *)0), RED);

  initNode(&node10, 10, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseOneBLeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (((void *)0)), (_U_UINT)904, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, BLACK, &node40, 905);;

  testAssertNode(20, ((void *)0), ((void *)0), BLACK, &node20, 906);;

  testAssertNode(60, ((void *)0), ((void *)0), BLACK, &node60, 907);;



}

void test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_black(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node10;

  initNode(&node20, 20, &node10, &node40, BLACK);

  initNode(&node40, 40, &node25, &node60, BLACK);

  initNode(&node60, 60, ((void *)0), ((void *)0), BLACK);

  initNode(&node25, 25, ((void *)0), ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseTwoALeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node20)), (((void *)0)), (_U_UINT)932, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, ((void *)0), &node40, DOUBLE_BLACK, &node20, 933);;

  testAssertNode(40, &node25, &node60, RED, &node40, 934);;

  testAssertNode(25, ((void *)0), ((void *)0), BLACK, &node25, 935);;

  testAssertNode(60, ((void *)0), ((void *)0), BLACK, &node60, 936);;



}

void test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_NULL(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node10;

  initNode(&node20, 20, &node10, &node40, BLACK);

  initNode(&node40, 40, ((void *)0), ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseTwoALeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node20)), (((void *)0)), (_U_UINT)957, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, ((void *)0), &node40, DOUBLE_BLACK, &node20, 958);;

  testAssertNode(40, ((void *)0), ((void *)0), RED, &node40, 959);;



}

void test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_black(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node10;

  initNode(&node20, 20, &node10, &node40, RED);

  initNode(&node40, 40, &node25, &node60, BLACK);

  initNode(&node60, 60, ((void *)0), ((void *)0), BLACK);

  initNode(&node25, 25, ((void *)0), ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseTwoBLeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node20)), (((void *)0)), (_U_UINT)984, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, ((void *)0), &node40, BLACK, &node20, 985);;

  testAssertNode(40, &node25, &node60, RED, &node40, 986);;

  testAssertNode(25, ((void *)0), ((void *)0), BLACK, &node25, 987);;

  testAssertNode(60, ((void *)0), ((void *)0), BLACK, &node60, 988);;



}

void test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_NULL_and_the_deleteNode_not_inside_the_tree(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node50;

  initNode(&node20, 20, &node10, &node40, RED);

  initNode(&node40, 40, ((void *)0), ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseTwoBLeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node20)), (((void *)0)), (_U_UINT)1009, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, &node10, &node40, BLACK, &node20, 1010);;

  testAssertNode(40, ((void *)0), ((void *)0), RED, &node40, 1011);;

  testAssertNode(10, ((void *)0), ((void *)0), BLACK, &node10, 1012);;

}

void test_fuction_caseThree_the_sibling_is_red_and_right_child_of_parent(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node10;

  initNode(&node20, 20, &node10, &node40, BLACK);

  initNode(&node40, 40, &node25, &node60, RED);

  initNode(&node60, 60, ((void *)0), ((void *)0), BLACK);

  initNode(&node25, 25, ((void *)0), ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseThreeLeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (((void *)0)), (_U_UINT)1036, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, BLACK, &node40, 1037);;

  testAssertNode(20, ((void *)0), &node25, BLACK, &node20, 1038);;

  testAssertNode(25, ((void *)0), ((void *)0), RED, &node25, 1039);;

  testAssertNode(60, ((void *)0), ((void *)0), BLACK, &node60, 1040);;



}

void test_fuction_caseThree_the_sibling_is_red_and_right_child_of_parent_the_delete_node_is_not_inside_the_tree(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node100;

  initNode(&node20, 20, &node10, &node40, BLACK);

  initNode(&node40, 40, &node25, &node60, RED);

  initNode(&node60, 60, ((void *)0), ((void *)0), BLACK);

  initNode(&node25, 25, ((void *)0), ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseThreeLeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (((void *)0)), (_U_UINT)1065, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, BLACK, &node40, 1066);;

  testAssertNode(20, &node10, &node25, BLACK, &node20, 1067);;

  testAssertNode(25, ((void *)0), ((void *)0), RED, &node25, 1068);;

  testAssertNode(60, ((void *)0), ((void *)0), BLACK, &node60, 1069);;

  testAssertNode(10, ((void *)0), ((void *)0), BLACK, &node10, 1070);;

}

void test_fuction_caseOne_thesibling_at_left_child_of_parent_and_parent_is_red(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node70;

  initNode(&node60, 60, &node40, &node70, RED);

  initNode(&node40, 40, &node20, ((void *)0), BLACK);

  initNode(&node20, 20, ((void *)0), ((void *)0), RED);

  initNode(&node70, 70, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseOneARight(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (((void *)0)), (_U_UINT)1095, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, RED, &node40, 1096);;

  testAssertNode(20, ((void *)0), ((void *)0), BLACK, &node20, 1097);;

  testAssertNode(60, ((void *)0), ((void *)0), BLACK, &node60, 1098);;



}

void test_fuction_caseOne_the_sibling_at_left_child_of_parent_and_parent_is_Black_deleteNode_not_inside_tree(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node100;

  initNode(&node60, 60, &node40, &node70, BLACK);

  initNode(&node40, 40, &node20, ((void *)0), BLACK);

  initNode(&node20, 20, ((void *)0), ((void *)0), RED);

  initNode(&node70, 70, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseOneARight(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (((void *)0)), (_U_UINT)1124, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, BLACK, &node40, 1125);;

  testAssertNode(20, ((void *)0), ((void *)0), BLACK, &node20, 1126);;

  testAssertNode(60, ((void *)0), &node70, BLACK, &node60, 1127);;

  testAssertNode(70, ((void *)0), ((void *)0), BLACK, &node70, 1128);;

}

void test_fuction_caseOne_the_sibling_at_left_child_of_parent_and_parent_is_red(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node70;

  initNode(&node60, 60, &node20, &node70, RED);

  initNode(&node20, 20, ((void *)0), &node40, BLACK);

  initNode(&node40, 40, ((void *)0), ((void *)0), RED);

  initNode(&node70, 70, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseOneBRight(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (((void *)0)), (_U_UINT)1152, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, RED, &node40, 1153);;

  testAssertNode(20, ((void *)0), ((void *)0), BLACK, &node20, 1154);;

  testAssertNode(60, ((void *)0), ((void *)0), BLACK, &node60, 1155);;



}

void test_fuction_caseOne_the_sibling_at_left_child_of_parent_and_parent_is_black_deleteNode_not_inside_tree(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node100;

  initNode(&node60, 60, &node20, &node70, BLACK);

  initNode(&node20, 20, ((void *)0), &node40, BLACK);

  initNode(&node40, 40, ((void *)0), ((void *)0), RED);

  initNode(&node70, 70, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseOneBRight(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (((void *)0)), (_U_UINT)1180, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, BLACK, &node40, 1181);;

  testAssertNode(20, ((void *)0), ((void *)0), BLACK, &node20, 1182);;

  testAssertNode(60, ((void *)0), &node70, BLACK, &node60, 1183);;

  testAssertNode(70, ((void *)0), ((void *)0), BLACK, &node70, 1184);;

}

void test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_black_the_sibling_at_left_side(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node70;

  initNode(&node60, 60, &node25, &node70, BLACK);

  initNode(&node25, 25, &node20, &node40, BLACK);

  initNode(&node20, 20, ((void *)0), ((void *)0), BLACK);

  initNode(&node40, 40, ((void *)0), ((void *)0), BLACK);

  initNode(&node70, 70, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseTwoARight(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)1209, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(60, &node25, ((void *)0), DOUBLE_BLACK, &node60, 1210);;

  testAssertNode(25, &node20, &node40, RED, &node25, 1211);;

  testAssertNode(20, ((void *)0), ((void *)0), BLACK, &node20, 1212);;

  testAssertNode(40, ((void *)0), ((void *)0), BLACK, &node40, 1213);;



}

void test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_NULL_the_sibling_at_left_side(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node70;

  initNode(&node60, 60, &node25, &node70, BLACK);

  initNode(&node25, 25, ((void *)0), ((void *)0), BLACK);

  initNode(&node70, 70, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseTwoARight(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)1234, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(60, &node25, ((void *)0), DOUBLE_BLACK, &node60, 1235);;

  testAssertNode(25, ((void *)0), ((void *)0), RED, &node25, 1236);;



}

void test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_black_the_sibling_at_left_side(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node70;

  initNode(&node60, 60, &node25, &node70, RED);

  initNode(&node25, 25, &node20, &node40, BLACK);

  initNode(&node20, 20, ((void *)0), ((void *)0), BLACK);

  initNode(&node40, 40, ((void *)0), ((void *)0), BLACK);

  initNode(&node70, 70, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseTwoBRight(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)1262, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(60, &node25, ((void *)0), BLACK, &node60, 1263);;

  testAssertNode(25, &node20, &node40, RED, &node25, 1264);;

  testAssertNode(20, ((void *)0), ((void *)0), BLACK, &node20, 1265);;

  testAssertNode(40, ((void *)0), ((void *)0), BLACK, &node40, 1266);;



}

void test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_NULL_the_sibling_at_left_side(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node70;

  initNode(&node60, 60, &node25, &node70, RED);

  initNode(&node25, 25, ((void *)0), ((void *)0), BLACK);

  initNode(&node70, 70, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseTwoBRight(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)1287, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(60, &node25, ((void *)0), BLACK, &node60, 1288);;

  testAssertNode(25, ((void *)0), ((void *)0), RED, &node25, 1289);;



}

void test_fuction_caseThree_the_sibling_is_red_and_left_child_of_parent(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node70;

  initNode(&node60, 60, &node25, &node70, BLACK);

  initNode(&node25, 25, &node20, &node40, RED);

  initNode(&node20, 20, ((void *)0), ((void *)0), BLACK);

  initNode(&node40, 40, ((void *)0), ((void *)0), BLACK);

  initNode(&node70, 70, ((void *)0), ((void *)0), DOUBLE_BLACK);



  caseThreeRight(&rootPtr, deleteNode);



  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node25)), (((void *)0)), (_U_UINT)1316, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(25, &node20, &node60, BLACK, &node25, 1317);;

  testAssertNode(20, ((void *)0), ((void *)0), BLACK, &node20, 1318);;

  testAssertNode(60, &node40, ((void *)0), BLACK, &node60, 1319);;

  testAssertNode(40, ((void *)0), ((void *)0), RED, &node40, 1320);;



}



void test_rbtRemoveInt_function_given_a_delete_node_then_return_node_and_colour(void){

  Node *deleteNode = &node5;

  ReturnedObject ro;

  ro = rbtRemoveInt(deleteNode);



  UnityAssertEqualNumber((_U_SINT)((ro.removedNode)), (_U_SINT)((deleteNode)), (((void *)0)), (_U_UINT)1329, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((ro.returnedColour)), (_U_SINT)((DOUBLE_BLACK)), (((void *)0)), (_U_UINT)1330, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((ro.removedNode->colour)), (_U_SINT)((DOUBLE_BLACK)), (((void *)0)), (_U_UINT)1331, UNITY_DISPLAY_STYLE_INT);

}

void test_delete_one_node_and_that_is_the_root(void){

  Node *rootPtr = &node100;

  Node *delete = &node100;

  initNode(&node100, 100, ((void *)0), ((void *)0), RED);



  deleteRBTNode(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)1347, UNITY_DISPLAY_STYLE_HEX32);

}

void test_delete_one_node_and_that_is_the_twenty_node_at_left_most_and_performed_rotation_left(void){

  Node *rootPtr = &node25;

  Node *delete = &node20;

  initNode(&node25, 25, &node20, &node60, RED);

  initNode(&node20, 20, ((void *)0), ((void *)0), BLACK);

  initNode(&node60, 60, ((void *)0), &node70, BLACK);

  initNode(&node70, 70, ((void *)0), ((void *)0), RED);





  deleteRBTNode(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)1369, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(60, &node25, &node70, BLACK, &node60, 1370);;

  testAssertNode(25, ((void *)0), ((void *)0), BLACK, &node25, 1371);;

}

void test_delete_node_twenty_and_performed_left_rotation_the_headNode_is_red(void){

  Node *rootPtr = &node25;

  Node *delete = &node20;

  initNode(&node25, 25, &node20, &node60, RED);

  initNode(&node20, 20, ((void *)0), ((void *)0), BLACK);

  initNode(&node60, 60, ((void *)0), &node70, BLACK);

  initNode(&node70, 70, ((void *)0), ((void *)0), RED);





  deleteRBTNode(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)1393, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(60, &node25, &node70, BLACK, &node60, 1394);;

  testAssertNode(25, ((void *)0), ((void *)0), BLACK, &node25, 1395);;

}

void test_delete_node_six_and_performed_caseThree_and_involved_case_two(void){

  Node *rootPtr = &node2;

  Node *delete = &node4;

  initNode(&node2, 2, &node1, &node5, BLACK);

  initNode(&node5, 5, &node4, &node7, BLACK);

  initNode(&node1, 1, ((void *)0), ((void *)0), BLACK);

  initNode(&node4, 4, ((void *)0), ((void *)0), BLACK);

  initNode(&node6, 6, ((void *)0), ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), BLACK);

  initNode(&node7, 7, &node6, &node10, RED);



  deleteRBTNode(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (((void *)0)), (_U_UINT)1421, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node7, BLACK, &node2, 1422);;

  testAssertNode(7, &node5, &node10, BLACK, &node7, 1423);;

  testAssertNode(5, ((void *)0), &node6, BLACK, &node5, 1424);;

  testAssertNode(1, ((void *)0), ((void *)0), BLACK, &node1, 1425);;

  testAssertNode(10, ((void *)0), ((void *)0), BLACK, &node10, 1426);;

  testAssertNode(6, ((void *)0), ((void *)0), RED, &node6, 1427);;

}

void test_delete_node_six_and_performed_caseBTwo(void){

  Node *rootPtr = &node2;

  Node *delete = &node4;

  initNode(&node2, 2, &node1, &node5, BLACK);

  initNode(&node5, 5, &node4, &node7, RED);

  initNode(&node1, 1, ((void *)0), ((void *)0), BLACK);

  initNode(&node4, 4, ((void *)0), ((void *)0), BLACK);

  initNode(&node6, 6, ((void *)0), ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), BLACK);

  initNode(&node7, 7, &node6, &node10, BLACK);



  deleteRBTNode(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (((void *)0)), (_U_UINT)1454, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node5, BLACK, &node2, 1455);;

  testAssertNode(5, ((void *)0), &node7, BLACK, &node5, 1456);;

  testAssertNode(7, &node6, &node10, RED, &node7, 1457);;

  testAssertNode(1, ((void *)0), ((void *)0), BLACK, &node1, 1458);;

  testAssertNode(6, ((void *)0), ((void *)0), BLACK, &node6, 1459);;

  testAssertNode(10, ((void *)0), ((void *)0), BLACK, &node10, 1460);;

}

void test_delete_a_node_and_performed_caseATwo(void){

  Node *rootPtr = &node2;

  Node *delete = &node4;

  initNode(&node2, 2, &node1, &node5, BLACK);

  initNode(&node5, 5, &node4, &node7, BLACK);

  initNode(&node1, 1, ((void *)0), ((void *)0), BLACK);

  initNode(&node4, 4, ((void *)0), ((void *)0), BLACK);

  initNode(&node6, 6, ((void *)0), ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), BLACK);

  initNode(&node7, 7, &node6, &node10, BLACK);



  deleteRBTNode(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (((void *)0)), (_U_UINT)1487, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node5, BLACK, &node2, 1488);;

  testAssertNode(5, ((void *)0), &node7, BLACK, &node5, 1489);;

  testAssertNode(7, &node6, &node10, RED, &node7, 1490);;

  testAssertNode(1, ((void *)0), ((void *)0), RED, &node1, 1491);;

  testAssertNode(6, ((void *)0), ((void *)0), BLACK, &node6, 1492);;

  testAssertNode(10, ((void *)0), ((void *)0), BLACK, &node10, 1493);;

}

void test_delete_a_node_and_performed_rotate_right_is_caseOneA(void){

  Node *rootPtr = &node90;

  Node *delete = &node70;

  initNode(&node90, 90, &node60, &node100, BLACK);

  initNode(&node60, 60, &node50, &node70, RED);

  initNode(&node100, 100, &node80, &node120, RED);

  initNode(&node50, 50, &node40, ((void *)0), BLACK);

  initNode(&node40, 40, ((void *)0), ((void *)0), RED);

  initNode(&node70, 70, ((void *)0), ((void *)0), RED);

  initNode(&node80, 80, ((void *)0), ((void *)0), BLACK);

  initNode(&node120, 120, ((void *)0), ((void *)0), BLACK);



  deleteRBTNode(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node90)), (((void *)0)), (_U_UINT)1518, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(90, &node50, &node100, BLACK, &node90, 1519);;

  testAssertNode(50, &node40, &node60, RED, &node50, 1520);;

  testAssertNode(100, &node80, &node120, RED, &node100, 1521);;

  testAssertNode(40, ((void *)0), ((void *)0), BLACK, &node40, 1522);;

  testAssertNode(60, ((void *)0), ((void *)0), BLACK, &node60, 1523);;

  testAssertNode(80, ((void *)0), ((void *)0), BLACK, &node80, 1524);;

  testAssertNode(120, ((void *)0), ((void *)0), BLACK, &node120, 1525);;

}

void test_delete_a_node_and_performed_caseThreeRight(void){

  Node *rootPtr = &node90;

  Node *delete = &node70;

  initNode(&node90, 90, &node60, &node100, BLACK);

  initNode(&node60, 60, &node50, &node70, BLACK);

  initNode(&node100, 100, &node80, &node120, RED);

  initNode(&node50, 50, &node40, &node55, RED);

  initNode(&node40, 40, ((void *)0), ((void *)0), BLACK);

  initNode(&node70, 70, ((void *)0), ((void *)0), RED);

  initNode(&node80, 80, ((void *)0), ((void *)0), BLACK);

  initNode(&node120, 120, ((void *)0), ((void *)0), BLACK);

  initNode(&node55, 55, ((void *)0), ((void *)0), BLACK);



  deleteRBTNode(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node90)), (((void *)0)), (_U_UINT)1552, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(90, &node50, &node100, BLACK, &node90, 1553);;

  testAssertNode(50, &node40, &node60, BLACK, &node50, 1554);;

  testAssertNode(100, &node80, &node120, RED, &node100, 1555);;

  testAssertNode(40, ((void *)0), ((void *)0), BLACK, &node40, 1556);;

  testAssertNode(60, &node55, ((void *)0), BLACK, &node60, 1557);;

  testAssertNode(80, ((void *)0), ((void *)0), BLACK, &node80, 1558);;

  testAssertNode(120, ((void *)0), ((void *)0), BLACK, &node120, 1559);;

  testAssertNode(55, ((void *)0), ((void *)0), RED, &node55, 1560);;

}

void test_function_findReplacer(void){

  Node *rootPtr = &node7;

  Node *delete = &node7;

  initNode(&node2, 2, &node1, &node5, BLACK);

  initNode(&node5, 5, ((void *)0), &node7, RED);

  initNode(&node7, 7, &node6, &node10, RED);

  initNode(&node1, 1, ((void *)0), ((void *)0), BLACK);

  initNode(&node6, 6, ((void *)0), ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), BLACK);



  findReplacer(&rootPtr, delete);



}
