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

Node node1, node2, node3, node4, node5, node6, node7, node8, node9, node10, node11, node12, node14, node15,

    node20, node25, node30, node40, node45, node50, node55, node60,

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

  initNode(&node9, 9, 

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

  initNode(&node30, 30, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node40, 40, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node45, 45, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node50, 50, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node55, 55, 

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

 ), (_U_UINT)73, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node80)), (

 ((void *)0)

 ), (_U_UINT)74, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node80, 75);;

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

 ), (_U_UINT)90, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(150, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node150, 91);;

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

 ), (_U_UINT)109, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node60)), (

 ((void *)0)

 ), (_U_UINT)110, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((

 ((void *)0)

 )), (

 ((void *)0)

 ), (_U_UINT)111, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node50)), (

 ((void *)0)

 ), (_U_UINT)112, UNITY_DISPLAY_STYLE_HEX32);

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

 ), (_U_UINT)132, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node170)), (

 ((void *)0)

 ), (_U_UINT)133, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node100)), (

 ((void *)0)

 ), (_U_UINT)134, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node80)), (

 ((void *)0)

 ), (_U_UINT)135, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->right)), (_U_SINT)(_UP)((&node120)), (

 ((void *)0)

 ), (_U_UINT)136, UNITY_DISPLAY_STYLE_HEX32);

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

 ), (_U_UINT)151, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((

 ((void *)0)

 )), (

 ((void *)0)

 ), (_U_UINT)152, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((

 ((void *)0)

 )), (

 ((void *)0)

 ), (_U_UINT)153, UNITY_DISPLAY_STYLE_HEX32);

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

 ), (_U_UINT)169, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((

 ((void *)0)

 )), (

 ((void *)0)

 ), (_U_UINT)170, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node50)), (

 ((void *)0)

 ), (_U_UINT)171, UNITY_DISPLAY_STYLE_HEX32);

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

 ), (_U_UINT)189, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((

 ((void *)0)

 )), (

 ((void *)0)

 ), (_U_UINT)190, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node60)), (

 ((void *)0)

 ), (_U_UINT)191, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->right)), (_U_SINT)(_UP)((&node100)), (

 ((void *)0)

 ), (_U_UINT)192, UNITY_DISPLAY_STYLE_HEX32);

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

 ), (_U_UINT)212, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node5)), (

 ((void *)0)

 ), (_U_UINT)213, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node120)), (

 ((void *)0)

 ), (_U_UINT)214, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->right)), (_U_SINT)(_UP)((&node150)), (

 ((void *)0)

 ), (_U_UINT)215, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right->left)), (_U_SINT)(_UP)((&node100)), (

 ((void *)0)

 ), (_U_UINT)216, UNITY_DISPLAY_STYLE_HEX32);

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

 ), (_U_UINT)237, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left)), (_U_SINT)(_UP)((&node80)), (

 ((void *)0)

 ), (_U_UINT)238, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->right)), (_U_SINT)(_UP)((&node120)), (

 ((void *)0)

 ), (_U_UINT)239, UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((_U_SINT)(_UP)((root->left->left)), (_U_SINT)(_UP)((&node60)), (

 ((void *)0)

 ), (_U_UINT)240, UNITY_DISPLAY_STYLE_HEX32);

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

 ), (_U_UINT)262, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(50, &node20, &node150, BLACK, &node50, 263);;

  testAssertNode(20, &node5, &node25, BLACK, &node20, 264);;

  testAssertNode(150, &node100, &node250, BLACK, &node150, 265);;

  testAssertNode(5, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node5, 266);;

  testAssertNode(25, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node25, 267);;

  testAssertNode(100, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node100, 268);;

  testAssertNode(250, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node250, 269);;

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

 ), (_U_UINT)286, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(120, &node100, &node170, BLACK, &node120, 287);;

  testAssertNode(100, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node100, 288);;

  testAssertNode(170, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node170, 289);;

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

 ), (_U_UINT)313, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node70, &node80, BLACK, &node100, 314);;

  testAssertNode(150, &node130, &node170, BLACK, &node150, 315);;

  testAssertNode(70, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node70, 316);;

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node80, 317);;

  testAssertNode(130, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node130, 318);;

  testAssertNode(170, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node170, 319);;

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

 ), (_U_UINT)339, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, RED, &node100, 340);;

  testAssertNode(80, &node70, 

 ((void *)0)

 , BLACK, &node80, 341);;

  testAssertNode(120, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node120, 342);;

  testAssertNode(70, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node70, 343);;

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

 ), (_U_UINT)362, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node70, &node120, RED, &node100, 363);;

  testAssertNode(70, 

 ((void *)0)

 , &node80, BLACK, &node70, 364);;

  testAssertNode(120, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node120, 365);;

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node80, 366);;

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

 ), (_U_UINT)388, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, BLACK, &node100, 389);;

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node80, 390);;

  testAssertNode(120, 

 ((void *)0)

 , &node170, RED, &node120, 391);;

  testAssertNode(170, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node170, 392);;

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

 ), (_U_UINT)411, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(80, &node70, &node120, BLACK, &node80, 412);;

  testAssertNode(70, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node70, 413);;

  testAssertNode(120, 

 ((void *)0)

 , &node170, RED, &node120, 414);;

  testAssertNode(170, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node170, 415);;

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

 ), (_U_UINT)435, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, RED, &node100, 436);;

  testAssertNode(120, 

 ((void *)0)

 , &node150, BLACK, &node120, 437);;

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node80, 438);;

  testAssertNode(150, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node150, 439);;

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

 ), (_U_UINT)461, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(150, &node120, &node170, BLACK, &node150, 462);;

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node80, 463);;

  testAssertNode(120, &node80, 

 ((void *)0)

 , RED, &node120, 464);;

  testAssertNode(170, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node170, 465);;

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

 ), (_U_UINT)485, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(170, &node120, &node250, BLACK, &node170, 486);;

  testAssertNode(250, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node250, 487);;

  testAssertNode(120, &node80, 

 ((void *)0)

 , RED, &node120, 488);;

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node80, 489);;

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

 ), (_U_UINT)505, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(50, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node50, 506);;

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

 ), (_U_UINT)522, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(80, 

 ((void *)0)

 , &node120, BLACK, &node80, 523);;

  testAssertNode(120, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node120, 524);;

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

 ), (_U_UINT)542, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(50, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node50, 543);;

  testAssertNode(80, &node50, &node120, BLACK, &node80, 544);;

  testAssertNode(120, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node120, 545);;

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

 ), (_U_UINT)570, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(60, 

 ((void *)0)

 , &node100, BLACK, &node60, 571);;

  testAssertNode(100, &node70, &node120, RED, &node100, 572);;

  testAssertNode(120, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node120, 573);;

  testAssertNode(70, 

 ((void *)0)

 , &node80, BLACK, &node70, 574);;

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node80, 575);;

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

 ), (_U_UINT)599, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(100, &node80, &node120, BLACK, &node100, 600);;

  testAssertNode(80, &node60, &node90, BLACK, &node80, 601);;

  testAssertNode(120, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node120, 602);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node60, 603);;

  testAssertNode(90, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node90, 604);;

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

 ), (_U_UINT)626, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, &node5, &node150, BLACK, &node20, 627);;

  testAssertNode(5, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node5, 628);;

  testAssertNode(150, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node150, 629);;

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

 ), (_U_UINT)658, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(7, &node2, &node11, BLACK, &node7, 659);;

  testAssertNode(2, &node1, 

 ((void *)0)

 , RED, &node2, 660);;

  testAssertNode(1, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node1, 661);;

  testAssertNode(11, 

 ((void *)0)

 , &node14, RED, &node11, 662);;

  testAssertNode(14, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node14, 663);;

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

 ), (_U_UINT)689, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node5, BLACK, &node2, 690);;

  testAssertNode(1, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node1, 691);;

  testAssertNode(5, &node4, &node10, BLACK, &node5, 692);;

  testAssertNode(4, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node4, 693);;

  testAssertNode(10, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node10, 694);;

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

 ), (_U_UINT)721, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node5, BLACK, &node2, 722);;

  testAssertNode(1, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node1, 723);;

  testAssertNode(5, &node4, &node10, RED, &node5, 724);;

  testAssertNode(4, &node3, 

 ((void *)0)

 , BLACK, &node4, 725);;

  testAssertNode(10, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node10, 726);;

  testAssertNode(3, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node3, 727);;

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

 ), (_U_UINT)757, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node5, BLACK, &node2, 758);;

  testAssertNode(1, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node1, 759);;

  testAssertNode(5, &node4, &node7, RED, &node5, 760);;

  testAssertNode(4, &node3, 

 ((void *)0)

 , BLACK, &node4, 761);;

  testAssertNode(10, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node10, 762);;

  testAssertNode(3, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node3, 763);;

  testAssertNode(7, &node6, &node10, RED, &node7, 764);;

  testAssertNode(6, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node6, 765);;

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

 ), (_U_UINT)793, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, &node12, &node25, RED, &node20, 794);;

  testAssertNode(25, 

 ((void *)0)

 , &node50, BLACK, &node25, 795);;

  testAssertNode(12, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node12, 796);;

  testAssertNode(50, &node40, &node70, RED, &node50, 797);;

  testAssertNode(40, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node40, 798);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node60, 799);;

  testAssertNode(70, &node60, 

 ((void *)0)

 , BLACK, &node70, 800);;

}

