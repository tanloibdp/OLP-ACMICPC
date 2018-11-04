#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int count=0;
	while(n<m)
	{
		if(n%10<5)
		{
			n=n+n*0.1;
		}
		else n=n+n*0.1+1;
		count++;
	}
	printf("%d",count);
	return 0;
}
