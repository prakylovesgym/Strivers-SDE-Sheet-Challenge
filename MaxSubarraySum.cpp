#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long maxi=0,maxn=arr[0];
    for(int i=1;i<n;i++)
    {
        maxn=max(maxn+(long long)arr[i],(long long)arr[i]);
        if(maxn<0)
        {
            maxn=0;
        }
        maxi=max(maxn,maxi);


    }
    return maxi;
}