void test_fuction_caseOneParentRedBlack_when_parent_red(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node100;

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

 ), (_U_UINT)823, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, RED, &node40, 824);;

  testAssertNode(20, &node10, 

 ((void *)0)

 , BLACK, &node20, 825);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 826);;

  testAssertNode(10, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node10, 827);;

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

 ), (_U_UINT)850, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, BLACK, &node40, 851);;

  testAssertNode(20, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node20, 852);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 853);;



}

void test_fuction_caseOneParentRedBlack_the_sibling_of_child_at_left_when_parent_red(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node100;

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

 ), (_U_UINT)878, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, RED, &node40, 879);;

  testAssertNode(20, &node10, 

 ((void *)0)

 , BLACK, &node20, 880);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 881);;

  testAssertNode(10, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node10, 882);;

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

 ), (_U_UINT)905, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, BLACK, &node40, 906);;

  testAssertNode(20, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node20, 907);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 908);;



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

 ), (_U_UINT)933, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, 

 ((void *)0)

 , &node40, DOUBLE_BLACK, &node20, 934);;

  testAssertNode(40, &node25, &node60, RED, &node40, 935);;

  testAssertNode(25, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node25, 936);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 937);;



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

 ), (_U_UINT)958, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, 

 ((void *)0)

 , &node40, DOUBLE_BLACK, &node20, 959);;

  testAssertNode(40, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node40, 960);;



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

 ), (_U_UINT)985, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, 

 ((void *)0)

 , &node40, BLACK, &node20, 986);;

  testAssertNode(40, &node25, &node60, RED, &node40, 987);;

  testAssertNode(25, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node25, 988);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 989);;



}

