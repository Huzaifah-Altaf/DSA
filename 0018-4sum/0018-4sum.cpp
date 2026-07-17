class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i, j, k, l;
        vector<vector<int>> ans;
        for(l = 0; l < n; l++){
            if(l > 0 && nums[l] == nums[l - 1]) continue;
            for(k = l + 1; k < n; k++){
                if(k > l + 1 && nums[k] == nums[k - 1]) continue;
                i = k + 1;
                j = n - 1;
                while(i < j){
                    long long sum = (long long )nums[i] + nums[j] + nums[k] + nums[l];
                    if(sum == target){
                        vector<int> quadruplet = {nums[i], nums[j], nums[k], nums[l]};
                        
                        ans.push_back(quadruplet);
                        i++;
                        j--;

                        while(i < j && nums[i] == nums[i - 1]) i++;
                        while(i < j && nums[j] == nums[j + 1]) j--;

                    }
                    else if(sum < target) i++;
                    else j--;
                }
            }
        }
        return ans;
    }
};