class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> result;
        int i = 0;
        int n = nums.size();
        unordered_map<int, int> mp;
        while(i < n){
            mp[nums[i]]++;
            i++;
        }
        for(i = 0; i < n; i++){
            if(mp[nums[i]] == 1 && !mp.count(nums[i] - 1) && !mp.count(nums[i] + 1) ) result.push_back(nums[i]);
        }
        return result;
    }
};