void test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_NULL_and_the_deleteNode_not_inside_the_tree(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node50;

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

 ), (_U_UINT)1010, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(20, &node10, &node40, BLACK, &node20, 1011);;

  testAssertNode(40, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node40, 1012);;

  testAssertNode(10, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node10, 1013);;

}

void test_fuction_caseThree_the_sibling_is_red_and_right_child_of_parent(void){

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

 ), (_U_UINT)1037, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, BLACK, &node40, 1038);;

  testAssertNode(20, 

 ((void *)0)

 , &node25, BLACK, &node20, 1039);;

  testAssertNode(25, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node25, 1040);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 1041);;



}

void test_fuction_caseThree_the_sibling_is_red_and_right_child_of_parent_the_delete_node_is_not_inside_the_tree(void){

  Node *rootPtr = &node20;

  Node *deleteNode = &node100;

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

 ), (_U_UINT)1066, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, BLACK, &node40, 1067);;

  testAssertNode(20, &node10, &node25, BLACK, &node20, 1068);;

  testAssertNode(25, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node25, 1069);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 1070);;

  testAssertNode(10, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node10, 1071);;

}

void test_fuction_caseOne_thesibling_at_left_child_of_parent_and_parent_is_red(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node70;

  initNode(&node60, 60, &node40, &node70, RED);

  initNode(&node40, 40, &node20, 

                                ((void *)0)

                                    , BLACK);

  initNode(&node20, 20, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node70, 70, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseOneARight(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (

 ((void *)0)

 ), (_U_UINT)1096, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, RED, &node40, 1097);;

  testAssertNode(20, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node20, 1098);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 1099);;



}

void test_fuction_caseOne_the_sibling_at_left_child_of_parent_and_parent_is_Black_deleteNode_not_inside_tree(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node100;

  initNode(&node60, 60, &node40, &node70, BLACK);

  initNode(&node40, 40, &node20, 

                                ((void *)0)

                                    , BLACK);

  initNode(&node20, 20, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node70, 70, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseOneARight(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (

 ((void *)0)

 ), (_U_UINT)1125, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, BLACK, &node40, 1126);;

  testAssertNode(20, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node20, 1127);;

  testAssertNode(60, 

 ((void *)0)

 , &node70, BLACK, &node60, 1128);;

  testAssertNode(70, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node70, 1129);;

}

void test_fuction_caseOne_the_sibling_at_left_child_of_parent_and_parent_is_red(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node70;

  initNode(&node60, 60, &node20, &node70, RED);

  initNode(&node20, 20, 

                       ((void *)0)

                           , &node40, BLACK);

  initNode(&node40, 40, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node70, 70, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseOneBRight(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (

 ((void *)0)

 ), (_U_UINT)1153, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, RED, &node40, 1154);;

  testAssertNode(20, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node20, 1155);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 1156);;



}

void test_fuction_caseOne_the_sibling_at_left_child_of_parent_and_parent_is_black_deleteNode_not_inside_tree(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node100;

  initNode(&node60, 60, &node20, &node70, BLACK);

  initNode(&node20, 20, 

                       ((void *)0)

                           , &node40, BLACK);

  initNode(&node40, 40, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node70, 70, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseOneBRight(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node40)), (

 ((void *)0)

 ), (_U_UINT)1181, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(40, &node20, &node60, BLACK, &node40, 1182);;

  testAssertNode(20, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node20, 1183);;

  testAssertNode(60, 

 ((void *)0)

 , &node70, BLACK, &node60, 1184);;

  testAssertNode(70, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node70, 1185);;

}

void test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_black_the_sibling_at_left_side(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node70;

  initNode(&node60, 60, &node25, &node70, BLACK);

  initNode(&node25, 25, &node20, &node40, BLACK);

  initNode(&node20, 20, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node40, 40, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node70, 70, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseTwoARight(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node60)), (

 ((void *)0)

 ), (_U_UINT)1210, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(60, &node25, 

 ((void *)0)

 , DOUBLE_BLACK, &node60, 1211);;

  testAssertNode(25, &node20, &node40, RED, &node25, 1212);;

  testAssertNode(20, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node20, 1213);;

  testAssertNode(40, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node40, 1214);;



}

void test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_NULL_the_sibling_at_left_side(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node70;

  initNode(&node60, 60, &node25, &node70, BLACK);

  initNode(&node25, 25, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node70, 70, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseTwoARight(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node60)), (

 ((void *)0)

 ), (_U_UINT)1235, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(60, &node25, 

 ((void *)0)

 , DOUBLE_BLACK, &node60, 1236);;

  testAssertNode(25, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node25, 1237);;



}

void test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_black_the_sibling_at_left_side(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node70;

  initNode(&node60, 60, &node25, &node70, RED);

  initNode(&node25, 25, &node20, &node40, BLACK);

  initNode(&node20, 20, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node40, 40, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node70, 70, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseTwoBRight(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node60)), (

 ((void *)0)

 ), (_U_UINT)1263, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(60, &node25, 

 ((void *)0)

 , BLACK, &node60, 1264);;

  testAssertNode(25, &node20, &node40, RED, &node25, 1265);;

  testAssertNode(20, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node20, 1266);;

  testAssertNode(40, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node40, 1267);;



}

void test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_NULL_the_sibling_at_left_side(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node70;

  initNode(&node60, 60, &node25, &node70, RED);

  initNode(&node25, 25, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node70, 70, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseTwoBRight(&rootPtr, deleteNode);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node60)), (

 ((void *)0)

 ), (_U_UINT)1288, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(60, &node25, 

 ((void *)0)

 , BLACK, &node60, 1289);;

  testAssertNode(25, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node25, 1290);;



}

void test_fuction_caseThree_the_sibling_is_red_and_left_child_of_parent(void){

  Node *rootPtr = &node60;

  Node *deleteNode = &node70;

  initNode(&node60, 60, &node25, &node70, BLACK);

  initNode(&node25, 25, &node20, &node40, RED);

  initNode(&node20, 20, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node40, 40, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node70, 70, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , DOUBLE_BLACK);



  caseThreeRight(&rootPtr, deleteNode);



  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node25)), (

 ((void *)0)

 ), (_U_UINT)1317, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(25, &node20, &node60, BLACK, &node25, 1318);;

  testAssertNode(20, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node20, 1319);;

  testAssertNode(60, &node40, 

 ((void *)0)

 , BLACK, &node60, 1320);;

  testAssertNode(40, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node40, 1321);;



}



void test_rbtRemoveInt_function_given_a_delete_node_then_return_node_and_colour(void){

  Node *deleteNode = &node5;

  ReturnedObject ro;

  ro = rbtRemoveInt(deleteNode);



  UnityAssertEqualNumber((_U_SINT)((ro.removedNode)), (_U_SINT)((deleteNode)), (

 ((void *)0)

 ), (_U_UINT)1330, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((ro.returnedColour)), (_U_SINT)((DOUBLE_BLACK)), (

 ((void *)0)

 ), (_U_UINT)1331, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((ro.removedNode->colour)), (_U_SINT)((DOUBLE_BLACK)), (

 ((void *)0)

 ), (_U_UINT)1332, UNITY_DISPLAY_STYLE_INT);

}

void test_delete_one_node_and_that_is_the_root(void){

  Node *rootPtr = &node100;

  Node *delete = &node100;

  initNode(&node100, 100, 

                         ((void *)0)

                             , 

                               ((void *)0)

                                   , RED);



  deleteRBTNode(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((

 ((void *)0)

 )), (

 ((void *)0)

 ), (_U_UINT)1348, UNITY_DISPLAY_STYLE_HEX32);

}

void test_delete_one_node_and_that_is_the_twenty_node_at_left_most_and_performed_rotation_left(void){

  Node *rootPtr = &node25;

  Node *delete = &node20;

  initNode(&node25, 25, &node20, &node60, RED);

  initNode(&node20, 20, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node60, 60, 

                       ((void *)0)

                           , &node70, BLACK);

  initNode(&node70, 70, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);





  deleteRBTNode(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node60)), (

 ((void *)0)

 ), (_U_UINT)1370, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(60, &node25, &node70, BLACK, &node60, 1371);;

  testAssertNode(25, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node25, 1372);;

}

void test_delete_node_twenty_and_performed_left_rotation_the_headNode_is_red(void){

  Node *rootPtr = &node25;

  Node *delete = &node20;

  initNode(&node25, 25, &node20, &node60, RED);

  initNode(&node20, 20, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node60, 60, 

                       ((void *)0)

                           , &node70, BLACK);

  initNode(&node70, 70, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);





  deleteRBTNode(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node60)), (

 ((void *)0)

 ), (_U_UINT)1394, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(60, &node25, &node70, BLACK, &node60, 1395);;

  testAssertNode(25, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node25, 1396);;

}

void test_delete_node_six_and_performed_caseThree_and_involved_case_two(void){

  Node *rootPtr = &node2;

  Node *delete = &node4;

  initNode(&node2, 2, &node1, &node5, BLACK);

  initNode(&node5, 5, &node4, &node7, BLACK);

  initNode(&node1, 1, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node4, 4, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node6, 6, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node7, 7, &node6, &node10, RED);



  deleteRBTNode(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (

 ((void *)0)

 ), (_U_UINT)1422, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node7, BLACK, &node2, 1423);;

  testAssertNode(7, &node5, &node10, BLACK, &node7, 1424);;

  testAssertNode(5, 

 ((void *)0)

 , &node6, BLACK, &node5, 1425);;

  testAssertNode(1, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node1, 1426);;

  testAssertNode(10, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node10, 1427);;

  testAssertNode(6, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node6, 1428);;

}

