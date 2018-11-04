#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int temp=1e9,n,m,a[1001],b[1001],gtnn,k,X,x;
void InPut();
int solve();
int main()
{
	InPut();
	solve();
    cin>>X;
    cout<<max(0,X/temp-1);
    return 0;
}
void InPut()
{
	cin>>n;
    for(int i=1;i<=n;i++)
    {
		cin>>a[i];
    }
	cin>>m;
    for(int i=1;i<=m;i++)
	{
		cin>>b[i];
	}
}
int solve()
{
	for(int i=1;i<=n;i++)
    {
        gtnn=1e9;
        cin>>k;
        while(k--)cin>>x,gtnn=min(gtnn,b[x]);
        temp=min(temp,a[i]+gtnn);
    }
    return temp;
}
