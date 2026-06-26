class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int, int> mp;
        int value = 1;
        for(int i = 0; i < n; i++){
            if(mp.count(nums[i]) == 1){
                    mp[nums[i]]++;
            }
            else{
                value = 1;
                mp.insert({nums[i],value});
            }
            
        }
        int sum = 0;
        for(auto it : mp){
            if(it.second == 1){
                sum += it.first;
            } 
            
        }
        return sum;
       
    }
};

