class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] suffix = new int[n];
        int product = 1;

        for(int i = n-1; i >= 0; i--){
            product *= nums[i];
            suffix[i] = product;
        }

        int[] products = new int[n];
        int preffix = 1;
        for(int i = 0; i < n; i++){
            if(i+1 < n){
                products[i] = preffix * suffix[i+1];
                preffix *= nums[i];
            }else{
                products[i] = preffix;
            }
        }

        return products;
    }
}  
