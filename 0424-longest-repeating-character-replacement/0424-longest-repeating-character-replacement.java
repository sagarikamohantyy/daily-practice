class Solution {
    int maxNum(int[] arr){
        int maxi=-1;
        for(int i=0; i<arr.length; i++){
            maxi=Math.max(maxi,arr[i]);
        }
        return maxi;
    }
    public int characterReplacement(String s, int k) {
        int low=0, res=Integer.MIN_VALUE;
        int[] arr= new int[26];
        for(int high=0; high<s.length(); high++){
            arr[s.charAt(high) - 'A']++;
            int len= high-low+1;
            int maxi= maxNum(arr);
            int diff= len-maxi;

            while(diff>k){
                arr[s.charAt(low) - 'A']--;
                low++;
                len= high-low+1;
                maxi= maxNum(arr);
                diff= len-maxi;
            }
            len= high-low+1;
            res= Math.max(res, len);
        }
        return res;
    }
}