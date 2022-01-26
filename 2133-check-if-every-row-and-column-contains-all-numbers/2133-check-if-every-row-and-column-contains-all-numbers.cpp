class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_set<int> us;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                us.insert(matrix[i][j]);
            }
            if(us.size()!=matrix.size())
                return false;
            else
                us.clear();
        }
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                us.insert(matrix[j][i]);
            }
            if(us.size()!=matrix.size())
                return false;
            else
                us.clear();
        }
        return true;
    }
};