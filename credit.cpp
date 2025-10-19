#include<iostream>
using namespace std;
int credit(int a);
int withdraw(int a);
int display();
class bank
{
public:
		int acc_no;
	    string name;
	    int balance;	
		int credit(int amount)
	{
		balance=balance+amount;
		cout<<"Total amount"<<balance;
	}
	
	int withdraw(int amount)
	{
		if(amount <= balance) 
		{
				balance = balance - amount;
				cout << "Remaining Amount: " << balance << endl;
			} 
			else 
			{
				cout << "Insufficient balance!" << endl;
			}
	}
	
	int display()
	{
		cout<<balance<<endl;
	}		
};
int main()
{
	bank b;
	cout<<"Enter the acc_no, name,balance :"<<endl;
	cin>>b.acc_no>>b.name>>b.balance;
    int amount;
	int ch;
    while(1)
    {
	cout<<"Enter your choice:1.credit 2.withdraw 3.display"<<endl;
	cin>>ch;
	cout<<"Enter amount"<<endl;
	cin>>amount;
	switch(ch)
	{
		case 1:b.credit(amount);
		break;
		case 2:b.withdraw(amount);
		break;
		case 3:b.display();
		break;
		return 0;
}
}
}

