class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // size 1
        if(prices.size() == 1)
            return 0;   // no profit
        
        // total profit
        int profit = 0;
        // initial price of buy
        int minBuy = prices[0];
        
        // for loop on prices
        for(int i = 1; i < prices.size(); i++){
            minBuy = min(prices[i], minBuy);    // compare minimum buy
            profit = max(profit, prices[i]-minBuy);     // find max difference
        }
        
        return profit;
    }
};