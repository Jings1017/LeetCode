class Solution {
public:
    int romanToInt(string s) 
    {
        int result = 0;
        for (int i = 0; i < s.length (); i++)
        {
            if (i < s.length ()-1 && getNum (s[i]) < getNum (s[i+1]))
                result -= getNum (s[i++]);
            result += getNum (s[i]);  
        }
        return result;
    }

    int getNum (char c) 
    {
        if (c == 'M')   return 1000;
        if (c == 'D')   return 500;
        if (c == 'C')   return 100;
        if (c == 'L')   return 50;
        if (c == 'X')   return 10;
        if (c == 'V')   return 5;
        if (c == 'I')   return 1;
        return 1;
    }
};