class Solution {
public:
    string reversePrefix(string word, char ch) {
        for(int i=0;i<word.length();i++){
            if(word[i]==ch){
                std::reverse(word.begin(),word.begin()+1+i);
                break;
            }
        }
        return word;
    }
};