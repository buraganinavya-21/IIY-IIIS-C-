#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "This is Class A" << endl;
    }
};
class B:public A {
    void displayB() {
        cout << "This is Class B" << endl;
    }
};
class C : public A {
    void displayC() {
        cout << "This is Class C (derived from A and B)" << endl;
    }
};
class D:public B, public C{
	  void showC() {
        cout << "This is Class C (derived from A and B)" << endl;
    }
};

int main() {
    D obj; 
	obj.displayA();       
}
