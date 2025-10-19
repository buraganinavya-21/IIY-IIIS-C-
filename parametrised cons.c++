#include <iostream>
using namespace std;
class employee{
	public:
		int age;
		employee(int x){
			age=x;
		}
		};
		int main(){
			employee c1(40);
			employee c2(30);
			employee c3(50);
			cout<<c1.age<<"\n";
			cout<<c2.age<<"\n";
			cout<<c3.age<<"\n";
			return 0;
		}
