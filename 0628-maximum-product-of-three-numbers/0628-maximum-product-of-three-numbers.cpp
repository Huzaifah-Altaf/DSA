class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i, j, k;
        int product = INT_MIN;
        for(k = 0; k < n; k++){

            i = k + 1;
            j = n - 1;
            while(i < j){
                product = max(nums[i] * nums[j] * nums[k], product);
                i++;
            }
        }
        return product;
    }
};