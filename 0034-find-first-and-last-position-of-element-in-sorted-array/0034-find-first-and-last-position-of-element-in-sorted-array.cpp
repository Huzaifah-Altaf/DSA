class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low, high, mid;
        vector<int> firstlast = {-1, - 1};
        low = 0;
        high = nums.size() - 1;
        while(low <= high){
            mid = (low + high) / 2;
            if(nums[mid] == target){
                int x = mid;
                int y = mid;
                while(x >= 0 && nums[x] >= target) x--;
                firstlast[0] = x + 1;
                while(y < nums.size() && nums[y] <= target) y++;
                firstlast[1] = y - 1;
                return firstlast;
            }
            else if(nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return firstlast;
    }
};