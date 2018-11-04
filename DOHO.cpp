#include<iostream>
using namespace std;
int main()
{
	int h,p,s;
//	int h1,p1,s1;
	cin>>h>>p>>s;
	if(s==59)
	{
		s=0;
		if(p==59)
		{
			p=0;
			if(h==23)
			{
				h=0;
			}
			else
			{
				h++;
			}
		}
		else
		{
			p++;
		}
	}
	else
	{
		s++;
	}
	cout<<h<<" "<<p<<" "<<s;
	return 0;
}
