class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int>friendSet(friends.begin(),friends.end());
        vector<int>ans;
        for(int person:order){
            if(friendSet.count(person)){
                ans.push_back(person);
            }
        }
        return ans;
    }
};