class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        int longest = 0;
        for(int i = 0; i < n; i++){
            st.insert(nums[i]);
        }

        for(auto it : st){
            if(st.find(it-1) == st.end()){
                int count = 1;
                int num = it;
                while(st.find(num+1) != st.end()){
                    count = count + 1;
                    num = num + 1;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};
