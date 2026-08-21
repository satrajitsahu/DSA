class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int mis=n*(n+1)/2;
        int sum=0;
        for(int n:nums){
            sum+=n;
        }
        return mis-sum;
    }
};