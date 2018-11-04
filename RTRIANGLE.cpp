#include<iostream>
using namespace std;
int main()
{
	unsigned long long n;
	cin>>n;
	unsigned long long S=0,i=1;
	while(S<n)
	{
		S=S+i;
		i++;
	}
	if(S==n)
	{
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}
