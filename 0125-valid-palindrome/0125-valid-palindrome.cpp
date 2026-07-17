class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        while(i < s.size()){
            if(s[i] <= 'Z' && s[i] >= 'A'){
                s[i] = tolower(s[i]);
                i++;
            }
            
            else{
                i++;
                
            }
        }
        i = 0;
        int j = s.size() - 1;
        while(i <= j){
           
            if(((s[i] <= '9' && s[i] >= '0') || (s[i] <= 'z' && s[i] >= 'a'))  && ((s[j] <= '9' && s[j] >= '0') || (s[j] <= 'z' && s[j] >= 'a'))){
                 if(s[i] == s[j]){
                i++;
                j--;
            }
             else {
                return false;
            }
            }

            else if (!(( s[i] <= '9' && s[i] >= '0') || (s[i] <= 'z' && s[i] >= 'a'))){
                i++;
            }
            else{
                j--;
            }
            
           
        }
        return true;
    }
};