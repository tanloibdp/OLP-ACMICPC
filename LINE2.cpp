#include<stdio.h>
#define FOR(i,a,b) for(int i=a;i<=b;i++)
int n,sx,sy,dx,dy,a[10][10],KQ=0;
int c[4]={0,0,1,-1};
int d[4]={1,-1,0,0};
void BackTracking(int x,int y);
int main ()
{
	scanf ("%d %d %d %d %d",&n,&sx,&sy,&dx,&dy);
	FOR(i,1,n)
	{
		FOR(j,1,n)
		{
			scanf ("%d",&a[i][j]);
		}
	}
	BackTracking(sx,sy);
	if (KQ==1)
		printf("YES");
	else
		printf("NO");
	return 0;
}
void BackTracking(int i,int j)
{
	if (i==dx&&j==dy)
	{
		KQ=1;
		return;
	}
	for (int k=0;k<=3;k++)
	{
		int aa=i+c[k];
		int bb=j+d[k];
		if (aa>=1 && aa<=n && bb>=1 && bb<=n && a[aa][bb]==0)
		{
			a[aa][bb]=1;
			BackTracking(aa,bb);
		}
	}
}
    
