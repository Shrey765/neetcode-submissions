class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int n = nums.length;
        int left = 0;
        int right = 0;

        Arrays.sort(nums);
        List<Integer> ans = new ArrayList<>();

        while(right < n){
            if(nums[left] != nums[right] && (right-left) > n/3){
                ans.add(nums[left]);
                left = right;
            }else if(nums[left] != nums[right] && (right-left) <= n/3){
                left = right;
            }

            right++;
        }

        if((right-left) > n/3) ans.add(nums[left]);

        return ans;
    }
}