#include<iostream>
using namespace std;
int main()
{
	string month;
	cout<<"enter any month\t";
	cin>>month;
	if(month=="jan"||month=="mar"||month=="may"||month=="july"||month=="aug"||month=="oct"||month=="dec")
	{
		cout<<"31 days";
	}
	else if(month=="feb")
{
        cout<<"28 or 29 days";
}
else if(month=="apr"||month=="june"||month=="sep"||month=="nov")
{
	     cout<<"30 days";
}
else
{
	    cout<<"give correct input";
}
return 0;
}
