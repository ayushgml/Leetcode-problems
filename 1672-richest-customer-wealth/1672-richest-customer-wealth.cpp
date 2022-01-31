class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxW = 0;
        for(int i=0;i<accounts.size();i++){
            maxW=max(accumulate(accounts[i].begin(),accounts[i].end(),0),maxW);
        }
        return maxW;
    }
};