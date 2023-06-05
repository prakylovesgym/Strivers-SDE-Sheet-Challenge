#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int l=0,t=0,r=m-1,b=n-1,num,x;
    while(t<b && l<r)
    {
        num=mat[t][l];
        for(int i=l+1;i<=r;i++)
        {
            x=mat[t][i];
            mat[t][i]=num;
            num=x;

        }
        t++;
         for(int i=t;i<=b;i++)

         {      x=mat[i][r];
                mat[i][r]=num;
                num=x;

         }
         r--;
         for(int i=r;i>=l;i--)
         {
             x=mat[b][i];

             mat[b][i]=num;

             num=x;

         }

         b--;

         for(int i=b;i>=t;i--)

         {

             x=mat[i][l];

             mat[i][l]=num;

             num=x;

         }
         l++;

         mat[t-1][l-1]=num;
    }

}