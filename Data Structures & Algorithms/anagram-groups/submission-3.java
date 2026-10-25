class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String>> map = new HashMap<>();

        for(String str: strs){
            char[] chars = str.toCharArray();

            Arrays.sort(chars);

            String key = new String(chars);

            if(map.containsKey(key)){
                map.get(key).add(str);
            }else{
                List<String> arr = new ArrayList<String>();
                arr.add(str);
                map.put(
                    key,
                    arr
                );
            }
        }
        return new ArrayList<>(map.values());
    }
}
