#include "Student.h"
#include <iostream>
using namespace std;

void main()
{
	Student a("Petrov", "Petr", "Petrovich", "Konnaya 2", "095659123", 21, 12, 1992);
	a.Setcredit(9);
	a.Setexams(8);
	a.Setcourse_works(7);
	cout << a.Getsurname()<<endl;
	cout << a.Getname()<<endl;
	cout << a.Getpatronymic()<<endl;
	cout << a.Getadress()<<endl;
	cout << a.Gettelephone_number()<<endl;
	cout << a.Getday()<<endl;
	cout << a.Getmonth()<<endl;
	cout << a.Getyear()<<endl;
	cout << a.Getcredit(1) << endl;;
	cout << a.Getexams(1)<<endl;
	cout << a.Getcourse_works(1)<<endl;	
}
