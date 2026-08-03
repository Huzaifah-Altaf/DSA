class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0;
        int k = 0;
        int j = nums.size() - 1;
        // while(k <= j){
        //     if(nums[k] == 0 && nums[i] != 0){
        //         swap(nums[k], nums[i]);
        //         k++;
        //         i++;
        //     }
        //     else if(nums[k] == 0 && nums[i] == 0) k++;
      
        //     }
        //     else if(nums[k] == 2 && nums[j] != 2){
        //         swap(nums[k], nums[j]);
        //         j--;
        //         k++;
        //     }
        // }

         while(k <= j){
            if(nums[k] == 0){
                swap(nums[k], nums[i]);
                k++;
                i++;
            }
            else if(nums[k] == 2){
                swap(nums[k], nums[j]);
                j--;
            }
            else k++;
        }
        
    }
};