class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n=nums.size();
        if(n<=3)return 0;
        sort(nums.begin(),nums.end());
        int small=nums[n-1]-nums[2];
        int big=nums[n-3]-nums[0];
        int both=nums[n-2]-nums[1];
        return min({small,big,both});
    }
};