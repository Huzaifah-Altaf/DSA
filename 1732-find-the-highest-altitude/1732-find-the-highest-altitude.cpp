class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitude(gain.size() + 1);
        int i = 1;
        int highestalt = 0;
        altitude[0] = 0;
        while(i < gain.size() + 1){
            altitude[i] = altitude[i - 1] + gain[i - 1];
            highestalt = max(altitude[i], highestalt);
            i++;
        }
        
        return highestalt;

    }
};