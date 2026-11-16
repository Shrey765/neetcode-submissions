class Solution {

    int findMaxProfit(int day, String status, int[] prices, int[][] visited){
        if(day == prices.length-1){
            if(status == "buy") return 0;
            else if(status == "sell") return prices[day];
        }

        if(status == "buy" && visited[day][0] != Integer.MIN_VALUE){
            return visited[day][0];
        }

        else if(status == "sell" && visited[day][1] != Integer.MIN_VALUE){
            return visited[day][1];
        }

        if(status == "buy"){
            int buy = -prices[day] + findMaxProfit(day+1, "sell", prices, visited);
            int notBuy = 0 + findMaxProfit(day+1, "buy", prices, visited);
            return visited[day][0] = Math.max(buy, notBuy);
        }else{
            int sell = prices[day] + findMaxProfit(day+1, "buy", prices, visited);
            int notSell = 0 + findMaxProfit(day+1, "sell", prices, visited);
            return visited[day][1] = Math.max(sell, notSell);
        }
    } 

    public int maxProfit(int[] prices) {
        int n = prices.length;
        int[][] found = new int[n][2];

        for(int i = 0; i < n; i++){
            Arrays.fill(found[i], Integer.MIN_VALUE);
        }

        return findMaxProfit(0, "buy", prices, found);
    }
}