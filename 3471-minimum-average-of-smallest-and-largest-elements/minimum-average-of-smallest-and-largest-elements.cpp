class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        double ans=DBL_MAX;
        for(int i=0;i<n;i++){
            double avg=(nums[i]+nums[n-1-i])/2.0;
            ans=min(avg,ans);
        }
        return ans;
    }
};