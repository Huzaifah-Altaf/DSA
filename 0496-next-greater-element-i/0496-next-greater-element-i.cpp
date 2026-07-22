class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums2.size());
        stack<int> st;
        for(int i = nums2.size() - 1; i >= 0; i--){
            if(st.empty()){
                 st.push(nums2[i]);
                 ans[i] = -1;
            }
            
                
                    while(!st.empty() && st.top() <= nums2[i]){
                        st.pop();
                    }
                    if(st.empty()){
                        ans[i] = -1;
                        st.push(nums2[i]);
                    } 
            
                if(!st.empty() && st.top() > nums2[i]){
                    ans[i] = st.top();
                    st.push(nums2[i]);
                }    
        }
        unordered_map<int, int> mp;
        int i = 0;
        while(i < nums2.size()){
            mp.insert({nums2[i], ans[i]});
            i++;
        }
        i = 0;
        while(i < nums1.size()){
            nums1[i] = mp[nums1[i]];
            i++;
        }

       
        return nums1;
    }
};