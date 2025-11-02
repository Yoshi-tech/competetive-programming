/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int getHeight(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        return 1 + max(leftHeight, rightHeight);
    }
    bool nodeIsBalanced(TreeNode* root){
        if(root == nullptr) return true;
        int lH = getHeight(root->left);
        int rH = getHeight(root->right);
        if(abs(lH-rH) <= 1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        else{
            if(nodeIsBalanced(root)){
                return nodeIsBalanced(root->left) && nodeIsBalanced(root->right) && isBalanced(root);
            }
        }
        return false;
    }
};
