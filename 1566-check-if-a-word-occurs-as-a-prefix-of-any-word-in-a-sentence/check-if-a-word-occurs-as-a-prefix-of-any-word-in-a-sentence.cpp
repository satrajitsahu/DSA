class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string word="";
        int index=1;
        for(char c:sentence){
            if(c==' '){
            if(word.find(searchWord)==0){
                return index;
                }
                word="";
                index++;
            }else{
                word+=c;
            }
        }
        if(word.find(searchWord)==0){
            return index;
    }
        return -1;
    }
};