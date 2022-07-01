class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if((int)hand.size() % groupSize != 0) return false;
        multiset<int> mst(hand.begin(),hand.end());
        while(mst.size() > 0){
            int x = *mst.begin();
            for(int i = 0; i<groupSize;i++){
                auto it = mst.find(x+i);
                if(it == mst.end()) return false;
                mst.erase(it);
            }
        }
        return true;
    }
};