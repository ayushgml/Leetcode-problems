class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int n = rectangles.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            v.push_back(*min_element(rectangles[i].begin(), rectangles[i].end()));
        }
        return (count(v.begin(), v.end(), *max_element(v.begin(), v.end())));
    }
};