#include <iostream>
using namespace std;
template <typename P>
P mymax(P a, P b)
{
	return (a > b)? a:b;
}
int main()
{
	cout << "Max of 2, 3 is: " << mymax<int>(2,3) << endl;
	cout << "Max of 2.5, 3.5 is: " << mymax<double>(2.5,3.5) << endl;
	cout << "Max of g, b is: " << mymax<int>('g','b') << endl;
	return 0;
}
