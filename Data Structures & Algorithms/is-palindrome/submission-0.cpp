class Solution {
public:
    bool valid(char ch){
        return ((ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'));
    }
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while(i <= j){
            while(i < j && !valid(s[i])) i++;
            while(i < j && !valid(s[j])) j--;
            if(tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }

        return true;
    }
};
