class Solution {
    public String prefix(String str1, String str2){
        int n = str1.length() < str2.length() ? str1.length(): str2.length();

        String pre = "";
        for(int i = 0; i < n; i++){
            if(str1.charAt(i) == str2.charAt(i)){
                pre += str1.charAt(i);
            }else{
                break;
            }
        }

        return pre;
    }
    public String longestCommonPrefix(String[] strs) {
        int n = strs.length;
        if(n == 1){
            return strs[0];
        }
        String prefix = "";

        for(int i = 1; i < n; i++){
            String temp = prefix(strs[i-1], strs[i]);
            if(temp == ""){
                return "";
            }
            else if(prefix == "" || prefix.length() > temp.length()){
                prefix = temp;
            }
        }

        return prefix;
    }
}