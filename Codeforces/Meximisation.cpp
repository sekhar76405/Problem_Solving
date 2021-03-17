//https://codeforces.com/contest/1497/problem/0
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        std::vector<int> v;
        int hsh[1000]={0};
        std::vector<int> arr;
    	int n;cin>>n;
    	int temp;
    	for(int i=0;i<n;i++)
    	{
    		cin>>temp;
    		hsh[temp]++;
    	}

    	for(int i=0;i<101;i++)
    	{
    		if(hsh[i]>0)
    		{
    			v.push_back(i);
    			hsh[i]--;
    			for(int j=0;j<hsh[i];j++)
    			{
    				arr.push_back(i);
    			}
    		}
    	}

    	for(int i=0;i<arr.size();i++)
    	{
    		v.push_back(arr[i]);
    	}

    	for(int i=0;i<v.size();i++)
    	{
    		cout<<v[i]<<" ";
    	}
    	cout<<endl;
    }
}