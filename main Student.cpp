#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include <iostream>
using namespace std;

void main()
{
	Student a("Petrov", "Petr", "Petrovich", "Konnaya 2", "095659123", 21, 12, 1992);
	a.Setcredit(9); 
	a.Setcredit(15);/*
	a->Setexams(10);
	a->Setcourse_works(11);*/
	cout << a.Getcredit(1);
	cout << a.Getcredit(2);

	//a->Get_birthday();
	//a->Get_mark();
	//a->Get_name();
	//a->Get_p_data();
}
