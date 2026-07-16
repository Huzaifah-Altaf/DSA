class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int i = 0;
        int n = s.size();
        int word;
        int max_word = 0;
        while(i < n){
            word = 1;
            int j = 0;
            while(j < s[i].size()){
                if(s[i][j] != ' '){
                    j++;
                }
                else{
                    word++;
                    j++;
                }
            }
            max_word = max(word, max_word);
            i++;
        }
        return max_word;
    }
};