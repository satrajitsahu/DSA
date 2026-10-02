class Solution {
public:
    void par(vector<string>& res,string curr,int open,int close,int max){
        if(curr.length()==max*2){
            res.push_back(curr);
            return;
        }
        if(open<max){
            par(res,curr+"(",open+1,close,max);
        }
        if(close<open){
            par(res,curr+")",open,close+1,max);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        par(res,"",0,0,n);
        return res;
    }
};