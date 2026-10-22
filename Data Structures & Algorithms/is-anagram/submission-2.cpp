class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> temp(26, 0);
        for(char c : s){
            int ch = c-'a';
            temp[ch]++;
        }

        for(char c : t){
            int ch = c-'a';
            temp[ch]--;
        }

        for(int i = 0; i < 26; i++){
            if(temp[i] != 0){
                return false;
            }
        }

        return true;
    }
};
