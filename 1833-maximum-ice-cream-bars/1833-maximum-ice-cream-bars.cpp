class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        sort(costs.begin(), costs.end());
        int i = 0;
        int cp = 0;
        while(i < n){
            if(costs[i] <= coins){
                cp++;
                coins = coins - costs[i];
            }
            i++;
            
        }
        return cp;
    }
};


// i
// 0 1 2 3 4
// 1 3 2 4 1

// i
// 0 1 2 3 4
// 1 1 2 3 4