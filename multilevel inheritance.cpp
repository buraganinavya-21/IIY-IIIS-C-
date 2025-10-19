#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "This is Class A" << endl;
    }
};
class B : public A {
public:
    void displayB() {
        cout << "This is Class B (derived from A)" << endl;
    }
};
class C : public B {
public:
    void displayC() {
        cout << "This is Class C (derived from B)" << endl;
    }
};

int main() {
    C obj;        

    obj.displayA();  
    obj.displayB();  
    obj.displayC();
    return 0; 
}

