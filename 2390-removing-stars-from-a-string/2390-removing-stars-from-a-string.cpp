class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        int i = 0;
        int n = s.size();
        while(i < n){
            if(s[i] != '*'){
                st.push(s[i]);
                i++;
            }
            else{
                if(st.empty()) i++;
                else{
                    st.pop();
                    i++;
                }
            }
        }

        stack<char> newst;
        while(!st.empty()){
            newst.push(st.top());
            st.pop();
        }
        string result;
        i = 0;
        while(!newst.empty()){
            result += newst.top();
            newst.pop();
            i++;
        }
        return result;
    }
};