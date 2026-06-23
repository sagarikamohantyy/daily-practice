class Solution {
    public int largestAltitude(int[] gain) {
        int n= gain.length;
        int[] alt= new int[n+1];
        alt[0]=0;
        for(int i=1; i<alt.length; i++){  
            alt[i]=gain[i-1]+alt[i-1];
        }
        return Arrays.stream(alt).max().getAsInt();
    }
}