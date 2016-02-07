#include "Bank.h"
#include <iostream>
using namespace std;


void main()
{
	Bank f;
	f.Setfil_balance(10000);
	cout << "Bank's filial balance: " << f.Getfil_balance() << endl;
	cout << "Bank's general balance: " << f.Getbalance_all() << endl;
	f.Deposite(1351);
	cout << "Take deposite :" << f.Deposite() << endl;
	f.Return_deposite(1351, 13);
	cout << "Get deposite back with persents :" << f.GetReturn_deposite() << endl;
	f.Credit(2000);
	cout << "Take credit :" << f.Credit() << endl;
	f.Return_credit(2000, 12);
	cout << "Get credit back with persents :" << f.GetReturn_credit() << endl;
	cout << endl;
}


