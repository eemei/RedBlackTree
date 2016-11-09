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
extern void test_left_rotation_with_node150(void);
extern void test_left_rotation_with_node_60_and_two_children(void);
extern void test_left_rotation_with_node_100_and_left_channel(void);
extern void test_right_rotation_with_node5(void);
extern void test_right_rotation_with_node10(void);
extern void test_right_rotation_with_node_60_and_two_children(void);
extern void test_right_rotation_with_node_120_and_two_children(void);
extern void test_left_right_rotation_with_node_100_and_child_80(void);
extern void test_left_right_rotation_with_node_150_and_child_20(void);


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
  RUN_TEST(test_left_rotation_with_node80_and_one_child, 44);
  RUN_TEST(test_left_rotation_with_node150, 61);
  RUN_TEST(test_left_rotation_with_node_60_and_two_children, 79);
  RUN_TEST(test_left_rotation_with_node_100_and_left_channel, 100);
  RUN_TEST(test_right_rotation_with_node5, 123);
  RUN_TEST(test_right_rotation_with_node10, 140);
  RUN_TEST(test_right_rotation_with_node_60_and_two_children, 159);
  RUN_TEST(test_right_rotation_with_node_120_and_two_children, 181);
  RUN_TEST(test_left_right_rotation_with_node_100_and_child_80, 206);
  RUN_TEST(test_left_right_rotation_with_node_150_and_child_20, 229);

  return (UnityEnd());
}
