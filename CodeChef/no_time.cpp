//https://www.codechef.com/MARCH21C/problems/NOTIME

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,h,x,count=0,temp;
	cin>>n>>h>>x;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		if(temp+x>=h)
		{
			cout<<"Yes";
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<"No";
	}
	
}