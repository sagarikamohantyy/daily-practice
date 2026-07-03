class Solution {
    public String capitalizeTitle(String title) {
        char[] ch=title.toCharArray();
        int n=ch.length;
        int i=0;

        while (i<n){
            int left=i;
            while (i<n && ch[i]!=' ') {
                i++;
            }

            int right=i;
            int len=right-left;

            if (len<=2) {
                for (int j= left; j<right; j++) {
                    ch[j]=Character.toLowerCase(ch[j]);
                }
            } 
            else {
                ch[left]=Character.toUpperCase(ch[left]);
                for (int j=left+1; j<right; j++) {
                    ch[j]=Character.toLowerCase(ch[j]);
                }
            }
            i++;
        }
        return new String(ch);
    }
}