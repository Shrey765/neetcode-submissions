class Solution {
public:
    int find(long long mid, vector<int> &piles){
        int n = piles.size();
        int time = 0;

        for(int i = 0; i < n; i++){
            time += (ceil((double)piles[i]/mid));
        }

        return time;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        long long total = 0;
        for(int i = 0; i < n; i++){
            total += piles[i];
        }

        long long i = 1;
        long long j = total;
        while(i <= j){
            long long mid = (i + j)/2;
            int time = find(mid, piles);

            if(time <= h){
                j = mid - 1;
            }

            else{
                i = mid + 1;
            }
            
        }

        return i;
    }
};
