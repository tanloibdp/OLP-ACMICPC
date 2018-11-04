#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	a[0]=0;
	a[n+1]=0;
	int b[n+1];
	if(((a[n-2]==2||a[n-2]==1)&&(a[n-1]==2||a[n-1]==1)&&a[n]==2)||((a[1]==1||a[1]==2)&&a[2]==2&&a[3]==2))
	{
		printf("0");
	}
}
