class Solution {
    public int strStr(String hay, String ned) 
    {
        if(ned.length() == 0 || hay.equals(ned)) return 0;
        
        int hayLen = hay.length(); 
        int nedLen = ned.length();
        
        for(int i = 0; i <= hayLen - nedLen; i++) {
            if(hay.charAt(i) != ned.charAt(0)) continue;
            
            int j = 0;
            for(j = i+1; j <= nedLen+i-1; j++) {
                if(hay.charAt(j) != ned.charAt(j-i)) break;
            }

            if(j-i == nedLen) {
                return i;
            }
        }
        
        return -1;
    }
}