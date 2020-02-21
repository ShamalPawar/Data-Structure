#ifndef BINARY_TREE__
#define BINARY_TREE__
struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
};
struct Node * createNode(int val);
#endif 
