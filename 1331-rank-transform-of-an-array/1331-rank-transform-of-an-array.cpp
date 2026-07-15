class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       vector<int> arr2=arr;
       sort(arr2.begin(),arr2.end()) ;
       unordered_map<int,int> mp;
       int i=0;
       int n=arr2.size();
       int j = 0;
       while( i<n){
        if(mp.count(arr2[i])){

            i++;
        }
        else{
            mp[arr2[i]]= ++j;
            i++;
        }
       }

       i = 0;
       while(i < n){
            arr[i] = mp[arr[i]];
            i++;
       }
       return arr;
    }
};