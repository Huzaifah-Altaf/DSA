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
    vector<int> a;

public:
    void inorder(TreeNode* root){
        if(root == nullptr) return;

        inorder(root -> left);
        a.push_back(root -> val);
        inorder(root -> right);
    }


    vector<int> findMode(TreeNode* root) {
        inorder(root);
        vector<int> ans;
        unordered_map<int, int> mp;
        
        for(int i = 0; i < a.size(); i++){
            mp[a[i]]++;
        }
        

        int maximum = INT_MIN;
        for(auto it : mp){
            maximum = max(maximum, it.second);
        }
        for(auto it : mp){
            if(it.second == maximum){
                ans.push_back(it.first);
            }
        }
        return ans;
                
              
    }
};