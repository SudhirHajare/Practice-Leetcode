class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int mini=INT_MAX;
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<mini){
                mini=prices[i];
            }
            maxProfit=max(maxProfit,prices[i]-mini);
        }
        return maxProfit;
    }
};