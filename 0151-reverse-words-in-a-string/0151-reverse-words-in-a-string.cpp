class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word;
        int i = 0;
        while(i < s.size()){
            if(s[i] != ' '){
                word += s[i];
                i++;
            }
            else{
                if(word == "") i++;
                else{
                    st.push(word);
                    word = "";
                    i++;

                }
                
            }
            
        }
        st.push(word);
        
        i = 0;
        string result;
        while(! st.empty()){
            if(st.top() == ""){
                st.pop();
            }
            else{
                 result += st.top();
            result += " ";
            st.pop();

            }
           
        }
        result.pop_back();
        return result;
    }
};