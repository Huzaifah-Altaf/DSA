class Solution {
public:
    char kthCharacter(int k) {
        int i;
        string a = "a";
        
        while(a.size() < k){
            int size = a.size();
            for(i=0;i<size;i++){
                a.push_back (char(a[i]+1));
            }
        }
        return a[k-1];
    }
};