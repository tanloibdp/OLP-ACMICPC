#include<stdio.h>
int main()
{
	int a,b,c,m,n;
	int dem=0;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			for(int k=1;k<=n;k++)
			{
				if((15*i+9*j+k==3*m)&&(i+j+k==n))
				{
					a=i;
					b=j;
					c=k;
					dem++;
					break;
				}
			}
	if(dem==0)
	{
		printf("-1");
	}
	else printf("%d %d %d",a,b,c);
	return 0;
}
