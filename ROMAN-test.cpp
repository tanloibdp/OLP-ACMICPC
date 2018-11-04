#include<iostream>
#include<string>

using namespace std;
string s;
int a,b;
int kbiet(char ch);
int main()
{
	int i,tong=0;
	getline(cin,s);
	for(i=0;i<s.length();i++)
	{
		a=kbiet(s[i]);
		b=kbiet(s[i+1]);
		if(a>=b)
			tong+=a;
		else
		{
			tong+=b-a;
			i++;
		}
	}
	cout<<tong;
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
    
