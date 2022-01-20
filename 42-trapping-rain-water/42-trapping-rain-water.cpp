class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int res = 0;
        int lMax[n], rMax[n];
        lMax[0]=height[0];
        for(int i=1;i<n;i++)
            lMax[i]=max(height[i],lMax[i-1]);
        rMax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
            rMax[i]=max(height[i],rMax[i+1]);
        for(int i=1;i<n-1;i++)
            res+=(min(lMax[i],rMax[i])-height[i]);
        
        return res;
    }
};