void test_delete_node_six_and_performed_caseBTwo(void){

  Node *rootPtr = &node2;

  Node *delete = &node4;

  initNode(&node2, 2, &node1, &node5, BLACK);

  initNode(&node5, 5, &node4, &node7, RED);

  initNode(&node1, 1, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node4, 4, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node6, 6, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node7, 7, &node6, &node10, BLACK);



  deleteRBTNode(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (

 ((void *)0)

 ), (_U_UINT)1455, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node5, BLACK, &node2, 1456);;

  testAssertNode(5, 

 ((void *)0)

 , &node7, BLACK, &node5, 1457);;

  testAssertNode(7, &node6, &node10, RED, &node7, 1458);;

  testAssertNode(1, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node1, 1459);;

  testAssertNode(6, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node6, 1460);;

  testAssertNode(10, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node10, 1461);;

}

void test_delete_a_node_and_performed_caseATwo(void){

  Node *rootPtr = &node2;

  Node *delete = &node4;

  initNode(&node2, 2, &node1, &node5, BLACK);

  initNode(&node5, 5, &node4, &node7, BLACK);

  initNode(&node1, 1, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node4, 4, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node6, 6, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node7, 7, &node6, &node10, BLACK);



  deleteRBTNode(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (

 ((void *)0)

 ), (_U_UINT)1488, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node5, BLACK, &node2, 1489);;

  testAssertNode(5, 

 ((void *)0)

 , &node7, BLACK, &node5, 1490);;

  testAssertNode(7, &node6, &node10, RED, &node7, 1491);;

  testAssertNode(1, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node1, 1492);;

  testAssertNode(6, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node6, 1493);;

  testAssertNode(10, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node10, 1494);;

}

void test_delete_a_node_and_performed_rotate_right_is_caseOneA(void){

  Node *rootPtr = &node90;

  Node *delete = &node70;

  initNode(&node90, 90, &node60, &node100, BLACK);

  initNode(&node60, 60, &node50, &node70, RED);

  initNode(&node100, 100, &node80, &node120, RED);

  initNode(&node50, 50, &node40, 

                                ((void *)0)

                                    , BLACK);

  initNode(&node40, 40, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

  initNode(&node70, 70, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

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



  deleteRBTNode(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node90)), (

 ((void *)0)

 ), (_U_UINT)1519, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(90, &node50, &node100, BLACK, &node90, 1520);;

  testAssertNode(50, &node40, &node60, RED, &node50, 1521);;

  testAssertNode(100, &node80, &node120, RED, &node100, 1522);;

  testAssertNode(40, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node40, 1523);;

  testAssertNode(60, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node60, 1524);;

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node80, 1525);;

  testAssertNode(120, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node120, 1526);;

}

void test_delete_a_node_and_performed_caseThreeRight(void){

  Node *rootPtr = &node90;

  Node *delete = &node70;

  initNode(&node90, 90, &node60, &node100, BLACK);

  initNode(&node60, 60, &node50, &node70, BLACK);

  initNode(&node100, 100, &node80, &node120, RED);

  initNode(&node50, 50, &node40, &node55, RED);

  initNode(&node40, 40, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node70, 70, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , RED);

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

  initNode(&node55, 55, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);



  deleteRBTNode(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node90)), (

 ((void *)0)

 ), (_U_UINT)1553, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(90, &node50, &node100, BLACK, &node90, 1554);;

  testAssertNode(50, &node40, &node60, BLACK, &node50, 1555);;

  testAssertNode(100, &node80, &node120, RED, &node100, 1556);;

  testAssertNode(40, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node40, 1557);;

  testAssertNode(60, &node55, 

 ((void *)0)

 , BLACK, &node60, 1558);;

  testAssertNode(80, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node80, 1559);;

  testAssertNode(120, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node120, 1560);;

  testAssertNode(55, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node55, 1561);;

}

