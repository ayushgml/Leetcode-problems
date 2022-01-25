class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int i=0,j=1;
        while(j<prices.size()){
            if(prices[j]>prices[i])
                profit+=prices[j]-prices[i];
            i++;j++;
        }
        return profit;
    }
};