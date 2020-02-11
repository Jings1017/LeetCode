class Solution {
    public boolean isValid(String s) {
        Stack<Character> p =  new Stack<Character>();
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='('||s.charAt(i)=='['||s.charAt(i)=='{')
            {
                p.push(s.charAt(i));
            }
            else
            {
                if(p.isEmpty())
                {
                    return false;
                }
                else 
                {
                    if(s.charAt(i)==')' && p.pop()!='(')
                        return false;
                    else if(s.charAt(i)==']'&& p.pop()!='[')
                        return false;
                    else if(s.charAt(i)=='}'&& p.pop()!='{')
                        return false;
                }
            }
        } 
        if(p.isEmpty())
        {
            return true;
        }
        return false;
    }
}