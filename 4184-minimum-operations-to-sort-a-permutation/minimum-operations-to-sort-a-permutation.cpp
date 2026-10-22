class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        bool ok=true;
        for (int i=0;i<n;i++){
            if (nums[i]!=(nums[0]+i)%n) {
                ok=false;
                break;
            }
        }
        if (ok){
            int cost1=(n-nums[0])%n;
            int cost2=nums[0]+2;

            ans=min(ans,min(cost1,cost2));
        }
        ok=true;
        for (int i=0;i<n;i++) {
            if (nums[i]!=(nums[0]-i+n)%n) {
                ok=false;
                break;
            }
        }
        if(ok){
            int cost3=1+(n-nums[n-1])%n;
            int cost4=1+nums[n-1];
            ans=min(ans,min(cost3,cost4));
        }
        return ans==INT_MAX?-1:ans;
    }
};