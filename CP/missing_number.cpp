#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    long num;
    cin>>n;
    
    long * arr = new long[n];
    memset(arr,0,sizeof(arr));
    
    
    for(int i=0;i<n-1;i++)
    {
        cin>>num;
        arr[num-1]= num;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {cout<<i+1;break;}
    }
    free(arr);
    return 0;
}