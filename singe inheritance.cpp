#include <iostream>
using namespace std;
class Parent {
public:
    void display() {
        cout << "This is Parent Class" << endl;
    }
};
class Child : public Parent {
public:
    void show() {
        cout << "This is Child Class" << endl;
    }
};

int main() {
    Child obj;       
    obj.display();   
    obj.show();      
    return 0;
}

