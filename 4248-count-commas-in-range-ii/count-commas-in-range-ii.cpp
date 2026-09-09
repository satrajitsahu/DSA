class Solution {
public:
    long long countCommas(long long n) {
        long long comma=0;
        long long base=1000;
        while(n>=base){
            comma+=(n-base+1);
        if(base>LLONG_MAX/1000){
            break;
        }
        base*=1000;
    }
        return comma;
    }
};