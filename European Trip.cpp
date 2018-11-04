#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<fixed<<setprecision(9);
	double xa,ya,xb,yb,xc,yc;
	cin>>xa>>ya;
	cin>>xb>>yb;
	cin>>xc>>yc;
	//Tinh AB
	double AB=sqrt(pow(xa-xb,2)+pow(ya-yb,2));
	//Tinh AC
	double AC=sqrt(pow(xa-xc,2)+pow(ya-yc,2));
	//Tinh BC
	double BC=sqrt(pow(xb-xc,2)+pow(yb-yc,2));
	double xi,yi;
	xi=(double)((BC*xa+AC*xb+AB*xc)/(BC+AC+AB));
	yi=(double)((BC*ya+AC*yb+AB*yc)/(BC+AC+AB));
	cout<<xi<<" "<<yi<<endl;
	cout<<AB<<"\t"<<BC<<"\t"<<AC;
	return 0;
}
