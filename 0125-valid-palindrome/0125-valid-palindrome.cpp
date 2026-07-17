class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        while(i < s.size()){
            if(s[i] <= 'Z' && s[i] >= 'A'){
                s[i] = tolower(s[i]);
                i++;
            }
            else if(s[i] <= '9' && s[i] >= '0'){
                i++;
            }
            else if(s[i] <= 'z' && s[i] >= 'a'){
                i++;
            }
            else{
                s.erase(i, 1);
                
            }
        }
        i = 0;
        int j = s.size() - 1;
        while(i <= j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};