class Solution {
public:
    vector<int> findPrefix(vector<int> &arr){
        int n = arr.size();
        vector<int> prefix(n, 0);
        prefix[0] = arr[0];
        for(int i = 1; i < n; i++){
            prefix[i] = max(prefix[i-1], arr[i]);
        }

        return prefix;
    }

    vector<int> findSuffix(vector<int> &arr){
        int n = arr.size();
        vector<int> suffix(n, 0);
        suffix[n-1] = arr[n-1];
        for(int i = n-2; i >= 0; i--){
            suffix[i] = max(suffix[i+1], arr[i]);
        }

        return suffix;
    }

    int trap(vector<int>& height) {
        int n = height.size();
        int water = 0;
        
        int leftMax = 0, rightMax = 0;
        int i = 0, j = n-1;

        while(i < j){
            if(height[i] <= height[j]){
                if(height[i] > leftMax){
                    leftMax = height[i];
                }else{
                    water += (leftMax - height[i]);
                }
                i++;
            }else{
                if(height[j] > rightMax){
                    rightMax = height[j];
                }else{
                    water += (rightMax - height[j]);
                }
                j--;
            }
        }

        return water;
    }
};
