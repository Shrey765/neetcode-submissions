class Solution {
public:
    vector<int> nge(vector<int> &temperatures){
        int n = temperatures.size();
        stack<pair<int, int>> st;
        vector<int> temp(n, 0);
        for(int i = n-1; i >= 0; i--){
            if(st.empty()){
                temp[i] = i;
                st.push({temperatures[i], i});
            }else{
                while(!st.empty() && temperatures[i] >= st.top().first){
                    st.pop();
                }

                if(st.empty()){
                    temp[i] = i;
                }else{ 
                    temp[i] = st.top().second;
                }
                st.push({temperatures[i], i});
            }

        }

        return temp;
    }
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();

        vector<int> ans(n, 0);

        vector<int> temp = nge(temperatures);

        for(int i = 0; i < n; i++){
            ans[i] = temp[i] - i;
        }

        return ans;
    }
};
