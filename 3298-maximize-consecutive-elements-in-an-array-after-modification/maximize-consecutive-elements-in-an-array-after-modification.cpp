class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        int a=0;
        sort(nums.begin(),nums.end());
        unordered_map<int,int>dp;
        for(int c:nums){
            dp[c+1]=dp[c]+1;
            dp[c]=dp[c-1]+1;
            a=max({a,dp[c+1],dp[c]});
        }
        return a;
    }
};