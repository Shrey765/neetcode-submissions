class Solution {
    public boolean isAnagram(String s, String t) {
        Map<Character, Integer> countMap = new HashMap<Character, Integer>();

        int n = s.length();
        for(int i = 0; i < n; i++){
            if(countMap.containsKey(s.charAt(i))){
                countMap.put(s.charAt(i), countMap.get(s.charAt(i)) + 1);
            }else{
                countMap.put(s.charAt(i), 1);
            }
        }

        n = t.length();
        for(int i = 0; i < n; i++){
            if(countMap.containsKey(t.charAt(i))){
                int val = countMap.get(t.charAt(i)) - 1;
                if(val == 0){
                    countMap.remove(t.charAt(i));
                }else{
                    countMap.put(t.charAt(i), val);
                }

            }else{
                return false;
            }
        }

        return countMap.isEmpty();
    }
}
