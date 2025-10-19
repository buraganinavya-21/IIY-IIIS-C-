#include <iostream>
using namespace std;
class Avenger {
	public:
	virtual void introduce(){
		cout<<"Hi, I am Avenger" <<endl;
	}
};
class IronMan: public Avenger {
	public:
		void introduce(){
		cout << "Hey, I am Iron man. Genius , Playboy, Billionaire" << endl;
      }
};
int main()
{
	Avenger *avenger;
	IronMan ironMan;
	avenger = &ironMan;
	avenger -> introduce();
};
