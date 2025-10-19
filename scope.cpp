#include <iostream>

using namespace std;
int a=50;
int main()
{
	int a=10;
	cout<<a<<"\t";
	cout<<a+::a;
	return 0;
}

