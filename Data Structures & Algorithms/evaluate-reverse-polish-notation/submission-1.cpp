class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        int num = 0;

        stack<int> st;

        for(string ch : tokens){
            if(ch == "+"){
                int num1 = st.top(); st.pop();
                int num2 = st.top(); st.pop();
                int num3 = num2 + num1;
                st.push(num3);
            }

            else if( ch == "-"){
                int num1 = st.top(); st.pop();
                int num2 = st.top(); st.pop();
                int num3 = num2 - num1;
                st.push(num3);
            }

            else if(ch == "*"){
                int num1 = st.top(); st.pop();
                int num2 = st.top(); st.pop();
                int num3 = num2 * num1;
                st.push(num3);
            }

            else if( ch == "/"){
                int num1 = st.top(); st.pop();
                int num2 = st.top(); st.pop();
                int num3 = num2 / num1;
                st.push(num3);
            }

            else{
                int num = stoi(ch);
                st.push(num);
            }
        }

        return st.top();
    }
};
