class Solution {
public:
    int longestValidParentheses(string s) {
        int open=0;
        int close=0;
        int maxl=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                open++;
            }else{
                close++;
            }
            if(open==close){
                maxl=max(maxl,2*close);
            }else if(close>open){
                open=close=0;
            }
        }
        open=close=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='('){
                open++;
            }else{
                close++;
            }
            if(open==close){
                maxl=max(maxl,2*open);
            }else if(open>close){
                open=close=0;
            }
        }
        return maxl;
    }
};