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
    int calcDistance(TreeNode*p){
        if(p == nullptr){
            return 0;
        }
        else{
            int rightDepth = calcDistance(p->right);
            int leftDepth = calcDistance(p->left);
            return 1 + max(rightDepth, leftDepth);
        }

        
    }
    int maxDepth(TreeNode* root) {
        TreeNode* current = root;
        return calcDistance(current);

    }
};
