class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[nums.size()/2];
        int b=0;
        for(int c:nums){
            b+=abs(c-a);
        }
        return b;
    }
};