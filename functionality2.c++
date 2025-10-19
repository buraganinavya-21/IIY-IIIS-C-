#include <iostream>
using namespace std;

class Avengers {
public:
    virtual void avengerAttack() {
        cout << "Avenger Attack!" << endl;
    }
    void showVictorySign() {
        cout << "Avenger show Victory Sign!" << endl;
    }
};

class BlackWidow : public Avengers {
public:
    void avengerAttack(){
        cout << "Black Widow Attack!" << endl;
    }

    void showVictorySign() {
        cout << "Black Widow show Victory Sign!" << endl;
    }
};

int main() {
    Avengers* avenger;
    BlackWidow blackWidow;
    avenger = &blackWidow;
    avenger->avengerAttack();      
    avenger->showVictorySign();

    return 0;
}
