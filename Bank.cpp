#include "Bank.h"

Bank::Bank(uint fil_balance, uint balance_all)
{
	this->fil_balance = 0;
	this->balance_all = 0;
	Setfil_balance(fil_balance);
	Setbalance_all(balance_all);
}

Bank::Bank(uint deposite, uint t_deposite, uint t_credit, uint g_credit)
{
	this->deposite = 0;
	this->t_deposite = 0;
	this->t_credit = 0;
	this->g_credit = 0;
	Setdeposite(deposite);
	Sett_deposite(t_deposite,value);
	Sett_credit(t_credit);
	Setg_credit(g_credit,val);
}

void Bank::Setfil_balance(uint fil_balance)
{
	if (fil_balance<balance_all)
	this->fil_balance = fil_balance;
	else fil_balance = balance_all;
}

void Bank::Setbalance_all(uint balance_all)
{
	this->balance_all = balance_all;
}

void Bank::Setdeposite(uint deposite)
{
	this->deposite = deposite;
}

void Bank::Sett_deposite(uint t_deposite,uint value)
{
	this->t_deposite += t_deposite*value/100;
}

void Bank::Sett_credit(uint credit)
{
	if (t_credit < fil_balance||t_credit<balance_all)
	this->t_credit = credit;
}

void Bank::Setg_credit(uint g_credit, uint val)
{
	this->g_credit += g_credit*val/100;
}
