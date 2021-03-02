#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int s,e;
		long time = 0;
		cin>>s;
		int *q = new int[s];
	//	cout<<"HELO\n";
		for(int z=0;z<s;z++)
		{
			cin>>q[z];
		//	cout<<"HELO\n";
		}
		for(int i=0;i<s;i++)
		{
		  //  cout<<"hi\n";
			cin>>e;
			int *arr=new int[e];
			for(int j=0;j<e;j++)
			{
			    //cout<<"bye\n";
				cin>>arr[j];
				time = time + arr[j];
			}
			if(e>1)
			time = time - (e-1)*q[i];
			// if(e==1)
			// time = time - (e-1)*q[i];
			//total = total + time;
		}
		cout<<time<<endl;
	}	
} 


//array arr[] where we have total e epis and arr[i] = time of that epi