/**
 * @author : Shamal Pawar
 * @details : Binary search tree creation
 * @date : 21/02/2020
 * */
#include<stdio.h>
#include<stdlib.h>
#include "BinarySearchTree.h"

/**
 * @function name : createNode
 * @details : create and allocate memory for new node and return pointer
*/
struct Node * createNode(int val)
{
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node)); 
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return (newNode);
}

int main()
{
    struct Node *root;
    root = createNode(1);
   /* ---------------------------------
                (1)
               /   \
            NULL  NULL
    ----------------------------------*/
    
    root->left = createNode(5);
    root->right = createNode(6);
    /*----------------------------------
               (1)
               /   \
            (5)    (6)
           /   \   /  \   
        NULL  NULL NULL NULL
    ------------------------------------*/
    root->left->left = createNode(9);
    return 0;
}
