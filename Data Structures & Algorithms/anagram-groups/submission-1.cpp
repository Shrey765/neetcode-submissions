class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        int n = strs.size();
        map<vector<int>, vector<string>> mp;

        for(int i = 0; i < n; i++){
            vector<int> temp(26, 0);
            string str = strs[i];
            for(int j = 0; j < str.length(); j++){
                temp[str[j]-'a']++;
            }

            mp[temp].push_back(str);
        }

        for(const auto &pair : mp){
            res.push_back(pair.second);
        }

        return res;
    }
};
