#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t,n,k,total=0;
	string temp;
	cin>>t;

	while(t--)
	{
		cin>>n>>k;
		long *arr =new long[k];
		
		for(long i=0;i<k;i++)
		{
			cin>>arr[i];
		}
// 		cout<<"n--"<<n<<" k--"<<k<<endl;
//         for(int i=0;i<k;i++)
// 		{
// 			cout<<arr[i]<<" ";
// 		}
// 		cout<<endl;
		
		while(n--)
		{
			total = 0;
			cin>>temp;
			//cout<<"String "<<temp<<endl; 
			for(long i = 0;i<temp.length();i++)
			{
				if(temp[i] == '1')
				{
					total = total + arr[i];
				}
			}
			cout<<total<<endl;
		}
	}
}
