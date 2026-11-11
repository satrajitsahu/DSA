class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long c1=cost1;
        long long c2=cost2;
        long long cb=costBoth;
        long long n1=need1;
        long long n2=need2;
        long long total=0;
        if(cb<c1+c2){
            long long a=min(n1,n2);
            total+=a*cb;
            n1-=a;
            n2-=a;
        } 
        total+=n1*min(cb,c1);
        total+=n2*min(c2,cb);
        return total;
    }
};