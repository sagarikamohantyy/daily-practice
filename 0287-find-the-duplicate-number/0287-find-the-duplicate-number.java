class Solution {
    public int findDuplicate(int[] nums) {
        int slow= nums[0];
        int fast= nums[0];
        int temp= nums[0];

        while(true){
            slow=nums[slow];
            fast=nums[fast];
            fast=nums[fast];

            if(slow==fast){
                while(temp!=slow){
                    temp=nums[temp];
                    slow=nums[slow];
                }
                return temp;
            }
        }
    }
}