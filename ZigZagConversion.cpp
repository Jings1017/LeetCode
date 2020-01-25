class Solution {
public:
    string convert(string &s, int numRows) {
        int n = s.length();
        if (n <= numRows || numRows == 1) return s;
        
        string result = "";
        int loop = 2 * numRows - 2;
        for (int i = 0; i < numRows; i++) {
            for (int j = i; j < n; j += loop) {
                result.push_back(s[j]);
                if (i % (numRows - 1) != 0 && j + loop - 2 * i < n)
                    result.push_back(s[j + loop - 2 * i]);
            }
        }
        return result;
    }
};