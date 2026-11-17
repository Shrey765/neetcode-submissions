class Solution {
    public int subarraySum(int[] nums, int k) {
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();

        int currentSum = 0;
        int count = 0;
        map.put(0, 1);
        for(int num: nums){
            currentSum += num;
            int prefix = currentSum - k;
            if(map.containsKey(prefix)){
                count += map.get(prefix);
            }

            map.put(currentSum, map.getOrDefault(currentSum, 0) + 1);
        }

        return count; 
    }
}