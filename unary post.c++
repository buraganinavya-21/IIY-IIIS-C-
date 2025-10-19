#include<iostream>
using namespace std;
class Age{
	private:
		int years;
		public:
			Age()
			{
				years=0;
			}
			Age(int x)
			{
				years=x;
			}
			void printage()
			{
				cout<<"age is="<<years<<endl;
			}
			void operator ++(int)
			{
				years++;
			}
};
int main()
{
 Age a;
a.printage();
a++;
a.printage();
return 0;
}
