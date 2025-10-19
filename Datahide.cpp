#include<iostream>
using namespace std;
class hide
{
	private:
		int a;
		public:
    void setdata()
    {
    	cout<<"enter a value"<<endl;
    	cin>>a;
    }
    void getdata()
    {
    	cout<<"a value is"<<a<<endl;
	}
	};
	int main(){
		hide ob;
		ob.setdata();
		ob.getdata();
		return 0;
}
