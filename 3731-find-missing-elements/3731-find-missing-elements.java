class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        int n=nums.length;

        List<Integer> arr= new ArrayList<>();
        Arrays.sort(nums);
        int min= nums[0], max=nums[n-1];

        for(int i=min; i<=max; i++){
            arr.add(i);
        }
        for(int i=0; i<n; i++){
            arr.remove(Integer.valueOf(nums[i]));
        }
        return arr;
    }
}