class Solution {
public:
    int addIt(string s){
        unordered_map<char,int> ump;
        ump['0']=0;
        ump['1']=1;
        ump['2']=2;
        ump['3']=3;
        ump['4']=4;
        ump['5']=5;
        ump['6']=6;
        ump['7']=7;
        ump['8']=8;
        ump['9']=9;
        int sum=0;
        for(int i=0;i<s.size();i++){
            sum+=ump[s[i]];
        }
        return sum;
    }
    int addDigits(int num) {
        int sum = num;
        string s = to_string(num);
        while(s.length()>1){
            sum = addIt(s);
            s = to_string(sum);
        }
        return sum;
    }
};