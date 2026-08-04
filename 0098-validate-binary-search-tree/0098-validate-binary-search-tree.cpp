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
    bool fun(TreeNode* root, long a, long b){
        if(root == nullptr) return true;
        
        if(!(root -> val > a && root -> val < b)) return false;

        bool l = fun(root -> left, a, root -> val);
        bool r = fun(root -> right, root -> val, b);

        return l && r;
    }

    bool isValidBST(TreeNode* root) {
        return fun(root, LONG_MIN, LONG_MAX);
    }
};