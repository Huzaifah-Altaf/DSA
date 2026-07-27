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
     void inorder(TreeNode* root, vector<int> &result){
        if(root == nullptr) return;

        inorder(root -> left, result);
        result.push_back(root -> val);
        inorder(root -> right, result);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> result;
        inorder(root, result);
        set<int> s;
        for(int i = 0; i < result.size(); i++){
            s.insert(result[i]);
        }
        vector<int> ans(s.begin(), s.end());
        if(s.size() < 2) return -1;
        return ans[1];
    }
};