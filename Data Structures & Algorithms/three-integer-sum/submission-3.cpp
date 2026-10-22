class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        sort(nums.begin(), nums.end());
        

        vector<vector<int>> ans;
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
                    k++;
                    j--;
                    while(k < j && nums[k] == nums[k-1]) k++;
                    while(k < j && nums[j] == nums[j+1]) j--;
                }

                else if(nums[i] + nums[k] + nums[j] < 0){
                    k++;
                }
                else{
                    j--;
                }
            }
            i++;
        }

        return ans;
    }
};
