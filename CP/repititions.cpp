#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //cout<<s<<s.length();
    int i=0;
    int count = 0, temp=0;
    while(i<s.length()-1)
    {
        if(s[i]==s[i+1])
            temp++;
        else
            temp=0;
        if(count<temp)
            count = temp;
        i++;
    }
    cout<<count+1;
    return 0;
}