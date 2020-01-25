class Solution {
public:
	string getres(string& s, int left, int right){
		string res;
		while(left>=0 && right<s.size() && s[left]==s[right]){
            // substring
			res=s.substr(left,right-left+1);
			left--;
			right++;
		}
		return res;
	}

	string longestPalindrome(string s) {
		if(s.size()==0 || s.size()==1) return s;
		
        int max=0;
		string ans;
		for(int i=0;i<s.size();i++){
			string temp = getres(s,i,i);
			if(temp.size()>max){
				max=temp.size();
				ans=temp;
			}

			string temp2=getres(s,i,i+1);
			if(temp2.size()>max){
				max=temp2.size();
				ans=temp2;
			}
		}

		return ans;
	}
};