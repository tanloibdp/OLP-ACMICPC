#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	int b[m][n];
	for(int i=m;i>0;i--)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[j]<i)
				printf(".");
			if(a[j]>=i) printf("#");
		}
		printf("\n");
	}
	return 0;
}
