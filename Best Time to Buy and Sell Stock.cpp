class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size()==0) 
            return 0;
        int n = INT_MAX;
        int ans = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < n) 
                n = prices[i];
            ans = max(ans, prices[i]-n);    
        }
        return ans;
    }
};