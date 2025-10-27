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
    int calcDistance(TreeNode* p){
        if(p == nullptr){
            return 0;
        }
        else{
            int leftDepth = calcDistance(p->left);
            int rightDepth = calcDistance(p->right);

            if(p->right == nullptr && p->left == nullptr){
                return 1;
            }
            else if(p->right == nullptr || p->left == nullptr){
                if(p->right == nullptr){
                    return 1 + leftDepth;
                }
                else{
                    return 1 + rightDepth;
                }
            }
            else{
                return 1 + min(leftDepth, rightDepth);
            }
        }
    }
    int minDepth(TreeNode* root) {
        TreeNode* current = root;

        return calcDistance(current);
    }
};
