class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        int a=0;
        while(a+1<n && arr[a]<arr[a+1]){
            a++;
        }
        if(a==0 || a==n-1){
            return false;
        }
        while(a+1<n && arr[a]>arr[a+1]){
            a++;
        }
        return a==n-1;
    }
};