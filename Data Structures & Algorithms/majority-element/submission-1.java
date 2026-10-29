class Solution {
    public int majorityElement(int[] nums) {
        int count = 0;
        int candidate = -1;

        for(int num: nums){
            if(count == 0){
                candidate = num;
                count = 1;
            }else{
                if(num == candidate) count++;
                else count--;
            }
        }

        int checkCount = 0;
        for(int num : nums){
            if(num == candidate) checkCount++;
        }

        if(checkCount < nums.length/2) return -1;

        return candidate;
    }
}