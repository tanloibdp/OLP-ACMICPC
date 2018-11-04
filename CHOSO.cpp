#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	int a[n+1], b[n+1], c[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>m;
		a[m]++;
	}
	for(int i=0;i<n;i++)
	{
		cin>>m;
		b[m]++;
	}
	for(int i=0;i<n;i++)
	{
		cin>>m;
		c[m]++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<"\t";
	}
	for(int i=0;i<n;i++)
	{
		cout<<c[i]<<"\t";
	}	
}

