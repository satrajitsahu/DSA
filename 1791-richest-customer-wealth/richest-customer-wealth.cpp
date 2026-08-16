class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(const auto& customer:accounts){
            int curr_wealth=0;
            for(int money:customer){
                curr_wealth+=money;
            }
            ans=std::max(ans,curr_wealth);
        }
        return ans;
    }
};