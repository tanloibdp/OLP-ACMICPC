#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	long long res,s1,s2,k,k1,k2,a[1000000];
    cin>>n;
    for(int i=0;i<n;i++)
	{
		cin>>a[i];
    }
	s1=a[0];
    s2=a[1];
    res=-1000000000000;
    for(int i=2;i<n;i++)
    {
        if (s1+2*s2+3*a[i]>res) res=s1+2*s2+3*a[i];

        if (s2>s1)
        {
            if (2*a[i]>s2+s1)
            {
                s1=s2;
                s2=a[i];
            }
        }
        else
        {
            if (a[i]>s2) s2=a[i];
        }

    }
    cout<<res;
    return 0;
}
    
