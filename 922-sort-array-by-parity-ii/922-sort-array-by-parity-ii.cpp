class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(i%2==0 && j%2!=0){
                    if(nums[i]%2!=0 && nums[j]%2==0)
                        swap(nums[i],nums[j]);
                }
                else if(i%2!=0 && j%2==0){
                    if(nums[i]%2==0 && nums[j]%2!=0)
                        swap(nums[i],nums[j]);
                }
            }
        }
        return nums;
    }
};