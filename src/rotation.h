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
void rbtInternalAdd(Node **nodePtr, Node *child);
void rbtAdd(Node **nodePtr, Node *child);

void caseOneALeft(Node **nodePtr, Node *deleteNode);
void caseOneBLeft(Node **nodePtr, Node *deleteNode);
void caseTwoALeft(Node **nodePtr, Node *deleteNode);
void caseTwoBLeft(Node **nodePtr, Node *deleteNode);
void caseThreeLeft(Node **nodePtr, Node *deleteNode);

void caseThreeRight(Node **nodePtr, Node *deleteNode);
void caseOneARight(Node **nodePtr, Node *deleteNode);
void caseOneBRight(Node **nodePtr, Node *deleteNode);
void caseTwoARight(Node **nodePtr, Node *deleteNode);
void caseTwoBRight(Node **nodePtr, Node *deleteNode);
void caseThreeRight(Node **nodePtr, Node *deleteNode);
ReturnedObject rbtRemoveInt(Node *deleteNode);
void deleteRBTNode(Node **nodePtr, Node *deleteNode);
void deleteRBTNodeInt(Node **nodePtr, Node *deleteNode);

void Replacement(Node **nodePtr, Node *deleteNode);
#endif // rotation_H
 