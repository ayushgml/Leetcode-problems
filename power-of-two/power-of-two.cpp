class Solution {
public:
    bool isPowerOfTwo(int n) {
        if((n==1) || (n==2))
            return true;
        if(n>2){
            if((isPowerOfTwo(n/2)) && (n%2==0))
                return true;
        }
        return false;        
    }
};