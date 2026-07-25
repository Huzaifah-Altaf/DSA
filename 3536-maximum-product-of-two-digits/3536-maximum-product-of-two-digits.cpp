class Solution {
public:
    int maxProduct(int n) {
        string a;
        while(n > 0){
            a += n % 10;
            n /= 10;
        }
        sort(a.begin(), a.end());
        int product = a[a.size() - 1] * a[a.size() - 2];
        return product;
    }
};