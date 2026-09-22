class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> scorecopy = score;
        sort(scorecopy.begin(), scorecopy.end());
        reverse(scorecopy.begin(), scorecopy.end());
        unordered_map<int, string> mp;
        int i = 0;
        while(i < score.size()){
            if(i == 0){
                mp[scorecopy[i]] = "Gold Medal";
            }
            else if(i == 1){
                mp[scorecopy[i]] = "Silver Medal";
            }
            else if(i == 2){
                mp[scorecopy[i]] = "Bronze Medal";
            }
            else{
                mp[scorecopy[i]] = to_string(i + 1);
            }
            i++;
        }
        vector<string> result;
        i = 0;
        while(i < score.size()){
            result.push_back(mp[score[i]]);
            i++;
        }
        return result;
        
    }
};