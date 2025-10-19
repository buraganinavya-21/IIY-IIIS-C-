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
int main() {
    B objB;   
    C objC;  
cout << "--- Object of Class B ---" << endl;
    objB.displayA(); 
    objB.displayB();  
cout << "\n--- Object of Class C ---" << endl;
    objC.displayA(); 
    objC.displayC();  
      return 0;
}

