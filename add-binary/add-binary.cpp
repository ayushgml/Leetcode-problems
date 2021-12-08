class Solution {
public:
    string addBinary(string a, string b) {
        string s;
        int i = (int) a.size() - 1;
        int j = (int) b.size() - 1;
        int carry = 0;
        do {
            int ai = i >= 0 ? a[i--] - '0' : 0;
            int bj = j >= 0 ? b[j--] - '0' : 0;
            int sum = ai + bj + carry;
            s.push_back((sum & 1) + '0');
            carry = sum >> 1;
        } while (i >= 0 || j >= 0 || carry > 0);
        reverse(s.begin(), s.end());
        return s;
    }
};