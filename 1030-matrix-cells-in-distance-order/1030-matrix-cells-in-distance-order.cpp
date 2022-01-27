class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<pair<int,pair<int,int>>> v;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                int dist=abs(i-rCenter) + abs(j-cCenter);
                v.push_back(make_pair(dist,make_pair(i,j)));
            }
        }
        sort(v.begin(),v.end());
        vector<vector<int>> vect(rows*cols, vector<int> (2,0));
        for(int i=0;i<v.size();i++){
            vect[i][0]=(v[i].second.first);
            vect[i][1]=(v[i].second.second);
        }
        return vect;
    }
};