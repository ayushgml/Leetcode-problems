class Solution {
    public int threeSumClosest(int[] nums, int target) {
        int sum = nums[0] + nums[1] + nums[nums.length-1];
        Arrays.sort(nums);
        
        for(int i=0;i<nums.length-2;i++){
            int j = i+1;
            int k = nums.length-1;
            
            while(j<k){
                int curr_sum = nums[i] + nums[j] + nums[k];
                if(curr_sum>target){
                    k--;
                }else{
                    j++;
                }
                
                if(Math.abs(curr_sum-target) < Math.abs(sum-target)) sum = curr_sum;
            }
        }
        return sum;
        
    }
}