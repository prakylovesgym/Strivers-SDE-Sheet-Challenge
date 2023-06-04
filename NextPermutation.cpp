#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int ind1=-1,ind2;
    for(int i=n-2;i>=0;i--)
    {
        if(permutation[i]<permutation[i+1])
        {
            ind1=i;
            break;
        }
    }
    if(ind1<0)
    {
        reverse(permutation.begin(),permutation.end());
        
    }
    else
    {
        for(int i=n-1;i>ind1;i--)
        {
          if (permutation[ind1] < permutation[i]) {
            swap(permutation[ind1], permutation[i]);
            break;
          }
        }
    }
        reverse(permutation.begin()+ind1+1,permutation.end());

    
    return permutation;
}