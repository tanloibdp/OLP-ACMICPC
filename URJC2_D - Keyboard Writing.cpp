#include<stdio.h>
#include<string.h>
#define SIZE 100000
typedef struct
{
	char A[SIZE];
	char B[SIZE];
}test;
void InPut_Data(test*ts, int n);
int main()
{
	test*ts;
	int n;
	scanf("%d",&n);
	ts=new test[n];
	InPut_Data(ts,n);
}
void InPut_Data(test*ts, int n)
{
	for(int i=1;i<=n;i++)
	{
		gets((ts+i)->A);
		gets((ts+i)->B);
	}
}
void Solve_Data(test*ts, int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(ts[i].A[i]==ts[i].B[j])
			{
				dem++;
			}
		}
		
	}
}
