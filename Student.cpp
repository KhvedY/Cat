#include "Student.h"

Student::Student(char* surname, char* name, char* patronymic, char* adress, uint telephone_number, uint day, uint month, uint year)
{
	
	this->Name.surname = nullptr;
	this->Name.name = nullptr;
	this->Name.patronymic = nullptr;
	this->p_data.adress = nullptr;
	Setsurname(surname);
	Setname(name);
	Setpatronymic(patronymic);
	Setadress(adress);
	Settelephone_number(telephone_number);
	Setday(day);
	Setmonth(month);
	Setyear(year);
}

Student::Student()
{
	delete[]Name.surname;
	delete[]Name.name;
	delete[]Name.patronymic;
	delete[]p_data.adress;
}

Student::Student(uint* credit, uint* exams, uint* course_works)
{
	this->mark.credit = nullptr;
	this->mark.exams = nullptr;
	this->mark.course_works = nullptr;
	Setcredit(credit);
	Setexams(exams);
	Setcourse_works(course_works);
}

Student::Student()
{
	delete[]mark.credit;
	delete[]mark.exams;
	delete[]mark.course_works;
}

void Setday(uint day)
{
	if (day < 31)
    birthday.Day = day;
}
