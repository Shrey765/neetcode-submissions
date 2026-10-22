class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> st;
        for(int i = 0; i < n; i++){
            if(tokens[i] == "+" || 
            tokens[i] == "-" ||
            tokens[i] == "*" ||
            tokens[i] == "/"){
                int opr1 = st.top();
                st.pop();
                int opr2 = st.top();
                st.pop();
                if(tokens[i] == "+") st.push(opr2+opr1);
                else if(tokens[i] == "-") st.push(opr2-opr1);
                else if(tokens[i] == "*") st.push(opr2*opr1);
                else if(tokens[i] == "/") st.push(opr2/opr1);
            }

            else{
                int val = stoi(tokens[i]);
                st.push(val);
            }
        }

        return st.top();
    }
};
