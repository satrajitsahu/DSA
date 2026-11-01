class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m=*min_element(nums.begin(),nums.end());
        int a=0;
        for(int c:nums){
            a+=(c-m);
        }
        return a;
    }
};