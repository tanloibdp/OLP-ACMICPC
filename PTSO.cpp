#include<iostream>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long i=2;
	while(n>i)	//So sanh, neu n<=i, nghia la khong the phan tich duoc nua.
	{
		if(n%i==0)
		{
			n=n/i;
			cout<<i<<"*";
		}
		else i++;
	}
	cout<<n;
	return 0;
}
