class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n =  nums.size();
        unordered_map<int, int> mp;
        int i = 0;
        while(i < n){
            if(!mp.count(nums[i])){
                mp[nums[i]] = i;
            }
            else{
                if(abs(i - mp[nums[i]]) <= k) return true;
                mp[nums[i]] = i;
            }
            i++;
        }
        return false;
    }
};