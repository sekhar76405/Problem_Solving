#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,k;
		cin>>n>>k;
		if(n>=k && k>0)
		{
			long s= (n%k) * 1LL;
		cout<<s<<endl;
		}
		else
			cout<<n<<endl;
		
	}	
} 