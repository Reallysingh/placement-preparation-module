class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProf=0;
        int minPrice= INT_MAX;
        for(int i=0;i<prices.size();i++){
            minPrice=min(minPrice,prices[i]);
            maxProf=max(maxProf,prices[i]-minPrice);
        }
        return maxProf;
    }
};
