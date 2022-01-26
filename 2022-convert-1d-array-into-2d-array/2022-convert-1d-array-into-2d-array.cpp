class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> v(m,vector<int> (n,0));
        int k=0;
        if(m*n>original.size() || m*n<original.size()){
            v.clear();
            return v;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v[i][j]=original[k++];
            }
        }
        return v;
    }
};