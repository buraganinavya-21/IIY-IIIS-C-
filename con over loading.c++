#include <iostream>
using namespace std;
class student{
	private:
		string Name;
		int Age;
		public:
			student(){
				Name="abc";
				Age=23;
			}
			student(string str , int x){
				Name=str;
				Age=x;
			}
			string get_Name(){
				return Name;
			}
			int get_Age(){
				return Age;
			}
};
int main(){
	student stu1 , stu2 ("def",25);
	cout<<"student1 Name:" << stu1.get_Name()<<"student1 Age:"<<stu1.get_Age()<<endl;
	cout<<"student2 Name:" << stu2.get_Name()<<"student2 Age:"<<stu2.get_Age()<<endl;
	return 0;

}
