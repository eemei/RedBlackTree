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

    node20, node25, node50, node40, node60,

    node65, node70, node75, node80, node90, node100, node110,

    node120, node130, node150, node170, node250;



void setUp(void){

  initNode(&node1, 1, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node2, 2, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node3, 3, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node4, 4, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node5, 5, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node6, 6, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node7, 7, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node8, 8, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node11, 11, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node12, 12, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node14, 14, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node15, 15, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node20, 20, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node25, 25, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node40, 40, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node50, 50, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node60, 60, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node65, 65, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node70, 70, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node75, 75, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node80, 80, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node90, 90, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node100, 100, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  initNode(&node110, 110, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  initNode(&node120, 120, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  initNode(&node130, 130, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  initNode(&node150, 150, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  initNode(&node170, 170, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  initNode(&node250, 250, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

}



void tearDown(void){}

void test_left_rotation_with_node80_and_one_child(void){

  Node *root = &node80;

  initNode(&node80, 80, 

                       ((void *)0)

                           , &node150, BLACK);

  initNode(&node150, 150, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  rotateLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (

 ((void *)0)

 ), (_U_UINT)69, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node80)), (

 ((void *)0)

 ), (_U_UINT)70, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node80, 71);;

}

void test_left_rotation_with_node_one_five_zero(void){

  Node *root = &node150;

  initNode(&node150, 150, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  rotateLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (

 ((void *)0)

 ), (_U_UINT)86, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(150, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node150, 87);;

}

void test_left_rotation_with_node_sixty_and_two_children(void){

  Node *root = &node60;

  initNode(&node60, 60, &node50, &node100, BLACK);

  initNode(&node50, 50, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node100, 100, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  rotateLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (

 ((void *)0)

 ), (_U_UINT)105, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node60)), (

 ((void *)0)

 ), (_U_UINT)106, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((

 ((void *)0)

 )), (

 ((void *)0)

 ), (_U_UINT)107, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node50)), (

 ((void *)0)

 ), (_U_UINT)108, UNITY_DISPLAY_STYLE_HEX32);

}

void test_left_rotation_with_node_hundred_and_left_channel(void){

  Node *root = &node100;

  initNode(&node100, 100, &node80, &node150, BLACK);

  initNode(&node150, 150, &node120, &node170, BLACK);

  initNode(&node80, 80, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node120, 120, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  initNode(&node170, 170, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  rotateLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (

 ((void *)0)

 ), (_U_UINT)128, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node170)), (

 ((void *)0)

 ), (_U_UINT)129, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node100)), (

 ((void *)0)

 ), (_U_UINT)130, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node80)), (

 ((void *)0)

 ), (_U_UINT)131, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->right)), (_U_SINT)(_UP)((&node120)), (

 ((void *)0)

 ), (_U_UINT)132, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_nodeFive(void){

  Node *root = &node5;

  initNode(&node5, 5, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node5)), (

 ((void *)0)

 ), (_U_UINT)147, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((

 ((void *)0)

 )), (

 ((void *)0)

 ), (_U_UINT)148, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((

 ((void *)0)

 )), (

 ((void *)0)

 ), (_U_UINT)149, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_nodeTen(void){

  Node *root = &node50;

  initNode(&node50, 50, &node10, 

                                ((void *)0)

                                    , BLACK);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node10)), (

 ((void *)0)

 ), (_U_UINT)165, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((

 ((void *)0)

 )), (

 ((void *)0)

 ), (_U_UINT)166, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node50)), (

 ((void *)0)

 ), (_U_UINT)167, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_node_sixty_and_two_children(void){

  Node *root = &node60;

  initNode(&node60, 60, &node50, &node100, BLACK);

  initNode(&node50, 50, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node100, 100, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node50)), (

 ((void *)0)

 ), (_U_UINT)185, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((

 ((void *)0)

 )), (

 ((void *)0)

 ), (_U_UINT)186, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node60)), (

 ((void *)0)

 ), (_U_UINT)187, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->right)), (_U_SINT)(_UP)((&node100)), (

 ((void *)0)

 ), (_U_UINT)188, UNITY_DISPLAY_STYLE_HEX32);

}

