#include<iostream>
using namespace std;
class hide
{
	private:
		int a;
		public:
		int b;
		public:
    void setdata()
    {
    	cout<<"enter a and b value"<<endl;
    	cin>>a>>b;
    }
    void getdata()
    {
    	cout<<"a value is"<<a+b<<endl;
	}
	};
	int main(){
		hide ob;
		ob.b=5;
		ob.setdata();
		ob.getdata();
		return 0;
}
