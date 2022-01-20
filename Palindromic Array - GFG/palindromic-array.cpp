// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	int x,sum;
    	int r;
    	for(int i=0;i<n;i++){
    	    r=a[i];
    	    sum=0;
    	    while(r>0){
    	        x=r%10;
    	        sum=(sum*10)+x;
    	        r/=10;
    	    }
    	    if(a[i]==sum)
    	        continue;
    	    else
    	        return 0;
    	 }
    	 return 1;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends