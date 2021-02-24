#include<bits/stdc++.h>
using namespace std;
class patient
{
	int i;
	int a;
	patient(int i,int a)
	{
		this.i = i;
		this.a = a;
	}
};
void swap(patient &a, patient &b)
{
	patient c;
	c.i = a.i; c.a = a.a;        //c=a
	a.i = b.i; a.a = b.a;        //a=b
	b.i = c.i; b.a = c.a;        //b=c
}
void sort(patient A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j].a > A[j+1].a)		//checking if left value is greater than value
            {
                swap(A[j],A[j+1]);		//if yes swap them
            }
        }
    }
}

int main()
{
	int t,n,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		patient *p = new patient[n];
		for(int i=1;i<=n;i++)
		{
			cin>>temp;
			p[i] = patient(i,temp);
		}

		sort(p,n);
		// cout<<
		// for(int i=0;i<n;i++)
		// {

		// }
	}
}
