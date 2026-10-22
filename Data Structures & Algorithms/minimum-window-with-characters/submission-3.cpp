class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        int m = t.length();

        if(m > n) return "";

        unordered_map<char, int> mp;
        for(char ch : t){
            mp[ch]++;
        }

        int i = 0, j = 0;
        int minLen = INT_MAX;
        int startIndx = i;
        int count = m;

        while(j < n){
            mp[s[j]]--;
            if(mp[s[j]] >= 0) count--;

            while(count == 0){
                mp[s[i]]++;
                if(mp[s[i]] > 0) count++;

                if(minLen > j-i+1){
                    minLen = j-i+1;
                    startIndx = i;
                }
                i++;
            }
            j++;
        }

        return minLen == INT_MAX ? "" : s.substr(startIndx, minLen);    }
};