void test_right_rotation_with_node_one_hundred_and_twenty_and_two_children(void){

  Node *root = &node120;

  initNode(&node120, 120, &node80, &node150, BLACK);

  initNode(&node80, 80, &node5, &node100, BLACK);

  initNode(&node100, 100, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  initNode(&node100, 5, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  rotateRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node80)), (

 ((void *)0)

 ), (_U_UINT)208, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node5)), (

 ((void *)0)

 ), (_U_UINT)209, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node120)), (

 ((void *)0)

 ), (_U_UINT)210, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->right)), (_U_SINT)(_UP)((&node150)), (

 ((void *)0)

 ), (_U_UINT)211, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->left)), (_U_SINT)(_UP)((&node100)), (

 ((void *)0)

 ), (_U_UINT)212, UNITY_DISPLAY_STYLE_HEX32);

}

void test_left_right_rotation_with_node_hundred_and_child_eighty(void){

  Node *root = &node120;

  initNode(&node120, 120, &node80, 

                                  ((void *)0)

                                      , BLACK);

  initNode(&node80, 80, &node60, &node100, BLACK);

  initNode(&node60, 60, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node100, 100, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  rotateLeftRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (

 ((void *)0)

 ), (_U_UINT)233, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node80)), (

 ((void *)0)

 ), (_U_UINT)234, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node120)), (

 ((void *)0)

 ), (_U_UINT)235, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node60)), (

 ((void *)0)

 ), (_U_UINT)236, UNITY_DISPLAY_STYLE_HEX32);

}

void test_left_right_rotation_with_node_one_hundred_and_fifty_and_child_twenty(void){

  Node *root = &node150;

  initNode(&node150, 150, &node20, &node250, BLACK);

  initNode(&node20, 20, &node5, &node50, BLACK);

  initNode(&node50, 50, &node25, &node100, BLACK);

  initNode(&node100, 100, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  initNode(&node25, 25, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node5, 5, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  rotateLeftRight(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node50)), (

 ((void *)0)

 ), (_U_UINT)258, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(50, &node20, &node150, BLACK, &node50, 259);;

  testAssertNode(20, &node5, &node25, BLACK, &node20, 260);;

  testAssertNode(150, &node100, &node250, BLACK, &node150, 261);;

  testAssertNode(5, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node5, 262);;

  testAssertNode(25, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node25, 263);;

  testAssertNode(100, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node100, 264);;

  testAssertNode(250, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node250, 265);;

  }

void test_right_left_rotation_simple_with_node_hundred(void){

  Node *root = &node100;

  initNode(&node100, 100, 

                         ((void *)0)

                             , &node170, BLACK);

  initNode(&node170, 170, &node120, 

                                   ((void *)0)

                                       , BLACK);;

  initNode(&node120, 120, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  rotateRightLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node120)), (

 ((void *)0)

 ), (_U_UINT)282, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(120, &node100, &node170, BLACK, &node120, 283);;

  testAssertNode(100, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node100, 284);;

  testAssertNode(170, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node170, 285);;

}

void test_right_left_rotation_with_node_hundred(void){

  Node *root = &node100;

  initNode(&node100, 100, &node70, &node150, BLACK);

  initNode(&node150, 150, &node120, &node170, BLACK);

  initNode(&node120, 120, &node80, &node130, BLACK);

  initNode(&node70, 70, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node80, 80, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node110, 130, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  initNode(&node170, 170, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);

  rotateRightLeft(&root);



  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node120)), (

 ((void *)0)

 ), (_U_UINT)309, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node70, &node80, BLACK, &node100, 310);;

  testAssertNode(150, &node130, &node170, BLACK, &node150, 311);;

  testAssertNode(70, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node70, 312);;

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node80, 313);;

  testAssertNode(130, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node130, 314);;

  testAssertNode(170, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node170, 315);;

}

void test_parent_of_addNode_is_left_child_of_Grandparent_of_addNode_and_addNode_is_left_child_of_parent(void){

  Node *root = &node100;

  Node *addNode = &node70;

  initNode(&node100, 100, &node80, &node120, BLACK);

  initNode(&node80, 80, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node120, 120, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , RED);



  insert(root, addNode);

  violationCaseOneLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (

 ((void *)0)

 ), (_U_UINT)335, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, RED, &node100, 336);;

  testAssertNode(80, &node70, 

 ((void *)0)

 , BLACK, &node80, 337);;

  testAssertNode(120, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node120, 338);;

  testAssertNode(70, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node70, 339);;

}

