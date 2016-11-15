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

Node node5, node10, node20, node25, node50, node60,

 node65, node70, node75, node80, node90, node100, node110,node120,

         node130, node150, node170, node250;



void setUp(void){

  initNode(&node5, 5, ((void *)0), ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), BLACK);

  initNode(&node20, 20, ((void *)0), ((void *)0), BLACK);

  initNode(&node25, 25, ((void *)0), ((void *)0), BLACK);

  initNode(&node50, 50, ((void *)0), ((void *)0), BLACK);

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



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)56, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)57, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(80, ((void *)0), ((void *)0), BLACK, &node80, 58);;

}

void test_left_rotation_with_node_one_five_zero(void){

  Node *root = &node150;

  initNode(&node150, 150, ((void *)0), ((void *)0), BLACK);

  rotateLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)73, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(150, ((void *)0), ((void *)0), BLACK, &node150, 74);;

}

void test_left_rotation_with_node_sixty_and_two_children(void){

  Node *root = &node60;

  initNode(&node60, 60, &node50, &node100, BLACK);

  initNode(&node50, 50, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  rotateLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)92, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)93, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)94, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)95, UNITY_DISPLAY_STYLE_HEX32);

}

void test_left_rotation_with_node_hundred_and_left_channel(void){

  Node *root = &node100;

  initNode(&node100, 100, &node80, &node150, BLACK);

  initNode(&node150, 150, &node120, &node170, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), BLACK);

  initNode(&node120, 120, ((void *)0), ((void *)0), BLACK);

  initNode(&node170, 170, ((void *)0), ((void *)0), BLACK);

  rotateLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)115, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node170)), (((void *)0)), (_U_UINT)116, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)117, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)118, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->right)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)119, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_nodeFive(void){

  Node *root = &node5;

  initNode(&node5, 5, ((void *)0), ((void *)0), BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node5)), (((void *)0)), (_U_UINT)134, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)135, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)136, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_nodeTen(void){

  Node *root = &node50;

  initNode(&node50, 50, &node10, ((void *)0), BLACK);

  initNode(&node10, 10, ((void *)0), ((void *)0), BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node10)), (((void *)0)), (_U_UINT)152, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)153, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)154, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_node_sixty_and_two_children(void){

  Node *root = &node60;

  initNode(&node60, 60, &node50, &node100, BLACK);

  initNode(&node50, 50, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)172, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((((void *)0))), (((void *)0)), (_U_UINT)173, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)174, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->right)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)175, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_node_one_hundred_and_twenty_and_two_children(void){

  Node *root = &node120;

  initNode(&node120, 120, &node80, &node150, BLACK);

  initNode(&node80, 80, &node5, &node100, BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 5, ((void *)0), ((void *)0), BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)195, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node5)), (((void *)0)), (_U_UINT)196, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)197, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->right)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)198, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->left)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)199, UNITY_DISPLAY_STYLE_HEX32);

}

void test_left_right_rotation_with_node_hundred_and_child_eighty(void){

  Node *root = &node120;

  initNode(&node120, 120, &node80, ((void *)0), BLACK);

  initNode(&node80, 80, &node60, &node100, BLACK);

  initNode(&node60, 60, ((void *)0), ((void *)0), BLACK);

  initNode(&node100, 100, ((void *)0), ((void *)0), BLACK);

  rotateLeftRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)220, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)221, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)222, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)223, UNITY_DISPLAY_STYLE_HEX32);

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



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)245, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(50, &node20, &node150, BLACK, &node50, 246);;

  testAssertNode(20, &node5, &node25, BLACK, &node20, 247);;

  testAssertNode(150, &node100, &node250, BLACK, &node150, 248);;

  testAssertNode(5, ((void *)0), ((void *)0), BLACK, &node5, 249);;

  testAssertNode(25, ((void *)0), ((void *)0), BLACK, &node25, 250);;

  testAssertNode(100, ((void *)0), ((void *)0), BLACK, &node100, 251);;

  testAssertNode(250, ((void *)0), ((void *)0), BLACK, &node250, 252);;

  }

