#ifndef CustomAssert_H
#define CustomAssert_H
#include "node.h"
#define TEST_ASSERT_EQUAL_NODE(value, left, right, color, node)                   \
        testAssertNode(value, left, right, color, node, __LINE__);

void testAssertNode(int value, Node *left, Node *right, Color color, Node *node, int lineNo);

#endif // CustomAssert_H
