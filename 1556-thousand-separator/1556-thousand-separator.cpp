class Solution {
public:
    string thousandSeparator(int n) {
        string num = to_string(n);
        for(int i=num.length()-1;i>=0;i--){
            if(i!=0 && i%3==0)
                num.insert(num.length()-i,".");
        }
        return num;
    }
};