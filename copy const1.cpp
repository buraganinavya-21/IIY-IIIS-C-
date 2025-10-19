#include <iostream>
using namespace std;

class Student {
private:
    int age;   

public:
    Student(int i) {
        age = i;
        cout << "Parameterized constructor called." << endl;
    }

    Student(const Student &s) {
        age = s.age;
        cout << "Copy constructor called." << endl;
    }

    void display() {
        cout << "age: " << age << endl;
    }
};

int main() {
    Student s1(19);       
    Student s2 = s1;      

    cout << "\nStudent 1 Info: ";
    s1.display();

    cout << "Student 2 Info (copied from s1): ";
    s2.display();

    return 0;
}

