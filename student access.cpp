#include<iostream>
using namespace std;
class student
{
	public:
	int Roll_no;
	string name;
};
int main()
{
	student s;
	cout<<"enter Roll no and name";
	cin>>s.Roll_no>>s.name;
	cout<<"Roll no\t"<<s.Roll_no<<"\tname\t"<<s.name;
	return 0;
}

