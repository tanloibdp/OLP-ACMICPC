#include<stdio.h>
#define FOR(i,a,b) for(int i=a;i<=b;i++)
int n,sx,sy,dx,dy,a[10][10],KQ=0;
int c [4] = {0, 0, 1, -1};
int d [4] = {1, -1, 0, 0};
void test(int sx, int sy)
{
    a[sx][sy]=1;
    if(sx==dx && sy==dy)
    {
    	KQ=1;
    	return;
	}
    for (int i = 0; i <= 3; i++)
	{
		int xx = sx + c[i];
		int yy = sy + d[i];
		if (xx >= 1 && xx <= n && yy >= 1 && yy <= n && a [xx][yy] == 0)
		{
			a [xx][yy] = 1;
			test(xx, yy);
		}
	}
}
int main()
{
	scanf("%d %d %d %d %d",&n,&sx,&sy,&dx,&dy);
	FOR(i,1,n)
	{
		FOR(j,1,n)
		{
			scanf("%d",&a[i][j]);
			a[0][i]=1;
            a[i][0]=1;
            a[n+1][i]=1;
            a[i][n+1]=1;
		}
	}
	test(sx,sy);
    if(KQ == 1) printf("YES");
    else printf("NO");
    return 0;
}
    
