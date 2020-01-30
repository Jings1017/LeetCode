class Solution:
    def intToRoman(self, num: int) -> str:
        thousands = ['','M','MM','MMM']
        hundreds  = ['','C','CC','CCC','CD','D','DC','DCC','DCCC','CM']
        tens      = ['','X','XX','XXX','XL','L','LX','LXX','LXXX','XC']
        ones      = ['','I','II','III','IV','V','VI','VII','VIII','IX']

        r1 = thousands[num//1000]
        r2 = hundreds[(num%1000)//100]
        r3 = tens[(num%100)//10]
        r4 = ones[num%10]
        result = r1+r2+r3+r4
        return result