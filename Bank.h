#pragma once
#include "Bank.h"
typedef unsigned int uint;


class Bank
{
private:
	uint fil_balance;
	static uint balance_all;
	uint persent;
	uint deposite;
	uint credit;

public:

	void Setfil_balance(uint fil_balance);
	uint Getfil_balance(){ return fil_balance; };

	static uint Getbalance_all(){ return balance_all; };

	void Deposite(uint deposite);
	uint Deposite(){ return deposite; };

	void Return_deposite(uint deposite, uint persent);
	uint GetReturn_deposite(){ return deposite; };

	void Credit(uint credit);
	uint Credit(){ return credit; };

	void Return_credit(uint credit, uint persent);
	uint GetReturn_credit(){ return credit; };

	Bank()
	{
		fil_balance = 10000;
		balance_all += fil_balance;
	}
};
