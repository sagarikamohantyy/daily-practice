class Solution {
    public String[] divideString(String s, int k, char fill) {
        int n=s.length();
        List<String> arr= new ArrayList<>();
        int i=0, j=k;
        while(i<n){
            if(j>n){
                String s1=s.substring(i, n);
                String s2= s1+String.valueOf(fill).repeat(k - (n - i));
                arr.add(s2);
            }
            else{
                arr.add(s.substring(i, j));
            }
            i=i+k;
            j=i+k;
        }
        return arr.toArray(new String[0]);
    }
}