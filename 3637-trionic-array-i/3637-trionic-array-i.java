class Solution {
    public boolean isTrionic(int[] nums) {
        int n=nums.length, p=-1,q=-1;
        if(n<3) return false;
        for(int i=1; i<n;i++){
            if(nums[i]<=nums[i-1]){
                p=i-1;  break;  
            }
        }
        if(p<=0) return false;
        for(int i=p+1; i<n; i++){
            if(nums[i]>=nums[i-1]){
                q=i-1;  break;
            }
        }
        if(p>=q|| q==n-1)return false;
        for(int i=q+1; i<n;i++){
            if(nums[i]<=nums[i-1]){
                return false;  
            }
        }
        return true;
    }
}