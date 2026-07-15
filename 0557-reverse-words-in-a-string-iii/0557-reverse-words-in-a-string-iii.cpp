class Solution {
public:
    string reverseWords(string s) {
       int i = 0;
       int j = 0;
        int n = s.size();
       while(j < n){
        if(s[j] != ' '){
            j++;
        }
        
        else{
            int y = j - 1;
            int x = i;
            while(x < y){
                swap(s[x], s[y]);
                x++;
                y--;
            }
            j++;
            i = j;
         }
       }
   
       if(j >= n){
            j = n - 1;
            while(i < j){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            
        }
        return s;


        

        
    }
};