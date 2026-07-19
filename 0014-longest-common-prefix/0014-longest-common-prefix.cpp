class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int i = 0;
        while(i < strs[0].size() && i < strs[strs.size() - 1].size()   && strs[0][i] == strs[strs.size() - 1][i]){
            i++;
        }

        string result;
        if(i > 0){
            
            int j = 0;
            while(j < i){
                result += strs[0][j]; 
                j++;
            }
            return result;
        }
        return result;
    }
};