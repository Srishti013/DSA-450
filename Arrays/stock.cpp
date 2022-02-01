class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=prices[prices.size()-1],max_prof=0,prof=0;
        for(int i=prices.size()-2;i>=0;i--)
        {
             if(prices[i]>max)
             {
                 max=prices[i];
             }
            else
            {
                prof = max-prices[i];
                if(prof>max_prof)
                    max_prof=prof;
            }
            
        }
        return max_prof;
        
    }
};
