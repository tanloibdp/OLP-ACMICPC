#include<iostream>
using namespace std;
int A[100000],P,k,n,B,count=0;
int result[100000];
void Process()
{
	cout<<count;
	for(int i=1;i<=k;i++)
	{
		cout<<result[i];
	}
}
void Try(int i, int result[],int n, int k)
{
	for(int j=result[i-1]+1;j<=n-k+i;j++)
	{
		result[i]=j;
		P=P+A[j];
		if(i==k)
		{
			if(P==B)	Process(result,k);
			else if(P<B)	Try(i+1,result,n,k);
			P=P-A[j];
		}
	}
}
int main()
{
	cin>>n>>k>>B;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	Try(1,result,n,k);
}
