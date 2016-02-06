#include "Bank.h"
#include <iostream>
using namespace std;

Bank::Bank(uint fil_balance, uint balance_all)
{
	this->fil_balance = 0;
	this->balance_all = 0;
	Setfil_balance(fil_balance);
	Setbalance_all(balance_all);
}

Bank::Bank(uint deposite, uint t_deposite, uint t_credit, uint g_credit,uint val,uint value)
{
	this->deposite = 0;
	this->t_deposite = 0;
	this->t_credit = 0;
	this->g_credit = 0;
	Setdeposite(deposite);
	Sett_deposite(t_deposite,value);
	Sett_credit(t_credit);
	Setg_credit(g_credit, val);
}

void Bank::Setbalance_all(uint balance_all)
{
	this->balance_all = balance_all;
}

void Bank::Setfil_balance(uint fil_balance)
{
	if (fil_balance<balance_all)
		this->fil_balance = fil_balance;
	else fil_balance = balance_all;
}

void Bank::Setwf_balance(uint wf_balance)
{
	if (wf_balance < fil_balance)
		this->wf_balance = wf_balance;
	else
		wf_balance = fil_balance;
}

void Bank::Setwb_balance(uint wb_balance)
{
	if (wb_balance < balance_all)
		this->wb_balance = wb_balance;
	else
		wb_balance = balance_all;
}

void Bank::Setdeposite(uint deposite)
{
	if (deposite < wf_balance)
		this->deposite = deposite;
	else
		cout << "sorry we cant give u deposite :(";
}

void Bank::Sett_deposite(uint t_deposite, uint value)
{
	this->t_deposite += t_deposite*value / 100;
}

void Bank::Sett_credit(uint credit)
{
	if (t_credit < fil_balance || t_credit < balance_all)
		this->t_credit = credit;
	else
		cout << "sorry we can't give u credit :(";
}

void Bank::Setg_credit(uint g_credit, uint val)
{
	this->g_credit += g_credit*val / 100;
}
