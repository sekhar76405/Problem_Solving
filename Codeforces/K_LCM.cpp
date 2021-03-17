//https://codeforces.com/contest/1497/problem/C1
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void func(ll n, vector<ll> &v)
{
        int temp;
        int a1,a2,a3;
        if(n%2==0)
        {
            temp = n/2;
            if(temp%2==0)
            {
                a1 = temp;
                a2 = temp/2;
                a3 = temp/2;
                v.push_back(a1);v.push_back(a2);v.push_back(a3);
            }
            else
            {
                a1 = 2;
                a2 = temp-1;
                a3 = temp-1;
                v.push_back(a1);v.push_back(a2);v.push_back(a3);
            }
        }
        else
        {
            a1 = 1;
            a2 = (n-1)/2;
            a3 = (n-1)/2;
            v.push_back(a1);v.push_back(a2);v.push_back(a3);
        }
        
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        std::vector<long long> v;
        int n;cin>>n;
        int k;cin>>k;
        if(k==3)
        {
            func(n,v);
        }
        else
        {
            ll val1 = n-k;
            ll val2 = k-3;
            if(val1%2==0 && val2%2==0)
            {
                ll temp = val1/val2;
                n = n - temp;
                for(int i=0;i<val2;i++)
                {
                    v.push_back(temp/val2);
                }
                func(n,v);
            }
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}