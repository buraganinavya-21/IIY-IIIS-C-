#include<iostream>
using namespace std;
class Base{
	public:
		Base(){
			cout<<"Base Class constructor called"<<endl;
		}
		~Base(){
			cout<<"Base Class destructor called"<<endl;
		}
};
class Derived:public Base{
	public:
		Derived(){
			cout<<"Derived class constructor called"<<endl;
		}
		~Derived(){
			cout<<"Derived class deconstructor called"<<endl;
		}
};
class MoreDerived:public Derived{
	public:
		MoreDerived(){
			cout<<"MoreDerived class constructor called"<<endl;
		}
		~MoreDerived(){
			cout<<"MoreDerived class destructor called"<<endl;
		}
	};
	int main()
{
	MoreDerived obj;
	return 0;
}

