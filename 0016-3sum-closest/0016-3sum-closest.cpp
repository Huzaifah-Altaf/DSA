class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int k, i, j;
        int n = nums.size();
        int sum;
        int closest = nums[0] + nums[1] + nums[2];
        for(k = 0; k < n; k++){
            i = k + 1;
            j = n - 1;
            if(k > 0 && nums[k] == nums[k - 1] ) continue;
            while(i < j){
                sum = nums[i] + nums[j] + nums[k];
                if(sum == target) return sum;
                else if(sum > target){
                    if(abs(sum - target) < abs(closest - target)){
                        closest = sum;
                    }
                    j--;
                }
                else{
                    if(abs(sum - target) < abs(closest - target)){
                        closest = sum;
                    }
                    i++;
                }
            }
            while(i < j && nums[i] == nums[i - 1]) i++;
            while(i < j && nums[j] == nums[j + 1]) j--;
        }
        return closest;
    }
};