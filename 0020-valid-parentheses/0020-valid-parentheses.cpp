class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i = 0;
        while(i < s.size()){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
                i++;
            }
            else{
                if(st.empty()) return false;
                char  ch = st.top();
                st.pop();
                if(ch == '(' && s[i] == ')' || ch == '{' && s[i] == '}' || ch == '[' && s[i] == ']') i++;
                else return false;
        }
        }
        if(st.empty()) return true;
        return false;
    }
};