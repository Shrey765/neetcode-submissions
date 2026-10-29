class Solution {
    public int majorityElement(int[] nums) {
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();

        for(int num: nums){
            if(map.containsKey(num)){
                map.put(num, map.get(num) + 1);
            }else{
                map.put(num, 1);
            }
        }

        Iterator<Map.Entry<Integer, Integer>> iterator = map.entrySet().iterator();

        int ans=-1;
        int maxFreq = 0;
        while(iterator.hasNext()){
            Map.Entry<Integer, Integer> val = iterator.next();

            if(maxFreq < val.getValue()){
                maxFreq = val.getValue();
                ans = val.getKey();
            }
        }

        return ans;
    }
}