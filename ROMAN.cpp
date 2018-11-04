#include<iostream>
#include<string>
using namespace std;
int kbiet(char ch);
int main()
{
	string s;
	int a,b;
	int i,S=0;
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		a=kbiet(s[i]);
		b=kbiet(s[i+1]);
		if(a>=b)
			S+=a;
		else
		{
			S+=b-a;
			i++;
		}
	}
	cout<<S;
}

int kbiet(char ch)
{
	int a;
	switch(ch)
	{
		case 'M': a=1000; break;
		case 'D': a=500; break;
		case 'C': a=100; break;
		case 'L': a=50; break;
		case 'X': a=10; break;
		case 'V': a=5; break;
		case 'I': a=1; break;
	}
	return a;
}
