#include <bits/stdc++.h>
using namespace std;
int n, sx, sy, dx, dy, a [10][10], KQ=0;
int c [4] = {0, 0, 1, -1};
int d [4] = {1, -1, 0, 0};
void BackTracking(int sx, int sy);
int main ()
{
	scanf ("%d%d%d%d%d", &n, &sx, &sy, &dx, &dy);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf ("%d", &a [i][j]);
		}
	}
	BackTracking(sx, sy);
	if (KQ == 1)
		printf ("YES");
	else
		printf ("NO");
	return 0;
}
void BackTracking(int i, int j)
{
	if (i == dx && j == dy)
	{
		KQ = 1;
		return;
	}
	for (int k = 0; k <= 3; k++)
	{
		int xx = sx + c[i];
		int yy = sy + d[i];
		if (xx >= 1 && xx <= n && yy >= 1 && yy <= n && a [xx][yy] == 0)
		{
			a [xx][yy] = 1;
			BackTracking(xx, yy);
		}
	}
}
    
