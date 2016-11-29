#ifndef rotation_H
#define rotation_H
#include "node.h"
void rotateLeft(Node **nodePtr);
void rotateRight(Node **nodePtr);
void rotateLeftRight(Node **nodePtr);
void rotateRightLeft(Node **nodePtr);
void violationCaseOneRight(Node **nodePtr, Node *addNode);
void violationCaseOneLeft(Node **nodePtr, Node *addNode);
void violationCaseTwoRight(Node **nodePtr, Node *addNode);
void violationCaseTwoLeft(Node **nodePtr, Node *addNode);
void violationCaseThreeRight(Node **nodePtr, Node *addNode);
void violationCaseThreeLeft(Node **nodePtr, Node *addNode);
void rbtInternalAdd(Node **root, Node *child);
void rbtAdd(Node **root, Node *child);
#endif // rotation_H
 