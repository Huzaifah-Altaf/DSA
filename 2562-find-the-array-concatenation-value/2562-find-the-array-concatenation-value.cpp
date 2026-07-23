class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        // vector<string> s;
        // for(int i= 0; i < nums.size(); i++){
        //     s.push_back(to_string(nums[i]));
        // }
        string sum;
        int i = 0;
        int j = nums.size() - 1;
        long long result = 0;
        if((nums.size() & 1) == 0){
            while(i < j){
            sum = to_string(nums[i]) + to_string(nums[j]);
            result += stoll(sum); 
            i++;
            j--;

        }
        }
        else{
            while(i < j){
            sum = to_string(nums[i]) + to_string(nums[j]);
            result += stoll(sum); 
            i++;
            j--;
        }
        result += nums[(nums.size()) / 2];
        }
        
         
        return result;
    }
};