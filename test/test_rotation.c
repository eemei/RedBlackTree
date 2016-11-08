#include "unity.h"
#include "rotation.h"
#include "node.h"
void setUp(void){}

void tearDown(void){}

/*
*     80      <                    150
*    / \      \    left rotate     / \
*   60 150     /   ---------->   80   160  
*      / \                      / \
*    100  160                  60 150
*
*/

void test_left_rotation(void){
  int color = 20;
  int data = 80;
  int data2 = 150;
  int data3 = 60;
  int data4 = 160;
  int data5 = 100;
  Node *newNode, *child1, *child2, *child3, *child4;
  newNode = createNode(color, data);
  child1 = createNode(color, data2);
  child2 = createNode(color, data3);
  child3 = createNode(color, data4);
  child4 = createNode(color, data5);
  insert(newNode, child);
 // rotateLeft(&tree);
}
