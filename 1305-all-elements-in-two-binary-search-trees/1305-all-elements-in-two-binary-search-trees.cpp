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

    void inorder1(TreeNode* root1, vector<int> &res1){
        if(root1 == nullptr) return;

        inorder1(root1 -> left, res1);
        res1.push_back(root1 -> val);
        inorder1(root1 -> right, res1);

    }

    void inorder2(TreeNode* root2, vector<int> &res2){
        if(root2 == nullptr) return;

        inorder2(root2 -> left, res2);
        res2.push_back(root2 -> val);
        inorder2(root2 -> right, res2);

    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> res1;
        vector<int> res2;
        vector<int> res3;
        inorder1(root1, res1);
        inorder2(root2, res2);

        int i = 0;
        int j = 0;

        while(i < res1.size() && j < res2.size()){

            if(res1[i] == res2[j]){
                res3.push_back(res1[i]);
                res3.push_back(res2[j]);
                i++;
                j++;
            }
            else if(res1[i] < res2[j]){
                res3.push_back(res1[i]);
                i++;
            }
            else{
                res3.push_back(res2[j]);
                j++;
            }
        }
        if(i >= res1.size() && j >= res2.size()) return res3;

        if(i >= res1.size() && j < res2.size()){
            for(int k = j; k < res2.size(); k++){
                res3.push_back(res2[k]);
            }
        }

        if(i < res1.size() && j >= res2.size()){
            for(int k = i; k < res1.size(); k++){
                res3.push_back(res1[k]);
            }
        }
        return res3;
    }
};