void test_right_left_rotation_simple_with_node_hundred(void){

  Node *root = &node100;

  initNode(&node100, 100, ((void *)0), &node170, BLACK);

  initNode(&node170, 170, &node120, ((void *)0), BLACK);;

  initNode(&node120, 120, ((void *)0), ((void *)0), BLACK);

  rotateRightLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)269, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(120, &node100, &node170, BLACK, &node120, 270);;

  testAssertNode(100, ((void *)0), ((void *)0), BLACK, &node100, 271);;

  testAssertNode(170, ((void *)0), ((void *)0), BLACK, &node170, 272);;

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



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node120)), (((void *)0)), (_U_UINT)296, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node70, &node80, BLACK, &node100, 297);;

  testAssertNode(150, &node130, &node170, BLACK, &node150, 298);;

  testAssertNode(70, ((void *)0), ((void *)0), BLACK, &node70, 299);;

  testAssertNode(80, ((void *)0), ((void *)0), BLACK, &node80, 300);;

  testAssertNode(130, ((void *)0), ((void *)0), BLACK, &node130, 301);;

  testAssertNode(170, ((void *)0), ((void *)0), BLACK, &node170, 302);;

}

void test_parent_of_addNode_is_left_child_of_Grandparent_of_addNode_and_addNode_is_left_child_of_parent(void){

  Node *root = &node100;

  Node *addNode = &node70;

  initNode(&node100, 100, &node80, &node120, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), RED);

  initNode(&node120, 120, ((void *)0), ((void *)0), RED);



  insert(root, addNode);

  violationCaseOneLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)322, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, RED, &node100, 323);;

  testAssertNode(80, &node70, ((void *)0), BLACK, &node80, 324);;

  testAssertNode(120, ((void *)0), ((void *)0), BLACK, &node120, 325);;

  testAssertNode(70, ((void *)0), ((void *)0), RED, &node70, 326);;

}

void test_parent_of_addNode_is_left_child_of_Grandparent_of_addNode_and_addNode_is_right_child_of_parent(void){

  Node *root = &node100;

  Node *addNode = &node80;

  initNode(&node100, 100, &node70, &node120, BLACK);

  initNode(&node70, 70, ((void *)0), ((void *)0), RED);

  initNode(&node120, 120, ((void *)0), ((void *)0), RED);



  insert(root, addNode);

  violationCaseOneLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)345, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node70, &node120, RED, &node100, 346);;

  testAssertNode(70, ((void *)0), &node80, BLACK, &node70, 347);;

  testAssertNode(120, ((void *)0), ((void *)0), BLACK, &node120, 348);;

  testAssertNode(80, ((void *)0), ((void *)0), RED, &node80, 349);;

}

void test_case_two_uncle_is_black_and_addNode_at_left_right_of_root(void){

  Node *root = &node120;

  Node *addNode = &node100;

  initNode(&node120, 120, &node80, &node170, BLACK);

  initNode(&node80, 80, ((void *)0),((void *)0), RED);

  initNode(&node170, 170, ((void *)0), ((void *)0), BLACK);



  insert(root, addNode);

  violationCaseTwoLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)371, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, BLACK, &node100, 372);;

  testAssertNode(80, ((void *)0), ((void *)0), RED, &node80, 373);;

  testAssertNode(120, ((void *)0), &node170, RED, &node120, 374);;

  testAssertNode(170, ((void *)0), ((void *)0), BLACK, &node170, 375);;

}

void test_case_three_uncle_is_black_and_addNode_at_left_left_of_root(void){

  Node *root = &node120;

  Node *addNode = &node70;

  initNode(&node120, 120, &node80, &node170, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), RED);

  initNode(&node170, 170, ((void *)0), ((void *)0), BLACK);



  insert(root, addNode);

  violationCaseThreeLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)394, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(80, &node70, &node120, BLACK, &node80, 395);;

  testAssertNode(70, ((void *)0), ((void *)0), RED, &node70, 396);;

  testAssertNode(120, ((void *)0), &node170, RED, &node120, 397);;

  testAssertNode(170, ((void *)0), ((void *)0), BLACK, &node170, 398);;

}

void test_parent_of_addNode_is_right_child_of_Grandparent_of_addNode(void){

  Node *root = &node100;

  Node *addNode = &node150;

  initNode(&node100, 100, &node80, &node120, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), RED);

  initNode(&node120, 120, ((void *)0), ((void *)0), RED);



  insert(root, addNode);

  violationCaseOneLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (((void *)0)), (_U_UINT)418, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, RED, &node100, 419);;

  testAssertNode(120, ((void *)0), &node150, BLACK, &node120, 420);;

  testAssertNode(80, ((void *)0), ((void *)0), BLACK, &node80, 421);;

  testAssertNode(150, ((void *)0), ((void *)0), RED, &node150, 422);;

}

