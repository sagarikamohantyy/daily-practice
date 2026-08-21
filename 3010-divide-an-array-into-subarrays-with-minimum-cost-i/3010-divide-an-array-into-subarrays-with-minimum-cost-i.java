class Solution {
    public int minimumCost(int[] nums) {
        int min2=Integer.MAX_VALUE, min3=Integer.MAX_VALUE;
        for(int i=1; i<nums.length; i++){
            if(nums[i]<=min2){
                    min3=min2;
                    min2=nums[i];
            }
            else if(nums[i]<=min3){
                min3=nums[i];
            }
        }
        return nums[0]+min2+min3;
    }
}