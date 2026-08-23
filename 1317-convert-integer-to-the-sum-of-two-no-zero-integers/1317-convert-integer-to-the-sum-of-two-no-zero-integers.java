class Solution {
    public int[] getNoZeroIntegers(int n) {
        for(int i=1; i<n; i++){
            int b=n-i;
            if(!hasZero(i) && !hasZero(b)){
                return new int[]{i, b};
            }
        }
        return new int[]{};
    }
    boolean hasZero(int x){
        while(x>0){
            if(x%10==0) return true;
            x/=10;
        }
        return false;
    }
}