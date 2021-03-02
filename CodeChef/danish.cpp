#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long arr[10],k;
		for(int =0;i<10;i++)
			cin>>arr[i];
		cin>>k;
		for(int = 9;i>=0;i--)
		{
			if(arr[i]>k)
			{
				cout<<i<<endl;
				break;
			}
			else
			{
				k = k - arr[i];
			}
		}
	}	
} 