class Solution {
    public int maxNumberOfBalloons(String text) {
        char[] bal = {'b', 'a', 'l', 'o', 'n'}; 
        int[] arr= {0,0,0,0,0};
        for(int i=0; i<text.length(); i++){
            for(int j=0; j<bal.length; j++){
                if (text.charAt(i) == bal[j]) {
                    arr[j]++;
                }
            }
        }
        arr[2] /= 2;
        arr[3] /= 2;
        return Arrays.stream(arr).min().getAsInt();
    }
}