class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int maxcandy=*max_element(candies.begin(),candies.end());
        ans.reserve(candies.size());
        for(int candy:candies){
            ans.push_back(candy+extraCandies>=maxcandy);
        }
        return ans;
    }
};