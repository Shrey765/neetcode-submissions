class Solution {
    public boolean isPalindrome(String s) {
        int n = s.length();
        String str = "";

        for(int i = 0; i < n; i++){
            char ch = Character.toLowerCase(s.charAt(i));
            if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
                str += ch;
            }
        }

        int left = 0;
        int right = str.length()-1;
        while(left <= right){
            if(str.charAt(left) != str.charAt(right)){
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
}
