class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i =0;
        int j = 1;
        int maxProfit = 0;

        while(j < n){
            if(prices[i] < prices[j]){
                maxProfit = max(maxProfit, prices[j]-prices[i]);
            }else{
                 i = j;
            }

            j++;
        }

        return maxProfit;
    }
};
