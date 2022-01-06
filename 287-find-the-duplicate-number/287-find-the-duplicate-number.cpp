class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> ump;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]++;
        }
        for(int i=0;nums.size();i++){
            if(ump[nums[i]]>1)
                return nums[i];
        }
        return 0;
    }
};