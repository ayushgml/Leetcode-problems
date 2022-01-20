class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        while(stones.size()>1){
            int x = stones[stones.size()-1] - stones[stones.size()-2];
            stones.erase(stones.end()-2,stones.end());
            stones.push_back(x);
            sort(stones.begin(),stones.end());
        }
        return (stones[0]);
    }
};