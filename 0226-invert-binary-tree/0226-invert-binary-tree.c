/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root){
    if (root == NULL)
        return root;
    struct TreeNode* temp;
    temp = root->right;
    root->right = root->left;
    root->left = temp;
    invertTree(root->left);
    invertTree(root->right);
    return root;

}