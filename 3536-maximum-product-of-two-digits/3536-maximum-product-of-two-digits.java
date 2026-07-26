class Solution {
    public int maxProduct(int n) {
        int count=0, num=n;
        while(num>0){
            count++;
            num=num/10;
        }
        if(count==0) return 0;
        if(count==1) return n;
        num= n;
        
        int[] nums= new int[count];
        for(int i=0; i<nums.length; i++){
            int ele=num%10;
            num=num/10;
            nums[i]=ele;
        }

        Arrays.sort(nums);
        int len= nums.length;

        return nums[len-1]*nums[len-2];
    }
}