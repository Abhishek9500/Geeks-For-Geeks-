class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int minprice=prices[0];
        int maxi=0;
        
        for(int i=0;i<prices.size();i++){
            if(prices[i]>minprice){
                maxi=max(maxi,prices[i]-minprice);
            }
            else minprice=prices[i];
        }
        return maxi;
    }
};
