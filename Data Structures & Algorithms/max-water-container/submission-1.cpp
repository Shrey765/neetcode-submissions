class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0;
        int j = n-1;
        int vol = INT_MIN;
        while(i < j){
            int height = min(heights[i], heights[j]);
            vol = max(vol, height*(j-i));

            if(heights[i] <= heights[j]){
                i++;
            }

            else {
                j--;
            }
        }

        return vol;
    }
};
