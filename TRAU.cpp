#include<stdio.h>
int main()
{
	int a,b,c,m,n;
	scanf("%d %d",&n,&m);
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if((14*i+8*j)==(3*m-n))
			{
				a=i;
				b=j;
				c=n-a-b;
				break;
			}
		}
	}
//	printf("%d %d",m,n);
	if(a>0&&b>0&&c>0)
	{
		printf("%d %d %d",a,b,c);
	}
	else printf("-1");
	return 0;
}
