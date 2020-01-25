class Solution {
public:
    int myAtoi(string str) {
        stringstream s(str);
        int ans =0;
        s >> ans;
        return ans;
    }
};