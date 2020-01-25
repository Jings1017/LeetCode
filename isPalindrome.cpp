class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int temp=x;
        unsigned int res = 0;
        while(temp>0)
        {
            int temp2 = temp%10;
            res = res*10+temp2;
            temp /= 10;
        }
        if(x==res) return true;
        else return false;
    }
};