#include<iostream>
using namespace std;
class Travel
{
	private:
		int speed;
		int distance;
public:
	void set_values(int a, int b)
	{
		speed=a;
		distance=b;
	}
	friend double findTimeofTravel(Travel);
	};
	double findTimeofTravel(Travel t)
	{
		double time=(double)t.distance/(double)t.speed;
		return time;
	}
	int main()
	{
		Travel t;
		t.set_values(10,30);
		cout<<"TimeofTravel:"<<findTimeofTravel(t)<<"hrs"<<endl;
		return 0;
	}
