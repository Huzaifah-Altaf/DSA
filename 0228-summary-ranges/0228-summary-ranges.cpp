class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        vector<string> result;
        if(nums.empty()) return result;
        while(j + 1 < n){
            if(nums[j + 1] == nums[j] + 1){
                j++;
            }
            else{
                if(i == j){
                    result.push_back(to_string(nums[i]));
                }
                else result.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
                i = j + 1;
                j++;
            }

        }
        if(i == j){
                    result.push_back(to_string(nums[i]));
                }
                else result.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
        
        return result;
    }
};