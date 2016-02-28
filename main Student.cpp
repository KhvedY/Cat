#include "Student.h"
#include <iostream>
using namespace std;

void main()
{
	Student* a = new Student("Petrov","Petr","Petrovich","Konnaya 2","095659123",21,12,1992);
	a->Setcredit(9);
	a->Setexams(10);
	a->Setcourse_works(11);

	a->Get_birthday();
	a->Get_mark();
	a->Get_name();
	a->Get_p_data();
}
