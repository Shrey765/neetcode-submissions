class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        int i = 0;
        while(i < n-2){
            if(i > 0 && nums[i] == nums[i-1]){
                i++;
                continue;
            }
            int k = i+1;
            int j = n-1;
            while(k < j){
                if(nums[i] + nums[k] + nums[j] == 0){
                    ans.push_back({nums[i], nums[k], nums[j]});
                    k++;j--;
                    while(k <j && nums[k]==nums[k-1]) k++;
                    while(k <j && nums[j]==nums[j+1]) j--;
                }else if(nums[i] + nums[k] + nums[j] > 0){
                    j--;
                }else{
                    k++;
                }
            }
            i++;
        }

        return ans;
    }
};
