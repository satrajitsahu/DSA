class Solution {
public:
    string removeOuterParentheses(string s) {
        int curr=0;
        string res;
        for(char c:s){
            if(c=='('){
                if(curr>0)res+=c;
                    curr++;
                }else{
                    curr--;
                    if(curr>0)res+=c;
                }
            }
        return res;
    }
};