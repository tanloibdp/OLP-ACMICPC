#include <stdio.h>
int main()
{
	int n;
	int S=1;
	scanf("%d",&n);
	for (int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			S=S+i;
		}
	}
	if (S==n)
		printf("YES");
	else
		printf("NO");
	return 0;
}
