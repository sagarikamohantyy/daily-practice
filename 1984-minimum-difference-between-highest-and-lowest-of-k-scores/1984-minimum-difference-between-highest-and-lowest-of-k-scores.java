class Solution {
    public int minimumDifference(int[] nums, int k) {
        if(k==0) return 0;
        Arrays.sort(nums);
        int ans=Integer.MAX_VALUE;
        int n=nums.length;
        for(int i=0; i+k-1<n; i++){
            ans=Math.min(ans, nums[i+k-1]-nums[i]);
        }   
        return ans;
    }
}