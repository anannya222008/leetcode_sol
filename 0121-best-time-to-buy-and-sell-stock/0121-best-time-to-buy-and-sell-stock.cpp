class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sz = prices.size();
        int maxProfit = 0 , bestBuy = prices[0];
        for(int i=1;i<sz;i++) {
            if(prices[i] > bestBuy) {
                maxProfit = max(maxProfit,prices[i]-bestBuy);
            }    
            bestBuy = min(bestBuy,prices[i]);
        }   
        return maxProfit;                             
    }
};