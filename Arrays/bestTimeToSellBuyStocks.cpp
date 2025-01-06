//One Pass - O(n) time complexity

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int min_cost=prices[0];
        int max_profit=0;
        
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min_cost)
            {
                min_cost=prices[i];
            }
            
            else if(prices[i]-min_cost> max_profit)
            {
                max_profit=prices[i]-min_cost;
            }
        }
        
        return max_profit;
    }
};