void test_parent_of_addNode_is_left_child_of_Grandparent_of_addNode_and_addNode_is_right_child_of_parent(void){

  Node *root = &node100;

  Node *addNode = &node80;

  initNode(&node100, 100, &node70, &node120, BLACK);

  initNode(&node70, 70, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node120, 120, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , RED);



  insert(root, addNode);

  violationCaseOneLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (

 ((void *)0)

 ), (_U_UINT)358, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node70, &node120, RED, &node100, 359);;

  testAssertNode(70, 

 ((void *)0)

 , &node80, BLACK, &node70, 360);;

  testAssertNode(120, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node120, 361);;

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node80, 362);;

}

void test_case_two_uncle_is_black_and_addNode_at_left_right_of_root(void){

  Node *root = &node120;

  Node *addNode = &node100;

  initNode(&node120, 120, &node80, &node170, BLACK);

  initNode(&node80, 80, 

                       ((void *)0)

                           ,

                            ((void *)0)

                                , RED);

  initNode(&node170, 170, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);



  insert(root, addNode);

  violationCaseTwoLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (

 ((void *)0)

 ), (_U_UINT)384, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, BLACK, &node100, 385);;

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node80, 386);;

  testAssertNode(120, 

 ((void *)0)

 , &node170, RED, &node120, 387);;

  testAssertNode(170, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node170, 388);;

}

void test_case_three_uncle_is_black_and_addNode_at_left_left_of_root(void){

  Node *root = &node120;

  Node *addNode = &node70;

  initNode(&node120, 120, &node80, &node170, BLACK);

  initNode(&node80, 80, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node170, 170, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , BLACK);



  insert(root, addNode);

  violationCaseThreeLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node80)), (

 ((void *)0)

 ), (_U_UINT)407, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(80, &node70, &node120, BLACK, &node80, 408);;

  testAssertNode(70, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node70, 409);;

  testAssertNode(120, 

 ((void *)0)

 , &node170, RED, &node120, 410);;

  testAssertNode(170, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node170, 411);;

}

void test_parent_of_addNode_is_right_child_of_Grandparent_of_addNode(void){

  Node *root = &node100;

  Node *addNode = &node150;

  initNode(&node100, 100, &node80, &node120, BLACK);

  initNode(&node80, 80, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node120, 120, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , RED);



  insert(root, addNode);

  violationCaseOneLeft(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node100)), (

 ((void *)0)

 ), (_U_UINT)431, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, RED, &node100, 432);;

  testAssertNode(120, 

 ((void *)0)

 , &node150, BLACK, &node120, 433);;

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node80, 434);;

  testAssertNode(150, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node150, 435);;

}

void test_case_two_uncle_is_black_and_addNode_at_right_left_of_root(void){

  Node *root = &node120;

  Node *addNode = &node150;

  initNode(&node120, 120, &node80, &node170, BLACK);

  initNode(&node80, 80, 

                       ((void *)0)

                           ,

                            ((void *)0)

                                , BLACK);

  initNode(&node170, 170, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , RED);



  insert(root, addNode);

  violationCaseTwoRight(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node150)), (

 ((void *)0)

 ), (_U_UINT)457, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(150, &node120, &node170, BLACK, &node150, 458);;

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node80, 459);;

  testAssertNode(120, &node80, 

 ((void *)0)

 , RED, &node120, 460);;

  testAssertNode(170, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node170, 461);;

}

void test_case_three_uncle_is_black_and_addNode_at_right_right_of_root(void){

  Node *root = &node120;

  Node *addNode = &node250;

  initNode(&node120, 120, &node80, &node170, BLACK);

  initNode(&node80, 80, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node170, 170, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , RED);



  insert(root, addNode);

  violationCaseThreeRight(&root, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root)), (_U_SINT)(_UP)((&node170)), (

 ((void *)0)

 ), (_U_UINT)481, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(170, &node120, &node250, BLACK, &node170, 482);;

  testAssertNode(250, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node250, 483);;

  testAssertNode(120, &node80, 

 ((void *)0)

 , RED, &node120, 484);;

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node80, 485);;

}

void test_pointer_attract_to_a_node_fifty_and_return_null(void){

  Node *rootPtr = 

                 ((void *)0)

                     ;

  Node *addNode = &node50;

  initNode(&node50, 50, &node70, &node80, BLACK);

  rbtAdd(&rootPtr, addNode);



  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node50)), (

 ((void *)0)

 ), (_U_UINT)501, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(50, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node50, 502);;

}















