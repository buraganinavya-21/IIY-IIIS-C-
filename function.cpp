#include <iostream>

using namespace std;

int add(int a, int b) {
    return (a + b);
}

int main() {

    int sum;
    sum = add(100, 20);

    cout << "100 + 20 = " << sum << endl;

    return 0;
}

