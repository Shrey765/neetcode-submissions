class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int i = 0;
        int j = 0;
        int maxFreq = 0;
        int maxLen = 0;
        unordered_map<char, int> mp;
        while(j < n){
            mp[s[j]]++;
            maxFreq = max(maxFreq, mp[s[j]]);
            maxLen = j - i + 1;

            if(maxLen - maxFreq > k){
                mp[s[i]]--;
                maxFreq = max(maxFreq, mp[s[i]]);
                i++;
            }
            maxLen = j - i + 1;
            j++;
        }

        return maxLen;
    }
};
