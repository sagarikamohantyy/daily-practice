class Solution {
    public String smallestPalindrome(String s) {
        int len= s.length();
        if(len==1) return s;


        char[] arr= new char[len/2];
        for(int i=0; i<len/2; i++){
            arr[i]=s.charAt(i);
        }
        Arrays.sort(arr);
        char[] arr1= new char[len];
        for(int j=0; j<len/2; j++){
            arr1[j]=arr[j];
            arr1[len-j-1]=arr[j];
        }
        if (len % 2 == 1) { 
            arr1[len / 2] = s.charAt(len / 2);
        }
        return new String(arr1);
    }
}