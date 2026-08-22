class Solution {
    public boolean checkDivisibility(int n) {
        int sum=0, prod=1, ans=0;
        int num=n;
        while(num>0){
            int rem=num%10;
            sum= sum+rem;
            prod= prod*rem;
            num=num/10;
        }
        if((n%(sum+prod)==0)){
            return true;
        }
        else{
            return false;
        }
    }
}