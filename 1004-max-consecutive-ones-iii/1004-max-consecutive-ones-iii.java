class Solution {
    public int longestOnes(int[] nums, int k) {
        int low=0, res=Integer.MIN_VALUE;
        int[] arr= new int[2];

        for(int high=0; high<nums.length; high++){
            arr[nums[high]]++;
            int len= high-low+1;
            int diff= arr[0];

            while(diff>k){
                arr[nums[low]]--;
                low++;
                len= high-low+1;
                diff= arr[0];
            }
            len= high-low+1;
            res= Math.max(len, res);
        }
        return res;
    }
}