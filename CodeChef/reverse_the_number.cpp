//https://www.codechef.com/LRNDSA01/problems/FLOW007
//easy

#include <iostream>
using namespace std;
int main() {
	int t,number;
	cin>>t;
	while(t>=0)
	{
	    int flag=0;
	    cin>>number;
	    int temp = number;
	    while(number>0)
	    {
	        temp = number%10;
	        number = number/10;
	        if(temp==0 && flag == 0)
			continue;
	        else
	        {
	            flag=1;
	            cout<<temp;
	        }
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}
