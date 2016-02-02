#include "Bank.h"
#include <iostream>
using namespace std;

void Bank_frauds()
{
    Bank:Bank(10000, 90000);
	cout << "Bank's filial balance: " << Bank::Getfil_balance()<<endl;
	cout << "Bank's general balance: " << Bank::Getbalance_all() << endl;
}

void main()
{
	Bank_frauds();
	cout<<endl;
}
