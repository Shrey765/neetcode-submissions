class Solution {
    public int maxProfit(int[] prices) {
        int n = prices.length;

        int prevBuy = 0; int prevSell = prices[n-1];

        for(int i = n-2; i >= 0; i--){
            prevBuy = Math.max(-prices[i] + prevSell, 0 + prevBuy);
            prevSell = Math.max(prices[i] + prevBuy, 0 + prevSell);
        }

        return prevBuy;
    }
}