class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<double, int>> tp;

        for(int i = 0; i < n; i++){
            double time = (double)(target-position[i])/speed[i];
            tp.push_back({time, position[i]});
        }

        sort(tp.begin(), tp.end(), [](const pair<double, int> &a, const pair<double, int> &b){
            return a.second > b.second;
        });

        int count = 0;
        double currTime = 0;
        for (auto &p : tp) {
            if (p.first > currTime) {
                count++;
                currTime = p.first;
            }
        }
        return count;

    }
};
