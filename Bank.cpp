#include "Bank.h"
#include <iostream>
using namespace std;

uint Bank::balance_all = 500000;


void Bank::Setfil_balance(uint fil_balance)
{
	if (fil_balance<balance_all)
		this->fil_balance = fil_balance;
	else fil_balance = balance_all;
}

void Bank::Deposite(uint deposite)
{
		this->deposite = deposite;	
}

void Bank::Credit(uint credit)
{
	if (credit < fil_balance && credit < balance_all)
		this->credit = credit;
	else
		cout << "sorry we can't give u credit :(";
}

void Bank::Return_deposite(uint deposite, uint persent)
{
	this->deposite += deposite*persent / 100;
}

void Bank::Return_credit(uint credit, uint persent)
{
	this->credit += credit*persent / 100;
}
