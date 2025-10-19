#include <iostream>
using namespace std;

class demo {
public:
    int a, b, c;

    demo(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }
    demo& operator++() {
        ++a;
        ++b;
        ++c;
        return *this;
    }

    void display() {
        cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    }
};

int main() {
    demo obj(10, 20, 30);
    obj.display();
    ++obj;  
    obj.display();
    ++(++obj); 
    obj.display();
    return 0;
}

