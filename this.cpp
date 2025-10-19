#include<iostream>
using namespace std;
class demo
{
	public:
		int a=5;
		void setdata(int a)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
		{
			this->a=a;
			cout<<"value of a is"<<a<<endl;
		}
	};
	int main()
	{
		demo d;
		cout<<d.a<<endl;
		d.setdata(d.a);
	}
