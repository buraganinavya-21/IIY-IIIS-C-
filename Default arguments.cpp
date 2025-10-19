#include<iostream>
using namespace std;
int sum(int a=2,int b=1,int c=4);
int main()
{
	cout<<"addition is\t"<<sum(2)<<endl;
	cout<<"second addition\t"<<sum(1,3)<<endl;
	cout<<"third addition\t"<<sum()<<endl;
	return 0;
}
int sum(int a,int b,int c)
{
	return a+b+c;
}

