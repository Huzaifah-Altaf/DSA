class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i;
        int x;
        int maxi = -1;
        for(i = arr.size() - 1; i >=0 ; i--){
            x = arr[i];
            arr[i] = maxi;
            maxi = max(maxi, x);
            
        }
        return arr;
    }
};