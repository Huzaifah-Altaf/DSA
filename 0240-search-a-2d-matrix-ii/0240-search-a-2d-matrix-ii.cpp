class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int i = 0, j = m - 1;
        // int node = matrix[i][j];
        while(i < n && j >= 0){
            int node = matrix[i][j];
            if(node == target) return 1;
            if(node > target){
                j--;
            }
            else{
                i++;
            }
        }
        return 0;


    }
};