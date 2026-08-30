class Solution {
    public int minimumDeletions(int[] nums) {
        int n=nums.length;
        int i=0;
        int count=0;
        int small=nums[0], large=nums[0];
        int smIdx=0, laIdx=0;
        if(n==1) return 1;

        while(i<n){
            if(small>nums[i]){
                small=nums[i];
                smIdx=i;
            }
            if(large<nums[i]){
                large=nums[i];
                laIdx=i;
            }
            i++;
        }

        if(smIdx>laIdx){
            int temp=smIdx;
            smIdx=laIdx;
            laIdx=temp;
        }
        int ans1=laIdx+1;
        int ans2=n-smIdx;
        int ans3=(smIdx+1)+(n-laIdx);
        return Math.min(ans1, Math.min(ans2, ans3));
    }
}