#pragma once
#include "Bank.h"
typedef unsigned int uint;


class Bank
{
private:
	uint fil_balance;
	void Setfil_balance(uint fil_balance);
	uint Getfil_balance(){ return fil_balance; };

	static uint balance_all;
	void Setbalance_all(uint balance_all);
	uint Getbalance_all(){ return balance_all; };

public:
	uint value;
	uint val;

	uint deposite;
	void Setdeposite(uint deposite);
	uint Getdeposite(){ return deposite; };

	uint t_deposite;
	void Sett_deposite(uint t_deposite,uint value);
	uint Gett_deposite(){ return t_deposite; };

	uint t_credit;
	void Sett_credit(uint t_credit);
	uint Gett_credit(){ return t_credit; };

	uint g_credit;
	void Setg_credit(uint g_credit,uint val);
	uint Getg_credit(){ return g_credit; };

	Bank(uint fil_balance, uint balance_all);
	Bank() : Bank(0, 0){};
	~Bank();
	Bank(uint deposite, uint t_deposite, uint t_credit, uint g_credit);
	Bank() :Bank(0, 0, 0, 0, 0, 0){};
	~Bank();
};