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
    void fun(TreeNode* root, int col, int row, map<int, vector<pair<int, int>>> &mp){
        if(root == nullptr) return;

        mp[col].push_back({row, root -> val});
        
        
        fun(root -> left, col - 1, row + 1, mp);
        fun(root -> right, col + 1, row + 1, mp);
    }


    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> result;
        map<int, vector<pair<int, int>>> mp;
        fun(root, 0, 0, mp);
        for(auto it : mp){
            vector<pair<int, int>> ans;
            for(auto p : it.second){
                ans.push_back(p);
            }
            sort(ans.begin(), ans.end());
            vector<int> ans1;
            for(int i = 0; i < ans.size(); i++){
               ans1.push_back(ans[i].second); 
            }
            result.push_back(ans1);
            
        }
        return result;
        

    }
};