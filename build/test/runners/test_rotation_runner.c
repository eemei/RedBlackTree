/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_left_rotation_with_node80_and_one_child(void);
extern void test_left_rotation_with_node_one_five_zero(void);
extern void test_left_rotation_with_node_sixty_and_two_children(void);
extern void test_left_rotation_with_node_hundred_and_left_channel(void);
extern void test_right_rotation_with_nodeFive(void);
extern void test_right_rotation_with_nodeTen(void);
extern void test_right_rotation_with_node_sixty_and_two_children(void);
extern void test_right_rotation_with_node_one_hundred_and_twenty_and_two_children(void);
extern void test_left_right_rotation_with_node_hundred_and_child_eighty(void);
extern void test_left_right_rotation_with_node_one_hundred_and_fifty_and_child_twenty(void);
extern void test_right_left_rotation_simple_with_node_hundred(void);
extern void test_right_left_rotation_with_node_hundred(void);
extern void test_parent_of_addNode_is_left_child_of_Grandparent_of_addNode_and_addNode_is_left_child_of_parent(void);
extern void test_parent_of_addNode_is_left_child_of_Grandparent_of_addNode_and_addNode_is_right_child_of_parent(void);
extern void test_case_two_uncle_is_black_and_addNode_at_left_right_of_root(void);
extern void test_case_three_uncle_is_black_and_addNode_at_left_left_of_root(void);
extern void test_parent_of_addNode_is_right_child_of_Grandparent_of_addNode(void);
extern void test_case_two_uncle_is_black_and_addNode_at_right_left_of_root(void);
extern void test_case_three_uncle_is_black_and_addNode_at_right_right_of_root(void);
extern void test_pointer_attract_to_a_node_fifty_and_return_null(void);
extern void test_add_a_node_at_right_of_root(void);
extern void test_add_a_node_at_right_of_right_of_root_and_case_three(void);
extern void test_add_a_node_and_recolour(void);
extern void test_add_a_node_and_recolour_at_rightChild_of_rightNode_and_recolour(void);
extern void test_rbtAdd_case_two_left_right_rotation(void);
extern void test_rbtAdd_with_case_two_and_case_three(void);
extern void test_rbtAdd_with_case_three_at_right_side(void);
extern void test_rbtAdd_with_case_one_at_left_side(void);
extern void test_rbtAdd_with_case_one_and_case_2_with_Add_node_seven(void);
extern void test_fuction_caseOneParentRedBlack_when_parent_red(void);
extern void test_fuction_caseOneParentRedBlack_when_parent_Black(void);
extern void test_fuction_caseOneParentRedBlack_the_sibling_of_child_at_left_when_parent_red(void);
extern void test_fuction_caseOneParentRedBlack_the_sibling_at_left_and_parent_is_black_colour(void);
extern void test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_black(void);
extern void test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_NULL(void);
extern void test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_black(void);
extern void test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_NULL_and_the_deleteNode_not_inside_the_tree(void);
extern void test_fuction_caseThree_the_sibling_is_red_and_right_child_of_parent(void);
extern void test_fuction_caseThree_the_sibling_is_red_and_right_child_of_parent_the_delete_node_is_not_inside_the_tree(void);
extern void test_fuction_caseOne_thesibling_at_left_child_of_parent_and_parent_is_red(void);
extern void test_fuction_caseOne_the_sibling_at_left_child_of_parent_and_parent_is_Black_deleteNode_not_inside_tree(void);
extern void test_fuction_caseOne_the_sibling_at_left_child_of_parent_and_parent_is_red(void);
extern void test_fuction_caseOne_the_sibling_at_left_child_of_parent_and_parent_is_black_deleteNode_not_inside_tree(void);
extern void test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_black_the_sibling_at_left_side(void);
extern void test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_NULL_the_sibling_at_left_side(void);
extern void test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_black_the_sibling_at_left_side(void);
extern void test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_NULL_the_sibling_at_left_side(void);
extern void test_fuction_caseThree_the_sibling_is_red_and_left_child_of_parent(void);
extern void test_rbtRemoveInt_function_given_a_delete_node_then_return_node_and_colour(void);
extern void test_delete_one_node_and_that_is_the_root(void);
extern void test_delete_one_node_and_that_is_the_twenty_node_at_left_most_and_performed_rotation_left(void);
extern void test_delete_node_twenty_and_performed_left_rotation_the_headNode_is_red(void);
extern void test_delete_node_six_and_performed_caseThree_and_involved_case_two(void);
extern void test_delete_node_six_and_performed_caseBTwo(void);
extern void test_delete_a_node_and_performed_caseATwo(void);
extern void test_delete_a_node_and_performed_rotate_right_is_caseOneA(void);
extern void test_delete_a_node_and_performed_caseThreeRight(void);
extern void test_function_findReplacer(void);


