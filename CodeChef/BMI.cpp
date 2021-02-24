#include<iostream>
using namespace std;
int main()
{
	int t,h,m;
	double bmi;
	cin>>t;
	while(t--)
	{
		cin>>m>>h;
		bmi = (double)m/(double)(h*h);
		if(bmi<= 18.0)
		{
			cout<<"1"<<endl;
		}
		else if(bmi >=19 && bmi <=24)
		{
			cout<<"2"<<endl;
		}
		else if(bmi >=25 && bmi <=29)
		{
			cout<<"3"<<endl;
		}
		else
		{
			cout<<"4"<<endl;
		}
	}
}
