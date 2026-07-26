class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int n = nums.size();
        while((i + 1) < n){
            if(nums[i] == nums[i + 1]) return true;
            i++;
        }
        return false;

    }
};