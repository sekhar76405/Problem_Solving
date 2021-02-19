#include<iostream>
using namespace std;
int search(int arr[],int num[],int size, int n)
{
	int count=0;
	int num[size];
	for(int i =0; i<size;i++ )
	{
		if(arr[i]<=n || arr[i]==0)
		{
			num[count]=arr[i];
			count++;
		}
	}
	return count;
}
int main()
{
	int test_cases;
	cin>>test_cases;
	while(test_cases>=0)
	{
		int size, n,count;
		cin>>size>>n;
		int arr[size],num[size];
		count = search(arr,num,size,n);
		
		test_cases--;
	}
	return 0;
}
