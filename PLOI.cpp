#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[11]={0};
	int dem=0;
	int m;
	int b[11];
	//int j=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m;
		a[m]=a[m]+1;	//Lay so ao dua vao lam dia chi cua mang
		if(a[m]==3)
		{
			dem++;
			b[dem]=m;
			a[m]=0;
		}
	}
	cout<<dem<<"\n";
	for(int i=1;i<=dem;i++)
	{
		cout<<b[i]<<" ";
	}
}
