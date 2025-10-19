#include <iostream>
using namespace std;

class binary {
public:
    int a, b, c;
    binary() : a(0), b(0), c(0) {}
    binary(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }
    binary operator+(const binary& obj) const {
        return binary(a + obj.a, b + obj.b, c + obj.c);
    }

    void display() const {
        cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    }
};

int main() {
    binary ob1(10, 20, 30);
    binary ob2(5, 15, 25);
    binary ob3;
    ob3 = ob1 + ob2; 
    ob3.display();
    return 0;
}

