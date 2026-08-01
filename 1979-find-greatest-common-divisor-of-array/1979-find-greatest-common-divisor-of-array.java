class Solution {
    public int findGCD(int[] nums) {
        Arrays.sort(nums);
        int len= nums.length;
        int res=1;
        for(int i=2; i<=nums[0];i++){
            if(nums[len-1]%i==0 && nums[0]%i==0)
                res= Math.max(i,res);
        }
        return res;
    }
}