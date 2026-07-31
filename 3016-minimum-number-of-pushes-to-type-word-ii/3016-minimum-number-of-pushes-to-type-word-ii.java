class Solution {
    public int minimumPushes(String word) {
        int len=word.length();
        int res=0;
        int[] count= new int[26];
        for(int i=0; i<len; i++){
            count[word.charAt(i)-'a']++;
        }
        int idx=0;
        Arrays.sort(count);
        for(int j=25; j>=0; j--){
            if(count[j] == 0) break;
            res+= count[j]*(idx/8+1);
            idx++;
        }
        return res;
    }
}