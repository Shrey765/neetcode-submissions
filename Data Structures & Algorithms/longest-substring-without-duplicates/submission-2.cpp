class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char, int> mp;

        int i = 0, j = 0;
        int maxLen = 0;

        while(j < n){
            if(mp.find(s[j]) != mp.end()){
                if(mp[s[j]] >= i) i = mp[s[j]]+1;
            }

            maxLen = max(maxLen, j-i+1);
            mp[s[j]] = j;
            j++;
        }

        return maxLen;
    }
};
