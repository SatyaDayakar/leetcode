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
    int out = 0 ;
    TreeNode* main = NULL ;
    int countDominantNodes(TreeNode* root) {

        if(main == NULL)
            main = root ;
        if(root == NULL)
            return -1 ;
        int lefty = countDominantNodes(root->left);
        int righty = countDominantNodes(root->right);
        int maxlr = max(lefty , righty);
        if(root->val >= maxlr )
            out++ ;
        if(root == main)
            return out ;
        return max(root->val , maxlr);
        
    }
};