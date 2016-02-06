#pragma once
#include "Bank.h"
typedef unsigned int uint;


class Bank
{
private:
	uint fil_balance;
	static uint balance_all;
	uint wf_balance;
	uint wb_balance;
	uint deposite;
	uint t_deposite;
	uint t_credit;
	uint g_credit;
	uint val;
	uint value;
public:

	void Setfil_balance(uint fil_balance);
	uint Getfil_balance(){ return fil_balance; };

	void Setbalance_all(uint balance_all);
	uint Getbalance_all(){ return balance_all; };
	
	void Setwf_balance(uint wf_balance);
	uint Getwf_balance(){ return wf_balance; };

	void Setwb_balance(uint wb_balance);
	uint Getwb_balance(){ return wb_balance; };

	void Setdeposite(uint deposite);
	uint Getdeposite(){ return deposite; };

	void Sett_deposite(uint t_deposite, uint value);
	uint Gett_deposite(){ return t_deposite; };

	void Sett_credit(uint t_credit);
	uint Gett_credit(){ return t_credit; };

	void Setg_credit(uint g_credit,uint val);
	uint Getg_credit(){ return g_credit; };

	
	Bank() : Bank(0, 0){};
	Bank(uint fil_balance, uint balance_all);
	Bank():Bank(1, 2, 3, 0, 0, 0){};
	Bank(uint wf_balance, uint wb_balance, uint deposite, uint t_deposite, uint t_credit, uint g_credit);
	~Bank();
	
};
