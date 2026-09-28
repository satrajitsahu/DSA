class Solution {
public:
    int maxDepth(string s) {
        int curr=0;
        int maxd=0;
        for(char c:s){
            if(c=='('){
                curr++;
                maxd=max(maxd,curr);
            }else if(c==')'){
                curr--;
            }
        }
        return maxd;
    }
};