class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int sub=1<<n;
        for(int i=0;i<sub;i++){
            int curr=0;
            for(int j=0;j<n;j++){
                if((i>>j)&1){
                    curr^=nums[j];
                }
            }
            sum+=curr;
        }
        return sum;
    }
};