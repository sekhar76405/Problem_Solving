#include <bits/stdc++.h>
using namespace std;

long fun(long n)
{
    if(n==1)
    {
        cout<<1;
        return 1;
    }
    if(n%2==0)
    {
        cout<<n<<" ";
        return fun(n/2);
    }
    else
    {
        cout<<n<<" ";
         return fun(n*3 + 1);
    }
}

int main()
{
    long n;
    cin>>n;
    //cout<<n<<" ";
    
    fun(n);
    // while(n!=1)
    // {
    //     if(n%2==0)
    //         n=n/2;
    //     else
    //         n = n*3 + 1;
    //     cout<<n<<" ";
    // }

    return 0;
}
