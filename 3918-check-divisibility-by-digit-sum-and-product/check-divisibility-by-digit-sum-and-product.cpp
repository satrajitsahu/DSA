class Solution {
public:
    bool checkDivisibility(int n) {
        int ans=n;
        int sum=0;
        int pro=1;
        while(ans>0){
            int digit=ans%10;
            sum+=digit;
            pro*=digit;
            ans/=10;
        }
        if(n%(sum+pro)==0){
            return true;
        }else{
            return false;
        }
    }
};