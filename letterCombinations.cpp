class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) {
            return vector<string>();
        }
        
        map<char, string> mapping {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        
        int combinations = 1;
        for (int i = 0; i < digits.size(); i++) {
            // precount the number of possible combinations.
            combinations *= mapping[digits[i]].size();
        }
        
        vector<string> ans;
        
        for (int i=0; i<combinations; i++) {
            string word = "";
            int temp = combinations;
            for (int j=0; j<digits.size(); j++) {
                string comb = mapping[digits[j]];
                temp /= comb.size();
                word += comb[(i % (temp*comb.size())) / temp];
            }
            ans.push_back(word);
        }
        return ans;
    }
};