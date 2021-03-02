#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long *arr = new long[n];
		long long total =0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
    	sort(arr, arr + n);
    	long pos=0, neg=0;
    	for(int i=0;i<n;i++)
    	{
    		if(arr[i]<0)
    		{
    			neg = neg + arr[i];
    		}
    		if(arr[i]>=0)
    		{
    			pos = pos + arr[i];
    		}
    	}

    	if(pos < (-neg))
    	{
    	    total = arr[1] - arr[0] + arr[0]*arr[1];
    	    cout<<total<<endl;
    	}
    	else
    	{
    	    total = arr[n-1] - arr[n-2] + arr[n-1]*arr[n-2];
		    cout<<total<<endl;
    	}
		
	}	
} 