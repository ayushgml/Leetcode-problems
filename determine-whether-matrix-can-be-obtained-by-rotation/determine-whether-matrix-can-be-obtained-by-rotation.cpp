class Solution {
public:
    bool check(vector<vector<int>>& mat, vector<vector<int>>& target)
    {
        int n=mat.size();
        for(int i = 0; i < n / 2; i++) {
            for(int j = i; j < n - i - 1; j++) {
                int temp = mat[i][j];
                mat[i][j] = mat[j][n - 1 - i];
                mat[j][n - 1 - i] = mat[n - 1 - i][n - 1 - j];
                mat[n - 1 - i][n - 1 - j] = mat[n - 1 - j][i];
                mat[n - 1 - j][i] = temp;
            }
        }
        
        for(int i = 0;i < n; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j]!=target[i][j])
                    return false;
            }
        }
        return true;   
    }
    
    bool check2(vector<vector<int>>& mat, vector<vector<int>>& target){
        int n=mat.size();
        for(int i = 0;i < n; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j]!=target[i][j])
                    return false;
            }
        }
        return true;
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(check2(mat,target))
            return true;
        
        for(int i = 0; i < 3; i++){
            if(check(mat,target))
                return true;
        }
        return false;
    }
};