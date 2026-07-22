class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(heights.size());
        vector<int> right(heights.size());
        stack<pair<int , int>> st;
        // left side
        for(int i = heights.size() - 1; i >= 0; i--){
            if(st.empty()){
                left[i] = n;
                st.push({heights[i], i});
            }
            while(!st.empty() && st.top().first >= heights[i]){
                st.pop();
            }
            if(st.empty()){
                left[i] = n;
                st.push({heights[i], i});
            }
            if(!st.empty() && st.top().first < heights[i]){
                left[i] = st.top().second;
               st.push({heights[i], i});
            }
        }
        //right side
        stack<pair<int , int>> st1;
        for(int i = 0; i < heights.size(); i++){
            if(st1.empty()){
                right[i] = -1;
                st1.push({heights[i], i});
            }
            while(!st1.empty() && st1.top().first >= heights[i]){
                st1.pop();
            }
            if(st1.empty()){
                right[i] = -1;
                st1.push({heights[i], i});
            }
            if(!st1.empty() && st1.top().first < heights[i]){
                right[i] = st1.top().second;
                st1.push({heights[i], i});
            }
        }
        int ans = 0;
        for(int j = 0; j < n; j++){
            ans = max(ans, heights[j] * (left[j] - right[j] - 1));
        }
        return ans;


    }
};