class Solution {
    public int maxSubarrayLength(int[] nums, int k) {
        HashMap<Integer, Integer> map= new HashMap<>();
        int low=0, n=nums.length, res=0;
        for(int high=0; high<n; high++){
            int num= nums[high];
            map.put(num, map.getOrDefault(num, 0)+1);
            while(map.get(num)>k){
                int left= nums[low];
                map.put(left, map.get(left)-1);

                if(map.get(left)==0)
                    map.remove(left);
                low++;
            }
            res= Math.max(res, high-low+1);
        }
        return res;
    }
}