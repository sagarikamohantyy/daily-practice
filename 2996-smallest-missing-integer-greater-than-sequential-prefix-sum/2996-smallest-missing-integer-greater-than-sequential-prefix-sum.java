class Solution {
    public int missingInteger(int[] nums) {
        int n=nums.length;
        int sum=nums[0], i=1;
        while(i<n && nums[i]==nums[i-1]+1){
            sum+=nums[i];
            i++;
        }

        while(true){
            boolean mini= false;
            for(int j=0; j<n; j++){
                if(sum==nums[j]){
                    mini= true;
                    break;
                }
            }
            if(!mini){
                return sum;
            }
            sum++;
        }
    }
}