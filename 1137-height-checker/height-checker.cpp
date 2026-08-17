class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>ex=heights;
        sort(ex.begin(),ex.end());
        int worng=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=ex[i]){
            worng++;
            }
        }
        return worng;
    }
};