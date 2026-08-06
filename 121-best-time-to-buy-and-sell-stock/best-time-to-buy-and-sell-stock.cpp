class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=INT_MAX;
        int maxpro=0;
        for(int price:prices){
            if(min_price>price){
                min_price=price; 
            }
            else if(price-min_price>maxpro){
                maxpro=price-min_price;
            }
        }
        return maxpro;
    }
};