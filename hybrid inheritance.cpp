#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "This is Class A (Base Class)" << endl;
    }
};
class B : public A {
public:
    void displayB() {
        cout << "This is Class B (Derived from A)" << endl;
    }
};
class C : public A {
public:
    void displayC() {
        cout << "This is Class C (Derived from A)" << endl;
    }
};
class D : public B, public C {
public:
    void displayD() {
        cout << "This is Class D (Derived from B and C)" << endl;
    }
};
int main() {
    D obj;
    obj.B::displayA();
    obj.C::displayA();
    obj.displayB();  
    obj.displayC();
    obj.displayD();

    return 0;
}

