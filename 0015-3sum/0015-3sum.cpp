class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i, j, k;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(k = 0; k < n; k++){
            i = k + 1;
            j = n - 1;
            if(k > 0 && nums[k] == nums[k - 1]){
                continue;
            }
            while(i < j){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                        vector<int> triplet = {nums[k], nums[i], nums[j]};
                        ans.push_back(triplet);
                    
                    i++;
                    j--;
                    while(i < j && nums[i] == nums[i - 1]) i++;
                    while(i < j && nums[j] == nums[j + 1]) j--;
                }
                else if(sum < 0){
                    i++;
                }
                else{
                    j--;
                }
                
            }
                  
        }
        return ans;
    }
};