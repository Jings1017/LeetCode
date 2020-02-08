class Solution {
    public double myPow(double x, int n) {  
        if(n == Integer.MIN_VALUE && x > 1) return 0;
        if(n < 0 ) {
            n *= -1;
            return 1/myPowRec(x,n);
        } 
        return myPowRec(x,n);
    }
    
    public double myPowRec(double x, int n) {
        if(n == 0) return 1;
        double temp = myPowRec(x, n/2);
        if(n%2 == 0)
            return  temp*temp;
        else
            return x * temp*temp;
    }
}