class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> mp;
        int i = 0;
        if(s.size() != t.size()) return false;

        while(i < s.size()){
            if(mp.count(s[i])){
                mp[s[i]]++;
            }
            else{
              
                mp.insert({s[i], 1});
            }
            i++;
        }
    unordered_map<int, int> np;
        i = 0;
         while(i < t.size()){
            if(np.count(t[i])){
                np[t[i]]++;
            }
            else{
              
                np.insert({t[i], 1});
            }
            i++;
        }
        if(mp == np) return true;
        return false;
       
        
    }
};