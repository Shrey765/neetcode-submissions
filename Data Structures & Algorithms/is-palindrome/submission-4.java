class Solution {
    public boolean isValid(char s){
        if((s >= 'a' && s<= 'z') || (s >= '0' && s <= '9')){
            return true;
        }

        return false;
    }
    public boolean isPalindrome(String s) {
        int n = s.length();

        int left = 0;
        int right = n-1;
        while(left <= right){
            char chl = Character.toLowerCase(s.charAt(left));
            while(left < right && !isValid(chl)){
                left++;
                chl = Character.toLowerCase(s.charAt(left));
            }

            char chr = Character.toLowerCase(s.charAt(right));
            while(left < right && !isValid(chr)){
                right--;
                chr = Character.toLowerCase(s.charAt(right));
            }

            if(chl != chr) return false;
            
            left++;
            right--;
        }

        return true;
    }
}
