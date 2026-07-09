class Solution {
    public long sumAndMultiply(int n) {
        int i=0;
        long sum=0;
        long mul=0;
        long ten=1;
        while(n>0){
            long r=n%10;
            
            if(r!=0){
                mul=r*ten+mul;
                ten=ten*10;
                sum+=r;
            }
            n=n/10;
            i++;
        }
        return mul*sum;
    }
}