void test_case_two_uncle_is_black_and_addNode_at_right_left_of_root(void){

  Node *root = &node120;

  Node *addNode = &node150;

  initNode(&node120, 120, &node80, &node170, BLACK);

  initNode(&node80, 80, ((void *)0),((void *)0), BLACK);

  initNode(&node170, 170, ((void *)0), ((void *)0), RED);



  insert(root, addNode);

  violationCaseTwoRight(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (((void *)0)), (_U_UINT)444, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(150, &node120, &node170, BLACK, &node150, 445);;

  testAssertNode(80, ((void *)0), ((void *)0), BLACK, &node80, 446);;

  testAssertNode(120, &node80, ((void *)0), RED, &node120, 447);;

  testAssertNode(170, ((void *)0), ((void *)0), RED, &node170, 448);;

}

void test_case_three_uncle_is_black_and_addNode_at_right_right_of_root(void){

  Node *root = &node120;

  Node *addNode = &node250;

  initNode(&node120, 120, &node80, &node170, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), BLACK);

  initNode(&node170, 170, ((void *)0), ((void *)0), RED);



  insert(root, addNode);

  violationCaseThreeRight(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node170)), (((void *)0)), (_U_UINT)468, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(170, &node120, &node250, BLACK, &node170, 469);;

  testAssertNode(250, ((void *)0), ((void *)0), RED, &node250, 470);;

  testAssertNode(120, &node80, ((void *)0), RED, &node120, 471);;

  testAssertNode(80, ((void *)0), ((void *)0), BLACK, &node80, 472);;

}

void test_pointer_attract_to_a_node_fifty_and_return_null(void){

 Node *rootPtr = ((void *)0);

 Node *addNode = &node50;

 rbtAdd(&rootPtr, addNode);



  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)487, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(50, ((void *)0), ((void *)0), BLACK, &node50, 488);;

}















void test_add_a_node_at_right_of_root(void){

 Node *rootPtr = &node80;

 Node *addNode = &node120;

 rbtAdd(&rootPtr, addNode);



  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node80)), (((void *)0)), (_U_UINT)502, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(80, ((void *)0), &node120, BLACK, &node80, 503);;

  testAssertNode(120, ((void *)0), ((void *)0), RED, &node120, 504);;

}















void test_add_a_node_at_right_of_right_of_root(void){

  Node *rootPtr = &node50;

  initNode(&node50, 50, ((void *)0), &node80, BLACK);

  Node *addNode = &node120;

  rbtAdd(&rootPtr, addNode);



  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node50)), (((void *)0)), (_U_UINT)519, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(80, ((void *)0), &node120, BLACK, &node80, 520);;

  testAssertNode(120, ((void *)0), ((void *)0), RED, &node120, 521);;

}

void test_add_a_node_and_recolour(void){

  Node *rootPtr = &node60;

  Node *addNode = &node80;



  initNode(&node60, 60, ((void *)0), &node100, BLACK);

  initNode(&node100, 100, &node70, &node120, BLACK);

  initNode(&node70, 70, ((void *)0), ((void *)0), RED);

  initNode(&node120, 120, ((void *)0), ((void *)0), RED);



  rbtAdd(&rootPtr, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)545, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(60, ((void *)0), &node100, BLACK, &node60, 546);;

  testAssertNode(100, &node70, &node120, RED, &node100, 547);;

  testAssertNode(120, ((void *)0), ((void *)0), BLACK, &node120, 548);;

  testAssertNode(70, ((void *)0), &node80, BLACK, &node70, 549);;

  testAssertNode(80, ((void *)0), ((void *)0), RED, &node80, 550);;

}

void test_add_a_node_and_recolour_five_level(void){

  Node *rootPtr = &node60;

  Node *addNode = &node90;



  initNode(&node60, 60, ((void *)0), &node100, BLACK);

  initNode(&node100, 100, &node70, &node120, RED);

  initNode(&node70, 70, &node65, &node80, BLACK);

  initNode(&node120, 120, ((void *)0), &node250, BLACK);

  initNode(&node80, 80, ((void *)0), ((void *)0), RED);

  initNode(&node250, 250, ((void *)0), ((void *)0), RED);

  initNode(&node65, 65, ((void *)0), ((void *)0), RED);

  initNode(&node90, 90, &node90, &node90, BLACK);



  rbtAdd(&rootPtr, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node60)), (((void *)0)), (_U_UINT)582, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(60, ((void *)0), &node100, BLACK, &node60, 583);;

  testAssertNode(100, &node70, &node120, RED, &node100, 584);;

  testAssertNode(120, ((void *)0), &node250, BLACK, &node120, 585);;

  testAssertNode(90, ((void *)0), ((void *)0), RED, &node90, 586);;

  testAssertNode(70, &node65, &node80, RED, &node70, 587);;

  testAssertNode(80, ((void *)0), &node90, BLACK, &node80, 588);;

  testAssertNode(250, ((void *)0), ((void *)0), RED, &node250, 589);;

}
