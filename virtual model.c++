#include<iostream>

using namespace std;

class A{
	public:
		virtual void display()
		{
			cout<<"Base class"<<endl;
		}
		
		virtual void s()
		{
			cout<<"base"<<endl;
		}

};

class B : public A{
	public:
		void display()
		{
			cout<<"Child class1"<<endl;
		}
		void s()
		{
			cout<<"Child"<<endl;
		}

};

class C : public A
{
	public:
		void display()
		{
			cout<<"Child class2"<<endl;
		}
	
};

int main()
{
	A *a;
	B b;
	C c;
	a=&b;
	a->display();
	a->s();
	a=&c;
	a->display();
	return 0;
}
