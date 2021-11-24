class Solution {
public:
    int hammingDistance(int x, int y) {
        string strX = bitset<32>(x).to_string();
        string strY = bitset<32>(y).to_string();
        int num=0;
        for(int i=0;i<strX.length();i++){
            if(strX[i]!=strY[i])
                num++;
        }
        return num;
    }
};