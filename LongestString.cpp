class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string current = "";
        string longest = "";
        
        for(int i = 0; i < s.size(); i++){
            int first = current.find_first_of(s[i]);
            if(first != string::npos){
                current.erase(0, first+1);
            }
            current += s[i];
            if (current.size() > longest.size()){
                longest = current;
            }
        }
        return longest.size();
    }
};