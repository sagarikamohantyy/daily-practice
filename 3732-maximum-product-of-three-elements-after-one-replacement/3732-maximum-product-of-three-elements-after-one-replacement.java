class Solution {
    public long maxProduct(int[] nums) {
        long max1=Long.MIN_VALUE, max2=Long.MIN_VALUE, max3=Long.MIN_VALUE;
        long min1=Long.MAX_VALUE, min2=Long.MAX_VALUE;
        
        for(int i=0; i<nums.length; i++){
            if(nums[i]>=max1){
                max3=max2;  max2=max1; max1=nums[i];
            }
            else if(nums[i]>=max2){
                max3=max2;  max2=nums[i];
            }
            else if(nums[i]>=max3){
                max3=nums[i];
            }

            if(nums[i]<=min1){
                min2=min1;  min1=nums[i];
            }
            else if(nums[i]<min2){
                min2=nums[i];
            }
        }
        long mul1=max1*max2*100000;
        long mul2=min1*min2*(100000);
        long mul3=max1*min1*(-100000);
        long mul= Math.max(mul1, Math.max(mul3, mul2));

        return mul;
    }
}