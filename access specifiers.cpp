#include<iostream>
using namespace std;
class bank
{
	public:
	int acc_no;
	string name;
};
int main()
{
	bank b;
	cout<<"enter account no and name";
	cin>>b.acc_no>>b.name;
	cout<<"account no\t"<<b.acc_no<<"\tname\t"<<b.name;
	return 0;
}

