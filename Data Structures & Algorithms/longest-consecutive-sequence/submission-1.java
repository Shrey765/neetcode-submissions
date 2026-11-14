class Solution {
    public int longestConsecutive(int[] numbers) {
        int n = numbers.length;
        Set<Integer> st = new HashSet<>();
        for(int num: numbers){
            st.add(num);
        }

        int maxi = 0;
        for(int i = 0; i < n; i++){
            if(st.contains(numbers[i]-1)) continue;

            int count = 1; 
            int temp = numbers[i];
            while(st.contains(temp + 1)){
                count += 1;
                temp = temp + 1;
            }

            maxi = Math.max(maxi, count);
        }
        return maxi;
    }
}
