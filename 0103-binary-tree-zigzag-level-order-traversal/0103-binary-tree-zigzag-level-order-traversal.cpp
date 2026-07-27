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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == nullptr) return ans;
        queue<TreeNode*> q;
        q.push(root);
        int levels = -1;
        while(!q.empty()){
            levels++;
             vector<int> sub_ans;
             int size = q.size();
            for(int i = 0; i < size; i++){
                TreeNode* temp = q.front();
                sub_ans.push_back(temp -> val);
                q.pop();
                // if(!(levels & 1)){
                    // if(temp -> right != nullptr) q.push(temp -> right);
                    // if(temp -> left != nullptr) q.push(temp -> left);        
                // }
                // else{
                     if(temp -> left != nullptr) q.push(temp -> left);
                     if(temp -> right != nullptr) q.push(temp -> right);
                // }
               
            }
            if(levels & 1){
                reverse(sub_ans.begin(), sub_ans.end());
            }
            
            ans.push_back(sub_ans);
        } 
        return ans;
    }
};