void test_function_findReplacer_caseTwo(void){

  Node *rootPtr = &node2;

  Node *delete = &node7;

  initNode(&node2, 2, &node1, &node5, BLACK);

  initNode(&node5, 5, 

                     ((void *)0)

                         , &node7, RED);

  initNode(&node7, 7, &node6, &node10, RED);

  initNode(&node1, 1, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node6, 6, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node10, 10, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);



  Replacement(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (

 ((void *)0)

 ), (_U_UINT)1587, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node5, BLACK, &node2, 1588);;

  testAssertNode(5, 

 ((void *)0)

 , &node10, RED, &node5, 1589);;

  testAssertNode(10, &node6, &node7, BLACK, &node10, 1590);;

  testAssertNode(7, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node7, 1591);;

  testAssertNode(6, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node6, 1592);;

}

void test_function_findReplacer_caseone(void){

  Node *rootPtr = &node2;

  Node *delete = &node7;

  initNode(&node2, 2, &node1, &node5, BLACK);

  initNode(&node5, 5, 

                     ((void *)0)

                         , &node7, BLACK);

  initNode(&node7, 7, &node6, 

                             ((void *)0)

                                 , RED);

  initNode(&node1, 1, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node6, 6, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);



  Replacement(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (

 ((void *)0)

 ), (_U_UINT)1617, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node5, BLACK, &node2, 1618);;

  testAssertNode(5, 

 ((void *)0)

 , &node6, BLACK, &node5, 1619);;

  testAssertNode(6, &node7, 

 ((void *)0)

 , BLACK, &node6, 1620);;

  testAssertNode(7, 

 ((void *)0)

 , 

 ((void *)0)

 , RED, &node7, 1621);;

}

void test_function_findReplacer_caseThree(void){

  Node *rootPtr = &node2;

  Node *delete = &node7;

  initNode(&node2, 2, &node1, &node5, BLACK);

  initNode(&node5, 5, 

                     ((void *)0)

                         , &node7, BLACK);

  initNode(&node7, 7, &node6, &node10, RED);

  initNode(&node1, 1, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node6, 6, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node10, 10, &node8, &node12, BLACK);

  initNode(&node8, 8, 

                     ((void *)0)

                         , &node9, BLACK);

  initNode(&node9, 9, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node12, 12, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);



  Replacement(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (

 ((void *)0)

 ), (_U_UINT)1652, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node5, BLACK, &node2, 1653);;

  testAssertNode(5, 

 ((void *)0)

 , &node8, BLACK, &node5, 1654);;

  testAssertNode(6, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node6, 1655);;

  testAssertNode(10, &node9, &node12, BLACK, &node10, 1656);;

  }

void test_function_findReplacer_caseThree_more_longer(void){

  Node *rootPtr = &node2;

  Node *delete = &node7;

  initNode(&node2, 2, &node1, &node5, BLACK);

  initNode(&node5, 5, 

                     ((void *)0)

                         , &node7, BLACK);

  initNode(&node7, 7, &node6, &node10, RED);

  initNode(&node1, 1, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node6, 6, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node10, 10, &node8, &node12, BLACK);

  initNode(&node8, 8, &node4, &node9, BLACK);

  initNode(&node9, 9, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);

  initNode(&node12, 12, 

                       ((void *)0)

                           , 

                             ((void *)0)

                                 , BLACK);

  initNode(&node4, 4, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , BLACK);



  Replacement(&rootPtr, delete);

  UnityAssertEqualNumber((_U_SINT)(_UP)((rootPtr)), (_U_SINT)(_UP)((&node2)), (

 ((void *)0)

 ), (_U_UINT)1689, UNITY_DISPLAY_STYLE_HEX32);

  testAssertNode(2, &node1, &node5, BLACK, &node2, 1690);;

  testAssertNode(5, 

 ((void *)0)

 , &node4, BLACK, &node5, 1691);;

  testAssertNode(6, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node6, 1692);;

  testAssertNode(10, &node8, &node12, BLACK, &node10, 1693);;

  testAssertNode(8, 

 ((void *)0)

 , &node9, BLACK, &node8, 1694);;

  testAssertNode(12, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node12, 1695);;

  testAssertNode(9, 

 ((void *)0)

 , 

 ((void *)0)

 , BLACK, &node9, 1696);;

  }