void test_add_a_node_at_right_of_root(void){

  Node *rootPtr = &node80;

  Node *addNode = &node120;

  initNode(&node80, 80, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node120, 120, &node50, &node250, BLACK);

  rbtAdd(&rootPtr, addNode);



  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node80)), (

 ((void *)0)

 ), (_U_UINT)518, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(80, 

 ((void *)0)

 , &node120, BLACK, &node80, 519);;

  testAssertNode(120, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node120, 520);;

}

void test_add_a_node_at_right_of_right_of_root_and_case_three(void){

  Node *rootPtr = &node50;

  Node *addNode = &node120;

  initNode(&node50, 50, 

                       ((void *)0)

                           , &node80, BLACK);

  initNode(&node80, 80, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node120, 120, &node90, &node250, BLACK);

  rbtAdd(&rootPtr, addNode);



  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node80)), (

 ((void *)0)

 ), (_U_UINT)538, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(50, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node50, 539);;

  testAssertNode(80, &node50, &node120, BLACK, &node80, 540);;

  testAssertNode(120, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node120, 541);;

}

void test_add_a_node_and_recolour(void){

  Node *rootPtr = &node60;

  Node *addNode = &node80;



  initNode(&node60, 60, 

                       ((void *)0)

                           , &node100, BLACK);

  initNode(&node100, 100, &node70, &node120, BLACK);

  initNode(&node70, 70, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node120, 120, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , RED);

  initNode(&node80, 80, &node250, &node250, BLACK);



  rbtAdd(&rootPtr, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node60)), (

 ((void *)0)

 ), (_U_UINT)566, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(60, 

 ((void *)0)

 , &node100, BLACK, &node60, 567);;

  testAssertNode(100, &node70, &node120, RED, &node100, 568);;

  testAssertNode(120, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node120, 569);;

  testAssertNode(70, 

 ((void *)0)

 , &node80, BLACK, &node70, 570);;

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node80, 571);;

}

void test_add_a_node_and_recolour_at_rightChild_of_rightNode_and_recolour(void){

  Node *rootPtr = &node100;

  Node *addNode = &node60;



  initNode(&node100, 100, &node80, &node120, RED);

  initNode(&node80, 80, 

                       ((void *)0)

                           , &node90, RED);

  initNode(&node90, 90, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node120, 120, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , RED);

  initNode(&node60, 60, &node250, &node50, BLACK);



  rbtAdd(&rootPtr, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node100)), (

 ((void *)0)

 ), (_U_UINT)595, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, BLACK, &node100, 596);;

  testAssertNode(80, &node60, &node90, BLACK, &node80, 597);;

  testAssertNode(120, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node120, 598);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node60, 599);;

  testAssertNode(90, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node90, 600);;

}

void test_rbtAdd_case_two_left_right_rotation(void){

  Node *rootPtr = &node150;

  Node *addNode = &node5;



  initNode(&node150, 150, &node20, 

                                  ((void *)0)

                                      , BLACK);

  initNode(&node20, 20, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node5, 5, &node250, 

                               ((void *)0)

                                   , BLACK);

  rbtAdd(&rootPtr, addNode);



  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node20)), (

 ((void *)0)

 ), (_U_UINT)622, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, &node5, &node150, BLACK, &node20, 623);;

  testAssertNode(5, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node5, 624);;

  testAssertNode(150, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node150, 625);;

}

void test_rbtAdd_with_case_two_and_case_three(void){

  Node *rootPtr = &node11;

  Node *addNode = &node7;



  initNode(&node11, 11, &node2, &node14, BLACK);

  initNode(&node2, 2, &node1, &node7, RED);

  initNode(&node1, 1, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node14, 14, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node7, 7, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);



  rbtAdd(&rootPtr, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node7)), (

 ((void *)0)

 ), (_U_UINT)654, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(7, &node2, &node11, BLACK, &node7, 655);;

  testAssertNode(2, &node1, 

 ((void *)0)

 , RED, &node2, 656);;

  testAssertNode(1, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node1, 657);;

  testAssertNode(11, 

 ((void *)0)

 , &node14, RED, &node11, 658);;

  testAssertNode(14, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node14, 659);;

}

