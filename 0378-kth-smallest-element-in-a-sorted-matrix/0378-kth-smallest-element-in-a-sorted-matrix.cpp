class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int a[n * n];
        int l = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                a[l] = matrix[i][j];
                l++;
            }
        }
        sort(a, a+ n * n);
        return a[k - 1];
    }
};