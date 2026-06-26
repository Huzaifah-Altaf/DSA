class Solution {
public:
    int mySqrt(int x) {
        
        int l = 0;
        int h = x;
        int mid = (l + h) / 2;
        int ans = 0;
        while(l <= h){
            int mid = (l + h) / 2;
            if(((long long) mid * mid) == x){
                return mid;
            }
            else  if( (long long) mid * mid < x){
                l = mid + 1;
            } 
            else {
                h = mid - 1;
            }
            
        }
        return h;
        
    }
};