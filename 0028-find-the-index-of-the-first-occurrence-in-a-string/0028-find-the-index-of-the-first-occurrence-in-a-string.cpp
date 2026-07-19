class Solution {
public:
    int strStr(string haystack, string needle) {
       
        int i = 0;
        int j = 0;
        int k = 0;
        int cp = 0;
        while(i < haystack.size() && j < needle.size()){
            if(haystack[i] == needle[j]){
                i++;
                j++;
                cp++;
            }
            else{
                cp = 0;
                j = 0;
                i = k + 1;
                k = i;


            }

        }
        if(cp == needle.size())
        return k;
        return -1;
    }
};