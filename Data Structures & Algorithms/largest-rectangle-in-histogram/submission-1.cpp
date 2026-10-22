class Solution {
public:
    vector<int> nse(vector<int> &heights){
        int n = heights.size();
        vector<int> nextSmallest(n, n);
        stack<int> st;

        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }

            if(!st.empty()){
                nextSmallest[i] = st.top();
            }else{
                nextSmallest[i] = n;
            }

            st.push(i);
        }

        return nextSmallest;
    }

    vector<int> pse(vector<int> &heights){
        int n = heights.size();
        vector<int> prevSmallest(n, -1);
        stack<int> st;

        for(int i = 0; i < n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }

            if(!st.empty()){
                prevSmallest[i] = st.top();
            }else{
                prevSmallest[i] = -1;
            }

            st.push(i);
        }

        return prevSmallest;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nextSmallest = nse(heights);
        vector<int> prevSmallest = pse(heights);

        int ans = 0;

        for(int i = 0; i < n; i++){
            ans = max(ans, heights[i] * (nextSmallest[i] - prevSmallest[i] - 1));
        }

        return ans;
    }
};
