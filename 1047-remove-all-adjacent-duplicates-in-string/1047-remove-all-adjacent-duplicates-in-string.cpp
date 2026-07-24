class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int i = 0;
        while(i < s.size()){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(!st.empty() && st.top() == s[i]){
                st.pop();    
            }
            else{
                st.push(s[i]);
            }
            i++;
        }

        string ans;
        while(!st.empty()){
            ans += st.top();
            st.pop();
            
        }
    
        i = 0;
        int j = ans.size() - 1;
        while(i < j){
            swap(ans[i], ans[j]);
            i++;
            j--;
        }
        return ans;


    }
};