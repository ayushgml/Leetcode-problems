class Solution {
public:
    int arrsum(vector<int>& arr, int startindex, int endindex){
        int sum=0;
        for(int i=startindex;i<endindex+1;i++){
            sum+=arr[i];
        }
        return sum;
    }
    
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res = 0;
        for(int i=0;i<arr.size();i++){
            int j = i;
            while(j<arr.size()){
                res += arrsum(arr,i,j);
                j += 2;
            }        
        }    
        return res;
    }
};