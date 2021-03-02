#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d,c,a,sum=0,day1=0,day2=0,temp,total;
		cin>>d>>c;
		for(int i=0;i<3;i++)
		{
			cin>>a;
			day1 = day1 +a;
		}
		for(int i=0;i<3;i++)
		{
			cin>>a;
			day2 = day2 +a;
		}
		temp = day1 + day2;
		if(day1<150)
		{
			day1 = day1 + d;
		}
		if(day2<150)
		{
			day2 = day2 + d;
		}
		total = day1 + day2 + c;

		temp = temp + 2*d;
		if(temp >total)
		{
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}	
} 