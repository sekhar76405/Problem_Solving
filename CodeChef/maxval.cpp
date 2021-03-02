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
		int *arr = new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int a = sizeof(arr) / sizeof(arr[0]); 
		cout<<"a: "<<a<<" n: "<<n<<endl;
    	sort(arr, arr + n); 
    	for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		long long max1=arr[n-1],max2=arr[0];
		for(int i=0;i<n;i++)
		{
			if(arr[i]>=0)
			{
				max1 = max1 - arr[i] + max1*arr[i];
				break;
			}
		}
		for(int i=n-1;i<=0;i--)
		{
			if(arr[i]<=0)
			{
				max2 = -max2 + arr[i] - max2*arr[i];
				break;
			}
		}
		cout<<"max1: "<<max1<< " max2: "<<max2<<" "<<max(max1,max2)<<endl;
	}	
} 