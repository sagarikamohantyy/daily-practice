class Solution {
    public int missingNumber(int[] nums) {
        int n=nums.length;
        int sum=0, arrSum=0;
        for(int i=0; i<=n; i++){
            sum=sum+i;
        }
        for(int j=0; j<n; j++){
            arrSum=arrSum+nums[j];
        }
        return sum-arrSum;
    }
}