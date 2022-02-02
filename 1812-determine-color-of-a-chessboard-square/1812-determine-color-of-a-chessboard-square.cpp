class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if(int(coordinates[0])%2==0 ^ int(coordinates[1])%2==0)
            return true;
        return false;
    }
};