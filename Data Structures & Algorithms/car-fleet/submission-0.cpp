class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> cars;
        for (int i = 0; i < n; i++) {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.rbegin(), cars.rend());
        
        int fleets = 0;
        double maxTime = 0.0;
        for (auto& p : cars) {
            double time = (double)(target - p.first) / p.second;
            if (time > maxTime) {
                maxTime = time;
                fleets++;
            }
        }
        return fleets;
    }
};
