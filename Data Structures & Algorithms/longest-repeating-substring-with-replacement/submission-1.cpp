class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int i = 0, j = 0;
        int maxLen = 0;
        int maxFreq = 0;
        vector<int> alpha(26, 0);

        while(j < n){
            int ch = s[j]-'A';
            alpha[ch]++;
            maxFreq = max(maxFreq, alpha[ch]);
            maxLen = j - i + 1;

            if(maxLen - maxFreq > k){
                ch = s[i]-'A';
                alpha[ch]--;
                maxFreq = max(maxFreq, alpha[ch]);
                i++;
            }

            maxLen = j - i + 1;
            j++;
        }

        return maxLen;
    }
};
