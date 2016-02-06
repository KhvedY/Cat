#include "Bank.h"
#include <iostream>
using namespace std;

void Bank_frauds()
{
	Bank f;
	f.Setfil_balance(10000);
	cout << "Bank's filial balance: " << f.Getfil_balance() << endl;
	f.Setbalance_all(90000);
	cout << "Bank's general balance: " << f.Getbalance_all() << endl;
	f.Setwf_balance(8967);
	cout << "What is the balance of fillial? :" << f.Getwf_balance() << endl;
	f.Setwb_balance(64537);
	cout << "What is banks's balance? :" << f.Getwb_balance() << endl;
	f.Setdeposite(1351);
	cout << "Take deposite :" << f.Getdeposite() << endl;
	f.Sett_deposite(1351, 13);
	cout << "Get deposite back with persents :" << f.Gett_deposite() << endl;
	f.Sett_credit(2000);
	cout << "Take credit :" << f.Gett_credit() << endl;
	f.Setg_credit(2000, 12);
	cout << "Get credit back with persents :" << f.Getg_credit() << endl;
	cout << endl;
}

void main()
{
	Bank_frauds();
	cout << endl;
}
