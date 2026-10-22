class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> mp;
        int n = strs.size();

        for(int i = 0; i < n; i++){
            int m = strs[i].size();
            vector<int> temp(26, 0);
            for(int j = 0; j < m; j++){
                temp[strs[i][j] - 'a']++;
            }

            mp[temp].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for(auto item : mp){
            ans.push_back(item.second);
        }

        return ans;
    }
};
