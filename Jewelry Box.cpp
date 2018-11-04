#include<iostream>
#include<math.h>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
	cout<<fixed<<setprecision(6);
	int t;cin>>t;
	double x,y,tam,h;
	while(t--)
	{
		cin>>x>>y;
		double h1,h2;
        double delta= pow(-4*x-4*y, 2) - 48*x*y;
        h1=(4*x+4*y-sqrt(delta))/(24.0);
        h2=(4*x+4*y+sqrt(delta))/(24.0);
        double h11=(x-2*h1)*(y-2*h1)*h1;
        double h12=(x-2*h2)*(y-2*h2)*h2;
        cout<<max(h11, h12)<<endl;
	}
	return 0;
}
