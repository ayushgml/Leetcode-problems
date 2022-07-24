class Solution {
public:
    vector<vector<int>> t;
    
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return false;
        sum/=2;
        t.clear();
        t.resize(n+1, vector<int> (sum+1, -1));
        return subsetSum(nums, n, 0, sum);
    }
    
    bool subsetSum(vector<int>& nums, int n, int pos, int sum){
        if(sum==0) return true;
        else if(pos>=n || sum<0) return false;
        if(t[pos][sum]!=-1) return t[pos][sum];
        return t[pos][sum] = subsetSum(nums, n, pos+1, sum-nums[pos]) || subsetSum(nums, n, pos+1, sum);
    }
};