class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long res=0;
        for(char c:columnTitle){
            int a=c-'A'+1;
            res=res*26+a;
        }
        return res;
    }
};