#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long arr[10],k,sum=0;
		int flag= 0;
		for(int =0;i<10;i++)
			cin>>arr[i];
		cin>>k;
		for(int = 9;i>=0;i--)
		{
			sum = sum +arr[i];
			if(sum> k)
			{
				cout<<i<<endl;
				break;
			}
			flag++;
		}
		// if(flag>10)
		// 	cout<<
	}	
} 