class Solution {
    public boolean skip(String s, String skip){
        int n = s.length();
        int left = 0;
        int right = n-1;

        boolean isSkipped = false;
        while(left <= right){
            if(s.charAt(left) == s.charAt(right)){
                left++;
                right--;
            }else if(!isSkipped){
                if(skip.equalsIgnoreCase("left")) left++;
                else right--;
                isSkipped = true;
            }else return false;
        }

        return true;
    }
    public boolean validPalindrome(String s) {

        return skip(s, "left") || skip(s, "right");
    }
}