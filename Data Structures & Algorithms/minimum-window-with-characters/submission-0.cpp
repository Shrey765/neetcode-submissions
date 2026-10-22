class Solution {
public:
    string minWindow(string s, string t) {
        int m = t.length(), n = s.length();
        if(n < m) return "";
        unordered_map<char, int> mp;
        for(int i = 0; i < m; i++){
            mp[t[i]]++;
        }

        int i = 0, j = 0;
        int minLen = INT_MAX, count = m, start_indx = 0;
        while(j < n){
            mp[s[j]]--;
            if(mp[s[j]] >= 0) count--;

            while(count == 0){
                mp[s[i]]++;
                if(mp[s[i]] > 0){
                    count++;
                }

                if(minLen > j-i+1){
                    minLen = j-i+1;
                    start_indx = i;
                }
                i++;
            }

            j++;
        }

        return minLen == INT_MAX ? "" : s.substr(start_indx, minLen);
    }
};
