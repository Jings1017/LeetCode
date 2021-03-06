class Solution {
public:
    bool isMatch(string s, string p) 
    {
        int m=s.size();
        int n=p.size();
     
        bool dp[m+1][n+1];
        
        dp[0][0]=true;
        
        for(int i=1;i<=m;i++)
            dp[i][0]=false;
        
        for(int j=1;j<=n;j++)
        {
            if(p[j-1]!='*')
            {
                dp[0][j]=false;
            }
            else
            {
                dp[0][j]=dp[0][j-2]; 
            }
        }
        
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {  
                if(s[i-1]==p[j-1] || p[j-1]=='.') // same element  or .
                    dp[i][j]=dp[i-1][j-1]; 
                
                else if(p[j-1]=='*')
                {
                    dp[i][j]=dp[i][j-2];

                    if(s[i-1]==p[j-2] || p[j-2]=='.') // x* or .*
                       dp[i][j]= dp[i][j]||dp[i-1][j]; 
                }
                else
                    dp[i][j]=false;
            }
        }
       return dp[m][n]; 
    }
};