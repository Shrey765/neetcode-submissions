class Solution {
    public void sortColors(int[] nums) {
        int n = nums.length;
        int low = 0; int mid = 0; int high = n-1;

        while(mid <= high){
            if(nums[mid] == 0 && nums[low] != 0){
                int temp = nums[low];
                nums[low] = nums[mid];
                nums[mid] = temp;
            }

            if(nums[mid] == 2 && nums[high] != 2){
                int temp = nums[high];
                nums[high] = nums[mid];
                nums[mid] = temp;
            }

            if(nums[low] == 0){
                low++;
            }

            if(nums[high] == 2){
                high--;
            }

            if(low > mid || (nums[mid] != 0 && nums[mid] != 2)){
                mid++;
            }
            
        }

    }
}