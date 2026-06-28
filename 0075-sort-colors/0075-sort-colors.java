class Solution {
    public void sortColors(int[] nums) {
        int low=0, mid=0, high=nums.length-1;
        while(mid<=high){
            if(nums[mid]==0){
                int temp1= nums[low];
                nums[low]=nums[mid];
                nums[mid]=temp1;
                low++;
                mid++;
            }
            else if(nums[mid]==2){
                int temp2= nums[high];
                nums[high]=nums[mid];
                nums[mid]=temp2;
                high--;
            }
            else if(nums[mid]==1){
                mid++;
            }
        }
    }
}