class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int num2 = target-nums[i];
            if(mp.find(num2) != mp.end()){
                return {mp[num2], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};
