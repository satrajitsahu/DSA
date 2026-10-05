class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);
        for(char c:s){
            if(c=='('){
                st.push(0);
            }else{
                int in=st.top();
                st.pop();
                int curr=st.top();
                st.pop();
                st.push(curr+max(2*in,1));
            }
        }
        return st.top();
    }
};