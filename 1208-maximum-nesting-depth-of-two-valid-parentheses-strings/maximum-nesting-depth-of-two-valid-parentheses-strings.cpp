class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int>res(seq.length());
        int d=0;
        for(int i=0;i<seq.length();i++){
            if(seq[i]=='('){
                d++;
                res[i]=d%2;
            }else{
                res[i]=d%2;
                d--;
            }
        }
        return res;
    }
};