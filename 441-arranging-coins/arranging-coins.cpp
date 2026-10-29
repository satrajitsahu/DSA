class Solution {
public:
    int arrangeCoins(int n) {
       long long left=0,right=n;
       while(left<=right){
        long long mid=left+(right-left)/2;
        long long need=mid*(mid+1)/2;
        if(need==n){
            return (int)mid;
        }else if(need<n){
            left=mid+1;
        }else{
            right=mid-1;
        }
    } 
       return (int)right;
    }
};