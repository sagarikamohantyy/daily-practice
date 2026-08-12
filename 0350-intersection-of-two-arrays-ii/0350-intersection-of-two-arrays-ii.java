class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        int n1=nums1.length;
        int n2=nums2.length;
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        int i=0, j=0;

        if(n1==0 || n2==0) return new int[0];
        List<Integer> arr= new ArrayList<>();
        
        while(i<n1 && j<n2){
            if(nums1[i]==nums2[j]){
                arr.add(nums1[i]);
                i++; j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        int[] ans= new int[arr.size()];
        for(int x=0; x<arr.size(); x++){
            ans[x]= arr.get(x);
        }
        return ans;
    }
}