#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	string s;
	getline(cin,s);
	int dem1=0;
	int dem2=0;
	getline(cin,s);
	int k=s.length();
	for(int i=0;i<k-1;i++)
	{
		if(s[i]==1+48&&s[i+1]==1+48)
		{
			dem1++;
		}
		if(s[i]==0+48&&s[i+1]==0+48)
		{
			dem2++;
		}
	}
	if(s[0]==1+48&&s[k-1]==1+48)
	{
		dem1++;
	}
	if(s[0]==+48&&s[k-1]==0+48)
	{
		dem2++;
	}
	int kq=abs(dem1-dem2);
	cout<<kq;
	return 0;
}
