class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        int n = dictionary.size();
        unordered_set<string> mp;       
        
        int m = sentence.size();
        int i = 0;
        while(i < n){
            mp.insert(dictionary[i]);
            i++;
        }

        string prefix;
        string result;
        i = 0;
        while(i < m){
            if(sentence[i] != ' '){
                prefix += sentence[i];
                if(mp.count(prefix)){
                    result += prefix;
                    result += " ";
                    prefix = "";
                    while(i < m && sentence[i] != ' ') i++;
                }
                i++;
            }

            else{
                if(prefix != ""){
                    result += prefix;
                    result += " ";
                }
                prefix = "";
                i++;
            }
            
        }
        if(prefix == ""){
            result.pop_back();
            return result;  
        }

        result += prefix;
        return result;
        


        
        
    }
};
