class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int h = matrix.size() * matrix[0].size() - 1;
        int mid;
        int i, j;
        while(l <= h){
            mid = (l + h) / 2;
            i = mid / matrix[0].size();
            j = mid % matrix[0].size();
            if(matrix[i][j] == target) return 1;
            else if(matrix[i][j] < target){
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
        return 0;
    }
};