void test_rbtAdd_with_case_three_at_right_side(void){

  Node *rootPtr = &node2;

  Node *addNode = &node10;



  initNode(&node2, 2, &node1, &node4, BLACK);

  initNode(&node4, 4, 

                     ((void *)0)

                         , &node5, BLACK);

  initNode(&node1, 1, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node5, 5, 

                     ((void *)0)

                         , &node10, RED);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);



  rbtAdd(&rootPtr, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (

 ((void *)0)

 ), (_U_UINT)685, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node5, BLACK, &node2, 686);;

  testAssertNode(1, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node1, 687);;

  testAssertNode(5, &node4, &node10, BLACK, &node5, 688);;

  testAssertNode(4, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node4, 689);;

  testAssertNode(10, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node10, 690);;

}

void test_rbtAdd_with_case_one_at_left_side(void){

  Node *rootPtr = &node2;

  Node *addNode = &node3;



  initNode(&node2, 2, &node1, &node5, BLACK);

  initNode(&node4, 4, &node3, 

                             ((void *)0)

                                 , RED);

  initNode(&node1, 1, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node5, 5, &node4, &node10, BLACK);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node3, 3, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);



  rbtAdd(&rootPtr, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (

 ((void *)0)

 ), (_U_UINT)717, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node5, BLACK, &node2, 718);;

  testAssertNode(1, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node1, 719);;

  testAssertNode(5, &node4, &node10, RED, &node5, 720);;

  testAssertNode(4, &node3, 

 ((void *)0)

 , BLACK, &node4, 721);;

  testAssertNode(10, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node10, 722);;

  testAssertNode(3, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node3, 723);;

}

void test_rbtAdd_with_case_one_and_case_2_with_Add_node_seven(void){

  Node *rootPtr = &node2;

  Node *addNode = &node7;



  initNode(&node2, 2, &node1, &node5, BLACK);

  initNode(&node4, 4, &node3, 

                             ((void *)0)

                                 , BLACK);

  initNode(&node1, 1, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node5, 5, &node4, &node10, RED);

  initNode(&node10, 10, &node6, 

                               ((void *)0)

                                   , BLACK);

  initNode(&node6, 6, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , RED);

  initNode(&node3, 3, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , RED);

  initNode(&node7, 7, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);



  rbtAdd(&rootPtr, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (

 ((void *)0)

 ), (_U_UINT)753, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node5, BLACK, &node2, 754);;

  testAssertNode(1, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node1, 755);;

  testAssertNode(5, &node4, &node7, RED, &node5, 756);;

  testAssertNode(4, &node3, 

 ((void *)0)

 , BLACK, &node4, 757);;

  testAssertNode(10, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node10, 758);;

  testAssertNode(3, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node3, 759);;

  testAssertNode(7, &node6, &node10, RED, &node7, 760);;

  testAssertNode(6, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node6, 761);;

}

void recolour_twice(void){

  Node *rootPtr = &node20;

  Node *addNode = &node60;



  initNode(&node20, 20, &node12, &node25, BLACK);

  initNode(&node12, 12, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node25, 25, 

                       ((void *)0)

                           , &node50, RED);

  initNode(&node50, 50, &node40, &node70, BLACK);

  initNode(&node40, 40, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node70, 70, &node60, 

                                ((void *)0)

                                    , RED);

  initNode(&node60, 60, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);



  rbtAdd(&rootPtr, addNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (

 ((void *)0)

 ), (_U_UINT)789, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, &node12, &node25, RED, &node20, 790);;

  testAssertNode(25, 

 ((void *)0)

 , &node50, BLACK, &node25, 791);;

  testAssertNode(12, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node12, 792);;

  testAssertNode(50, &node40, &node70, RED, &node50, 793);;

  testAssertNode(40, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node40, 794);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node60, 795);;

  testAssertNode(70, &node60, 

 ((void *)0)

 , BLACK, &node70, 796);;

}

void test_fuction_caseOneParentRedBlack_when_parent_red(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node10;

  initNode(&node20, 20, &node10, &node40, RED);

  initNode(&node40, 40, 

                       ((void *)0)

                           , &node60, BLACK);

  initNode(&node60, 60, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseOneALeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (

 ((void *)0)

 ), (_U_UINT)819, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, RED, &node40, 820);;

  testAssertNode(20, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node20, 821);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 822);;



}

void test_fuction_caseOneParentRedBlack_when_parent_Black(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node10;

  initNode(&node20, 20, &node10, &node40, BLACK);

  initNode(&node40, 40, 

                       ((void *)0)

                           , &node60, BLACK);

  initNode(&node60, 60, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseOneALeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (

 ((void *)0)

 ), (_U_UINT)846, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, BLACK, &node40, 847);;

  testAssertNode(20, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node20, 848);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 849);;



}

