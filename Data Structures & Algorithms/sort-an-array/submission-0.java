class Solution {
     public static void merge(int[] numbers, int low, int mid, int high){
        int n1 = mid-low+1;
        int n2 = high - mid;

        int[] arr1 = new int[n1];
        int[] arr2 = new int[n2];

        for(int i = 0; i < n1; i++){
            arr1[i] = numbers[low+i];
        }

        for(int i = 0; i < n2; i++){
            arr2[i] = numbers[mid+1+i];
        }
        
        int i = 0; int j = 0;
        int k = low;

        while(i < n1 && j < n2){
            if(arr1[i] <= arr2[j]){
                numbers[k] = arr1[i];
                i++;
            }else{
                numbers[k] = arr2[j];
                j++;
            }

            k++;
        }

        while(i < n1){
            numbers[k] = arr1[i];
            i++;
            k++;
        }

        while(j < n2){
            numbers[k] = arr2[j];
            j++;
            k++;
        }
    }

    public static void mergeSort(int[] numbers, int low, int high){
        if(low >= high) return;
        int mid = (low + high)/2;
        mergeSort(numbers, low, mid);
        mergeSort(numbers, mid+1, high);
        merge(numbers, low, mid,  high); 
    }
    public int[] sortArray(int[] nums) {
        mergeSort(nums, 0, nums.length-1);
        return nums;
    }
}