class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> ump;
        for(int i=0;i<nums.size();i++){
            if(ump[nums[i]]<2)
                ump[nums[i]]++;
            else{
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};