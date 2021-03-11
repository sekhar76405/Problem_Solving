//https://www.codechef.com/MARCH21C/problems/GROUPS

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int count=0,temp;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='1')
			{
				for(int j = i;j<s.length();j++)
				{
					if(s[j]=='0')
					{
						count++;
						i=j;
						break;
					}
				}
			}
		}
		cout<<count<<endl;
	}
}