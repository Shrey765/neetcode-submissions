class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();

        int n = nums.length;
        for(int i = 0; i < n; i++){
            if(map.containsKey(target-nums[i])){
                int j = map.get(target-nums[i]);
                if(i >= j){
                    return new int[] {j, i};
                }else{
                    return new int[] {i, j};
                }
            }else{
                map.put(nums[i], i);
            }
        }

        return new int[]{};
    }
}
