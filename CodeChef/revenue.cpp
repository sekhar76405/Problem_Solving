#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n;
	cin>>n;
	long *arr = new long[n];
	for(long i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	// for(long i=0;i<n;i++)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;
	long long max=0,total = 0;
	for(long i=0;i<n;i++)
	{
		total = (n-i)*arr[i];
		if(max<total)
		{
			max = total;
		}
	}
	cout<<max<<endl;
}