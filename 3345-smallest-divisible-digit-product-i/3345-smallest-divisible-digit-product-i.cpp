class Solution {
public:
    int smallestNumber(int n, int t) {
        int temp, i, ans;
       for(i = n; i <= n + 10; i++){
            temp = 1;
            ans = i;
            while(ans > 0){
            temp *= ans % 10;
            ans = ans / 10;
        }
        if(temp % t == 0) return i;
        
       }

        return i;     
    }
};