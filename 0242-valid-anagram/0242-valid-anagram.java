class Solution {
    public boolean isAnagram(String s, String t) {
        int[] countS= new int[26];
        int[] countT= new int[26];
        String lowerS= s.toLowerCase();
        String lowerT= t.toLowerCase();
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0; i<s.length(); i++){
            countS[lowerS.charAt(i)-97]++;
            countT[lowerT.charAt(i)-97]++;
        }
        boolean isEqual = Arrays.equals(countS, countT); 
        return isEqual;
    }
}