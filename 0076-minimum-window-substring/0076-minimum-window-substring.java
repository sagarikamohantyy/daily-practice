class Solution {
    public String minWindow(String s, String t) {
        if(s.length()==0 || t.length()==0) return "";
        int[] freq=new int[128];

        for(char c:t.toCharArray()) {
            freq[c]++;
        }

        int left=0, right=0;
        int req=t.length();
        int minLen=Integer.MAX_VALUE;
        int start=0;

        while(right<s.length()){
            char r=s.charAt(right);
            if(freq[r]>0){    req--;   }
            freq[r]--;
            right++;

            while(req==0){
                if(right-left<minLen){
                    minLen=right-left;
                    start=left;
                }
                char l=s.charAt(left);
                freq[l]++;

                if(freq[l]>0){    req++;    }
                left++;
            }
        }
        if(minLen==Integer.MAX_VALUE){
            return "";
        }
        return s.substring(start, start+minLen);
    }
}