#include<iostream>
using namespace std;
int n, count=0,P,B;
int A[100000], result[100000];
void Process()
{
	cout<<"\nChuoi thu "<<count<<":\t";
	for(int i=1;i<=n;i++)
	{
		cout<<result[i]<<"\t";
	}
}
void Try(int i)
{
	for(int j=0;j<=1;j++)
	{
		result[i]=j;
		P=P+A[i]*j;
		if(i==n)
		{
			if(P==B)
			{
				count++;
				Process();
			}
		}
		else Try(i+1);
		P=P-A[i]*j;
	}
	
}
int main()
{
	cin>>n;
	cin>>B;
	for(int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
	Try(1);
}
