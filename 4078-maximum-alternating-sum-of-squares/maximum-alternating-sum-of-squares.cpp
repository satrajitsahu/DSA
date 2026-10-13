class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<long long>s(n);
        for(int i=0;i<n;i++){
            s[i]=(long long)nums[i]*nums[i];
        }
        sort(s.begin(),s.end());
        long long sum=0;
        int mid=n/2;
        for(int i=0;i<mid;i++){
            sum-=s[i];
        }
        for(int i=mid;i<n;i++){
            sum+=s[i];
        }
        return sum;
    }
};