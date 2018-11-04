#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
	//vector<int>a[100];
	int n,m;
	cin>>n>>m;
	int count=0;
	int u[m+1],v[m+1];
	for(int i=1;i<=m;i++)
	{
		cin>>u[i]>>v[i];
	}
	int tam;
	for(int i=1;i<=m;i++)
	{
		if(abs(u[i]-v[i]>=2))
		{
			count++;
		}
	}
	for(int j=1;j<=m;j++)
	{
		
	}
}
