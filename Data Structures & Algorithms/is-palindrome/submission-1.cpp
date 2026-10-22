class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(char ch : s){
            if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
                temp += ch;
            }

            else if(ch >= 'A' && ch <= 'Z'){
                temp += (ch - 'A' + 'a');
            }
        }

        int i = 0;
        int j = temp.length()-1;

        while(i <= j){
            if(temp[i] != temp[j]) return false;
            i++;
            j--;
        }

        return true;
    }
};