void test_fuction_caseOneParentRedBlack_the_sibling_of_child_at_left_when_parent_red(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node10;

  initNode(&node20, 20, &node10, &node60, RED);

  initNode(&node60, 60, &node40, 

                                ((void *)0)

                                    , BLACK);

  initNode(&node40, 40, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseOneBLeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (

 ((void *)0)

 ), (_U_UINT)874, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, RED, &node40, 875);;

  testAssertNode(20, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node20, 876);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 877);;



}

void test_fuction_caseOneParentRedBlack_the_sibling_at_left_and_parent_is_black_colour(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node10;

  initNode(&node20, 20, &node10, &node60, BLACK);

  initNode(&node60, 60, &node40, 

                                ((void *)0)

                                    , BLACK);

  initNode(&node40, 40, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseOneBLeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (

 ((void *)0)

 ), (_U_UINT)901, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, BLACK, &node40, 902);;

  testAssertNode(20, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node20, 903);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 904);;



}

void test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_black(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node10;

  initNode(&node20, 20, &node10, &node40, BLACK);

  initNode(&node40, 40, &node25, &node60, BLACK);

  initNode(&node60, 60, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node25, 25, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseTwoALeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node20)), (

 ((void *)0)

 ), (_U_UINT)929, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, 

 ((void *)0)

 , &node40, DOUBLE_BLACK, &node20, 930);;

  testAssertNode(40, &node25, &node60, RED, &node40, 931);;

  testAssertNode(25, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node25, 932);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 933);;



}

void test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_NULL(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node10;

  initNode(&node20, 20, &node10, &node40, BLACK);

  initNode(&node40, 40, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseTwoALeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node20)), (

 ((void *)0)

 ), (_U_UINT)954, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, 

 ((void *)0)

 , &node40, DOUBLE_BLACK, &node20, 955);;

  testAssertNode(40, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node40, 956);;



}

void test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_black(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node10;

  initNode(&node20, 20, &node10, &node40, RED);

  initNode(&node40, 40, &node25, &node60, BLACK);

  initNode(&node60, 60, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node25, 25, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseTwoBLeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node20)), (

 ((void *)0)

 ), (_U_UINT)981, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, 

 ((void *)0)

 , &node40, BLACK, &node20, 982);;

  testAssertNode(40, &node25, &node60, RED, &node40, 983);;

  testAssertNode(25, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node25, 984);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 985);;



}

void test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_NULL(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node10;

  initNode(&node20, 20, &node10, &node40, RED);

  initNode(&node40, 40, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseTwoBLeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node20)), (

 ((void *)0)

 ), (_U_UINT)1006, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, 

 ((void *)0)

 , &node40, BLACK, &node20, 1007);;

  testAssertNode(40, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node40, 1008);;



}

void test_fuction_caseThree_the_sibling_is_red_and_left_child_of_parent(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node10;

  initNode(&node20, 20, &node10, &node40, BLACK);

  initNode(&node40, 40, &node25, &node60, RED);

  initNode(&node60, 60, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node25, 25, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseThreeLeft(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (

 ((void *)0)

 ), (_U_UINT)1033, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, BLACK, &node40, 1034);;

  testAssertNode(20, 

 ((void *)0)

 , &node25, BLACK, &node20, 1035);;

  testAssertNode(25, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node25, 1036);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 1037);;



}

void test_fuction_caseOne_thesibling_at_left_child_of_parent_and_parent_is_red(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node10;

  initNode(&node60, 60, &node40, &node10, RED);

  initNode(&node40, 40, &node20, 

                                ((void *)0)

                                    , BLACK);

  initNode(&node20, 20, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseOneARight(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (

 ((void *)0)

 ), (_U_UINT)1063, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, RED, &node40, 1064);;

  testAssertNode(20, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node20, 1065);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 1066);;



}















void xtest_delete_one_node_and_that_is_the_root(void){

  Node *rootPtr = &node100;

  Node *delete = &node100;

  initNode(&node100, 100, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , RED);





  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((

 ((void *)0)

 )), (

 ((void *)0)

 ), (_U_UINT)1082, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(0, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, 

 ((void *)0)

 , 1083);;

}
