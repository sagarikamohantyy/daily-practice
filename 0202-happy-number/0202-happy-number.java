class Solution {
    int fun(int n){
        int sum=0;
        while(n>0){
            int dig=n%10;
            sum= sum+ dig*dig;
            n/=10;
        }
        return sum;
    }
    public boolean isHappy(int n) {
        int slow=n;
        int fast=n;
        while(fast!=1){
            slow= fun(slow);
            fast= fun(fast);
            fast= fun(fast);

            if(fast==slow && fast!=1){
                return false;
            }
        }
        return true;
    }
}