#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mine=prices[0];
    int diff=0;
    for(int i=1;i<prices.size();i++)
    {
        if(prices[i]<mine)
        {
            mine=prices[i];
        }
        else
        {
            diff=max(diff,prices[i]-mine);
        }
    }
    return diff;
}