#include<iostream>

using namespace std;
int a=80;
int m(int a);
int main()
{
	int a=50;
	cout<<a+::a<<endl;
	cout<<a<<endl;
	m(a);
	return 0;
	}

int m(int a)
	{
		a=20;
		cout<<a+::a<<endl;
	}

