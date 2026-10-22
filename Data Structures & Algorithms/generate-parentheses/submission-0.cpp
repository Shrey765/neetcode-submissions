class Solution {
public:
    void funct(int n, int open, int close, string &temp, vector<string> &ans){
        if(open == n && open == close){
            ans.push_back(temp);
            return;
        }

        if(open < n){
            temp.push_back('(');
            funct(n, open+1, close, temp, ans);
            temp.pop_back();
        }

        if(close < open){
            temp.push_back(')');
            funct(n, open, close+1, temp, ans);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string temp = "";
        vector<string> ans;
        funct(n, 0, 0, temp, ans);
        return ans;
    }
};
