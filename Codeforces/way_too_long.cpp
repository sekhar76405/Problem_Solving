#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--);
	{
		string word;
		cin>>word;
		if(word.lenght()<=10)
			cout<<word<<endl;
		else
			cout<<word[0]<<word.lenght()<<word[word.lenght() -1]<<endl;
		
	}
}