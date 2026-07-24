class Solution {
public:
    bool detectCapitalUse(string word) {
       int i = 0;
       int lc = 0;
       int uc = 0;
       while(i < word.size()){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            uc++;
        }
        else {
            lc++;
        }
            i++;
       }
       if(uc == 1 && lc == word.size() - 1){
        if(word[0] >= 'A' && word[0] <= 'Z')
            return true;
       }

       if(uc == word.size() ) return true; 
       if(lc == word.size() ) return true; 
       return false;
    }
};