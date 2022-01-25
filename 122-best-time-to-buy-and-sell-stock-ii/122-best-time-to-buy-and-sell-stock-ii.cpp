class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=1,profit=0,n = prices.size();
        while(j<n){
            if(prices[j]>prices[i])
                profit+=prices[j]-prices[i];
            i++;j++;
        }
        return profit;
    }
};