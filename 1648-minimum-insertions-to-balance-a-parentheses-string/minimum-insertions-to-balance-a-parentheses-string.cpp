class Solution {
public:
    int minInsertions(string s) {
        int n=0;
        int ans=0;
        for(char c:s){
            if(c=='('){
                n+=2;
                if(n%2!=0){
                    n--;
                    ans++;
                }
            }else{
                n--;
                if(n<0){
                    ans++;
                    n=1;
                }
            }
        }
        return ans+n;
    }
};