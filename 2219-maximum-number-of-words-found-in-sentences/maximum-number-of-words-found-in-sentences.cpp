class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=0;
        for(auto sentence:sentences){
            int space=0;
            for(char c:sentence){
                if(c==' '){
                    space++;
                }
            }
            int curr=space+1;
            if(curr>count){
                count=curr;
            }
        }
        return count;
    }
};