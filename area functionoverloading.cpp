// function overloading-> same function name and same data type is used for different parameters

#include<iostream>

using namespace std;

int area(int s);
float area(float r);
int area(int l,int b);

int main()
{
	int s,r,l,b;
	cout<<"Enter side,radius,length,breadth"<<endl;
	cin>>s>>r>>l>>b;
	int sq=area(s);
	float c=area(r);
	int re=area(l,b);
	
	cout<<sq<<endl;
	cout<<c<<endl;
	cout<<re<<endl;
}

int area(int s)
{
	return s*s;
}

float area(float r)
{
	return 3.14*r*r;
}

int area(int l, int b)
{
	return l*b;
}
