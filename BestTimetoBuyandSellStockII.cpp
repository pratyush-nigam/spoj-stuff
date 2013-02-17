class Solution {
public:
    int dp(vector<int> p, int i,int profit,int m)
    {
        if(i>=p.size())
            return profit;
        if(p[i]<m)
            m = p[i];
        if(profit < p[i] - m)
            return max(dp(p,i+1,profit,m),p[i]-m +dp(p,i+2,0,p[i+1]));
        return dp(p,i+1,profit,m);
    }
    int maxProfit(vector<int> &prices) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(prices.size()==0)
            return 0;
        return dp(prices,1,0,prices[0]);
    }
};
