class Solution {
    public boolean isPalindrome(String s) {
        ArrayList<Character> arr = new ArrayList<>();
        for(int i=0; i<s.length(); i++){
            char ch = Character.toLowerCase(s.charAt(i));

            if (Character.isLetterOrDigit(ch)) {
                arr.add(ch);
            }
        }

        int left=0, right= arr.size()-1;
        while(left<right){
            if(arr.get(left)!=arr.get(right)){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}