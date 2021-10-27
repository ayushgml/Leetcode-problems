class Solution {
public:
    bool isPowerOfThree(int n) {
        if((n==1) || (n==3))
            return true;
        if(n>3){
            if((isPowerOfThree(n/3)) && (n%3==0))
                return true;
        }
        return false; 
    }
};