//=======Test Reset Option=====
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  UnityBegin("test_rotation.c");
  RUN_TEST(test_left_rotation_with_node80_and_one_child, 66);
  RUN_TEST(test_left_rotation_with_node_one_five_zero, 84);
  RUN_TEST(test_left_rotation_with_node_sixty_and_two_children, 101);
  RUN_TEST(test_left_rotation_with_node_hundred_and_left_channel, 122);
  RUN_TEST(test_right_rotation_with_nodeFive, 145);
  RUN_TEST(test_right_rotation_with_nodeTen, 162);
  RUN_TEST(test_right_rotation_with_node_sixty_and_two_children, 181);
  RUN_TEST(test_right_rotation_with_node_one_hundred_and_twenty_and_two_children, 203);
  RUN_TEST(test_left_right_rotation_with_node_hundred_and_child_eighty, 228);
  RUN_TEST(test_left_right_rotation_with_node_one_hundred_and_fifty_and_child_twenty, 251);
  RUN_TEST(test_right_left_rotation_simple_with_node_hundred, 278);
  RUN_TEST(test_right_left_rotation_with_node_hundred, 301);
  RUN_TEST(test_parent_of_addNode_is_left_child_of_Grandparent_of_addNode_and_addNode_is_left_child_of_parent, 329);
  RUN_TEST(test_parent_of_addNode_is_left_child_of_Grandparent_of_addNode_and_addNode_is_right_child_of_parent, 352);
  RUN_TEST(test_case_two_uncle_is_black_and_addNode_at_left_right_of_root, 378);
  RUN_TEST(test_case_three_uncle_is_black_and_addNode_at_left_left_of_root, 401);
  RUN_TEST(test_parent_of_addNode_is_right_child_of_Grandparent_of_addNode, 425);
  RUN_TEST(test_case_two_uncle_is_black_and_addNode_at_right_left_of_root, 451);
  RUN_TEST(test_case_three_uncle_is_black_and_addNode_at_right_right_of_root, 475);
  RUN_TEST(test_pointer_attract_to_a_node_fifty_and_return_null, 498);
  RUN_TEST(test_add_a_node_at_right_of_root, 514);
  RUN_TEST(test_add_a_node_at_right_of_right_of_root_and_case_three, 533);
  RUN_TEST(test_add_a_node_and_recolour, 558);
  RUN_TEST(test_add_a_node_and_recolour_at_rightChild_of_rightNode_and_recolour, 587);
  RUN_TEST(test_rbtAdd_case_two_left_right_rotation, 616);
  RUN_TEST(test_rbtAdd_with_case_two_and_case_three, 646);
  RUN_TEST(test_rbtAdd_with_case_three_at_right_side, 677);
  RUN_TEST(test_rbtAdd_with_case_one_at_left_side, 708);
  RUN_TEST(test_rbtAdd_with_case_one_and_case_2_with_Add_node_seven, 742);
  RUN_TEST(test_fuction_caseOneParentRedBlack_when_parent_red, 813);
  RUN_TEST(test_fuction_caseOneParentRedBlack_when_parent_Black, 840);
  RUN_TEST(test_fuction_caseOneParentRedBlack_the_sibling_of_child_at_left_when_parent_red, 868);
  RUN_TEST(test_fuction_caseOneParentRedBlack_the_sibling_at_left_and_parent_is_black_colour, 895);
  RUN_TEST(test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_black, 922);
  RUN_TEST(test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_NULL, 949);
  RUN_TEST(test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_black, 974);
  RUN_TEST(test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_NULL_and_the_deleteNode_not_inside_the_tree, 1001);
  RUN_TEST(test_fuction_caseThree_the_sibling_is_red_and_right_child_of_parent, 1026);
  RUN_TEST(test_fuction_caseThree_the_sibling_is_red_and_right_child_of_parent_the_delete_node_is_not_inside_the_tree, 1055);
  RUN_TEST(test_fuction_caseOne_thesibling_at_left_child_of_parent_and_parent_is_red, 1086);
  RUN_TEST(test_fuction_caseOne_the_sibling_at_left_child_of_parent_and_parent_is_Black_deleteNode_not_inside_tree, 1115);
  RUN_TEST(test_fuction_caseOne_the_sibling_at_left_child_of_parent_and_parent_is_red, 1143);
  RUN_TEST(test_fuction_caseOne_the_sibling_at_left_child_of_parent_and_parent_is_black_deleteNode_not_inside_tree, 1171);
  RUN_TEST(test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_black_the_sibling_at_left_side, 1199);
  RUN_TEST(test_fuction_caseTwo_the_parent_is_black_colour_and_both_grandchildren_are_NULL_the_sibling_at_left_side, 1226);
  RUN_TEST(test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_black_the_sibling_at_left_side, 1252);
  RUN_TEST(test_fuction_caseTwo_the_parent_is_red_colour_and_both_grandchildren_are_NULL_the_sibling_at_left_side, 1279);
  RUN_TEST(test_fuction_caseThree_the_sibling_is_red_and_left_child_of_parent, 1305);
  RUN_TEST(test_rbtRemoveInt_function_given_a_delete_node_then_return_node_and_colour, 1324);
  RUN_TEST(test_delete_one_node_and_that_is_the_root, 1341);
  RUN_TEST(test_delete_one_node_and_that_is_the_twenty_node_at_left_most_and_performed_rotation_left, 1359);
  RUN_TEST(test_delete_node_twenty_and_performed_left_rotation_the_headNode_is_red, 1383);
  RUN_TEST(test_delete_node_six_and_performed_caseThree_and_involved_case_two, 1409);
  RUN_TEST(test_delete_node_six_and_performed_caseBTwo, 1442);
  RUN_TEST(test_delete_a_node_and_performed_caseATwo, 1475);
  RUN_TEST(test_delete_a_node_and_performed_rotate_right_is_caseOneA, 1505);
  RUN_TEST(test_delete_a_node_and_performed_caseThreeRight, 1538);
  RUN_TEST(test_function_findReplacer, 1577);

  return (UnityEnd());
}
