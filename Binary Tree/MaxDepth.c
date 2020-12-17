/**
Question link - https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
    
    int l =0, r = 0;
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 1;
    
    if(root->left != NULL)
    l = l+ 1 + maxDepth(root->left);

    if(root->right != NULL)
    r = r + 1 + maxDepth(root->right);
    
    if(l > r)
        return l;
    else
        return r;
}
