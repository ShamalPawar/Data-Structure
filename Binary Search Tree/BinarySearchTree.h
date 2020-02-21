#ifndef BINARY_SEARCH_TREE__
#define BINARY_SEARCH_TREE__
struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
};
struct Node * createNode(int val);
#endif 