#include<stdio.h>
int main()
{
	int n,x;
	int u=1;
	int dem=0;
	scanf("%d %d",&n,&x);
	int a[n+1];
	int b[n+1];
	int c[n+1];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=1;j<=n;j++)
	{
		scanf("%d",&b[j]);
	}
	for(int k=1;k<=n;k++)
	{
		for(int h=k-x;h<=k+x;h++)
		{
			if(a[k]==b[h])
			{
				c[u++]=k;
				dem++;
			}
		}
	}
	for(int i=1;i<=dem;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
