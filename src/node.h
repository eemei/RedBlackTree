#ifndef node_H
#define node_H

typedef enum{
  RED, 
  BLACK,
  DOUBLE_BLACK
}Colour;

typedef struct Node Node;
struct Node{
  Node *left;
  Node *right;
  int colour;
  int value;
};

typedef struct ReturnedObject ReturnedObject;
struct ReturnedObject{
  Node *removedNode;
  Colour returnedColour;
};

Node *createNode (int color, int data);
void insert(Node *root, Node *addNode);

#endif // node_H
