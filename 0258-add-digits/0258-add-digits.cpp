class Solution {
public:
    int addDigits(int num) {
        int digit = 0;
        while(num / 10 != 0){
            digit = 0;
            while(num > 0){
            digit += num % 10;
            num = num / 10;
        }
        num = digit;
        }
        return num;
    }
};