class Solution {
    public int nthUglyNumber(int n) {
        if(n<=0) return 0;
        if(n == 1) return n;
	    int t2 = 0, t3 = 0, t5 = 0; 
	    int k[] = new int[n];
	    k[0] = 1;
	    for(int j = 1; j < n ; j++)
	    {
	        k[j] = Math.min(k[t2]*2,Math.min(k[t3]*3,k[t5]*5));
	        if(k[j] == k[t2]*2) t2++; 
	        if(k[j] == k[t3]*3) t3++;
	        if(k[j] == k[t5]*5) t5++;
	    }
	    return k[n-1];
    }
}