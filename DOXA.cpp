#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n+1];
	int b[n+1];
	for(int i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	int t=a[1]*b[1];
	int min=b[1];
	for(int i=2;i<n;i++)
	{
		if(b[i]>min)
		{
			b[i]=min;
		}
		else
		{
			min=b[i];
		}
	}
	for(int i=2;i<n;i++)
	{
		t=t+a[i]*b[i];
	}
	printf("%d",t);
	return 0;
}
