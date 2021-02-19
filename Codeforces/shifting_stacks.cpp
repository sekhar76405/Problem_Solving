#include<iostream>
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
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		long long sum =0;
		for(int i=0;i<n;i++)
		{
			sum = sum + arr[i];
		}
		if(sum >= n-1)
		{
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}

	}
}