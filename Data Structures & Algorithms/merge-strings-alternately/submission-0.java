class Solution {
    public String mergeAlternately(String word1, String word2) {
        int left = 0;
        int right = 0;
        int n1 = word1.length();
        int n2 = word2.length();
        StringBuilder str = new StringBuilder();

        while(left < n1 && right < n2){
            str.append(word1.charAt(left));
            str.append(word2.charAt(right));
            left++; right++;
        }

        while(left < n1){
            str.append(word1.charAt(left));
            left++;
        }

        while(right < n2){
            str.append(word2.charAt(right));
            right++;
        }

        return str.toString();
    }
}