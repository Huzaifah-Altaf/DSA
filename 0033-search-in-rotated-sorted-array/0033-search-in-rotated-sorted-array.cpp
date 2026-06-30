class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int i = n - 1;
        int k = 0;

            int l = 0;
            int h = n -1;
            int mid;
            while(l <= h){
                mid = (l + h) / 2;
                if(nums[mid] > nums[n - 1]){
                    k = max(k, mid);
                    l = mid + 1;
                }
                else{
                    h = mid - 1;
                }
            }
        
        
         l = 0;
         h = k;
         mid;
        while(l <= h){
            mid = (l + h) / 2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                h = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        l = k + 1;
        h = n - 1;
        while(l <= h){
            mid = (l + h) / 2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                h = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return -1;
    }
};