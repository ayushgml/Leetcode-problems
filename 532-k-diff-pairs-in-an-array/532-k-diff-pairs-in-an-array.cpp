class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        map<pair<int,int>,int> ump;
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]-nums[i]==k && ump[make_pair(nums[i], nums[j])]==0){
                    ump[make_pair(nums[i], nums[j])]=1;
                    count++;
                }       
            }
        }
        return count;
    }
};