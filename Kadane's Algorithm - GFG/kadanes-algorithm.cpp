// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        int maxsum = -9223372036854775808;
        int cursum = 0;
        if(*max_element(arr, arr + n) > 0){
            for(int i=0;i<n;i++){
                cursum += arr[i];
                if(cursum > maxsum)
                    maxsum = cursum;
                if(cursum < 0)
                    cursum = 0;
            }
        }else{
            maxsum = *max_element(arr, arr + n);
        }
        return maxsum;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends