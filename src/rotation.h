#ifndef rotation_H
#define rotation_H
#include "node.h"
void rotateLeft(Node **nodePtr);
void rotateRight(Node **nodePtr);
void rotateLeftRight(Node **nodePtr);
void rotateRightLeft(Node **nodePtr);
void violationCaseOneRight(Node **nodePtr, Node *addNode);
void violationCaseTwoRight(Node **nodePtr, Node *addNode);
#endif // rotation_H
 