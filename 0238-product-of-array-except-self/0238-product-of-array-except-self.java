class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n=nums.length;
        int mul1=1, count=0;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                count++;
                continue;
            }
            mul1*=nums[i];
        }
        int[] arr= new int[n];
        for(int j=0; j<n; j++){
            if(nums[j]!=0 && count==0)
                arr[j]=mul1/nums[j];    
            else if(nums[j]==0 && count==1)
                arr[j]=mul1 ;
            else
                arr[j]=0;
        }
        return arr;
    }
}