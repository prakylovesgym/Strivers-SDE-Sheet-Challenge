#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	vector<int> v(n,-1);
	for(int i=0;i<n;i++)
	{
		if(v[arr[i]]==1)
		{
			return arr[i];
		}
		v[arr[i]]=1;
	}
	return -1;
}
