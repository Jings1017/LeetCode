public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        string longestprefix = string.Empty;
        
        if (strs.Length == 0)
            return string.Empty;
        
        var currentPrefix = strs[0];
        for(int i=0; i < strs.Length; i++)
        {
            if (currentPrefix == strs[i])
                continue;            
            int j = 0;
            var newPrefix = string.Empty;
            while(j< currentPrefix.Length && j < strs[i].Length)
            {
                if (strs[i][j] == currentPrefix[j])                
                {
                    newPrefix += strs[i][j];                            
                }                       
                else
                    break;            
                j++;
            }
            currentPrefix = newPrefix;
        }
        return currentPrefix;
    }
}