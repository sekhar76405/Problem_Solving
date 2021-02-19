#include<iostream>
using namespace std;
void print(int arr[],int n)
{
	for(int i = 0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int test_cases;
	cin>>test_cases;
	
	int n,i,j,count;
	int *input = new int[n];
	int *output = new int[n];
	//int input[n],output[n];
	
	cin>>n; //7
	
	for(int i = 0;i<n;i++)
	{
		output[i]=0;
	}
	print(output,n);
	
	for(int i = 0;i<n;i++)
	{
		cin>>input[i];
	}
	print(input,n);
	
//	if(n%2==0)
//	{
//		
//	}
//	else
//	{
		count = n-1;
		int temp = ((n+1)/2) - 1;
		
		print(input,n);
		
		cout<<input[3]<<endl;
		
		print(output,n);
		//3 4 5 2 9 1 1
		int a;
		a= input[3];
		output[count]=a;
		
		print(output,n);
		
//		cout<<temp<<" "<<n<<endl;
		print(input,n);
		
		count--;
		i=temp-1;
		j=temp+1;
		
		cout<<i<<" "<<j<<" "<<count<<endl;
		while(i>=0 && j<n)
		{
			output[count] = input[j];
			count--;
			cout<<count<<" "<<i<<endl;
			print(input,n);
			output[count] = input[i];
			cout<<input[i]<<" "<<output[count]<<" "<<i<<endl;
			count--;i--;j++;
			cout<<i<<" "<<j<<" "<<count<<endl;
			print(output,n);
		}
		print(output,n);
//	}
	
	
	return 0;
}
