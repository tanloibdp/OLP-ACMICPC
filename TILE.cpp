#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,dem=0,m;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a+0,a+0+n);
	m=a[n-1];
	if(a[n-1]==0)
	{
		cout<<"1";
	}
	else
	{
		for(int i=n-1;i>=0;i--)
		{
			
		}
	}
}
