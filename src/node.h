#ifndef node_H
#define node_H


typedef struct Node Node;
struct Node{
  Node *left;
  Node *right;
  int colour;
  int value;
};

Node *createNode (int color, int data);
void insert(Node *root, Node *child);
#endif // node_H
