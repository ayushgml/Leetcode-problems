class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> v;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                v.push_back(mat[i][j]);
            }
        }
        if(r*c>m*n || r*c<m*n)
            return mat;
        
        vector<vector<int>> vect(r,vector<int> (c, 0));
        int k=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                vect[i][j]=v[k++];
            }
        }
        return vect;
    }
};