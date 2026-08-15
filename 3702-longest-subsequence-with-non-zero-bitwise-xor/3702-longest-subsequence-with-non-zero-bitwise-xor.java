class Solution {
    public int longestSubsequence(int[] nums) {
        int xor=0, len=nums.length;
        int res=0;
        for(int high=0; high<len; high++){
            xor^=nums[high];
            
            if(nums[high]!=0){
                res++;
            }
        }
        if(res==0){
                return 0;
        }
        if(xor!=0){
                return len;
        }
        return len-1;
    }
}