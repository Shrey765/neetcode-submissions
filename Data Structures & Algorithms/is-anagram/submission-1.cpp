class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        vector<int> alpha(26, 0);

        for(int i = 0; i < n; i++){
            int num = s[i]-'a';
            alpha[num]++;
        }

        for(int i = 0; i < m; i++){
            int num = t[i]-'a';
            if(alpha[num] == 0) return false;
            alpha[num]--;
        }

        for(int i = 0; i < 26; i++){
            if(alpha[i] != 0) return false;
        }
        return true;
    }
};
