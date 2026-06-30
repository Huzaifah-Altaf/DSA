class Solution {
public:
    bool rotateString(string s, string goal) {
        string s1 = s + s;
        int start = 0;
        int i = 0;
        int j = 0;
        int n = goal.size();
        if(n != s.size()) return 0;
        int cp = 0;
        while(i < s1.size() && j < n){
            if(s1[i] == goal[j]){
                i++, j++;
                cp++;
            }
            else{
                start++;
                i = start;
                j = 0;
                cp = 0;
            }
        }
        if(cp == n) return 1;
        return 0;
    }
};