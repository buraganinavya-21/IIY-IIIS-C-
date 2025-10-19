#include<iostream>
using namespace std;
class demo
{
	public:
		int a;
		void setdata(int a)
		{
			cout<<"value of a is"<<a<<endl;
		}
	};
	int main()
	{
		demo d;
		d.setdata(15);
	}

