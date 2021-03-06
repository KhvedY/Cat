#include "Student.h"

Student::Student(char* surname, char* name, char* patronymic, char* adress, char* telephone_number, uint day, uint month, uint year)
{
	Setsurname(surname);
	Setname(name);
	Setpatronymic(patronymic);
	Setadress(adress);
	Settelephone_number(telephone_number);
	Setday(day);
	Setmonth(month);
	Setyear(year);
}

Student::~Student()
{
	if (Name.surname) delete[]Name.surname;
	if (Name.name) delete[]Name.name;
	if (Name.patronymic) delete[]Name.patronymic;
	if (p_data.adress) delete[]p_data.adress;
	if (p_data.telephone_number) delete[]p_data.telephone_number;
	if (mark.credit) delete[]mark.credit;
	if (mark.course_works) delete[]mark.course_works;
	if (mark.exams) delete[]mark.exams;
};

bool Birthday::YearIsLeap(uint year)
{
	if (this->Year % 4 == 0 && this->Year % 100 != 0 || this->Year % 400 == 0)
		return true;
	return false;
}

uint Birthday::ThisDay()
{
	uint a;
	if (this->Month == 1 || this->Month == 3 || this->Month == 5 || this->Month == 7 || this->Month == 8 || this->Month == 10 || this->Month == 12)
		a = 31;
	else if (this->Month == 4 || this->Month == 6 || this->Month == 9 || this->Month == 11)
		a = 30;
	if (this->Month == 2 && YearIsLeap(this->Year) == true)
		a = 29;
	if (this->Month == 2 && YearIsLeap(this->Year) == 0)
		a = 28;
	return a;
}

void Student::Setday(uint day)
{
	if (day > 0 && day <= birthday.ThisDay())
		this->birthday.Day = day;
}

void Student::Setmonth(uint month)
{
	if (month > 0 && month < 13)
		this->birthday.Month = month;
}

void Student::Setyear(uint year)
{
	if(year > 0 && year < 2016)
	this->birthday.Year = year;
}

void Student::Setsurname(char* surname)
{
	if (this->Name.surname)
		delete[]this->Name.surname;
	uint size = strlen(surname);
	this->Name.surname = new char(size + 1);
	strcpy_s(this->Name.surname, size + 1, surname);
}

void Student::Setname(char* name)
{
	if (this->Name.name)
		delete[]this->Name.name;
	uint size = strlen(name);
	this->Name.name = new char(size + 1);
	strcpy_s(this->Name.name, size + 1, name);
}

void Student::Setpatronymic(char* patronymic)
{
	if (this->Name.patronymic)
		delete[]this->Name.patronymic;
	uint size = strlen(patronymic);
	this->Name.patronymic = new char(size + 1);
	strcpy_s(this->Name.patronymic, size + 1, patronymic);
}

void Student::Setcredit(uint SomeMarks)
{
	SetMarks(mark.credit, mark.c_size, SomeMarks);
}

void Student::Setexams(uint SomeMarks)
{
	SetMarks(mark.exams, mark.e_size, SomeMarks);
}

void Student::Setcourse_works(uint SomeMarks)
{
	SetMarks(mark.course_works, mark.cw_size, SomeMarks);
}

void Student::Setadress(char* adress)
{
	if (this->p_data.adress)
		delete[]this->p_data.adress;
	this->p_data.adress = new char(strlen(adress) + 1);
	strcpy_s(this->p_data.adress, strlen(adress) + 1, adress);
}

void Student::Settelephone_number(char* telephone_number)
{
	if (this->p_data.telephone_number)
		delete[]this->p_data.telephone_number;
	this->p_data.telephone_number = new char(strlen(telephone_number) + 1);
	strcpy_s(this->p_data.telephone_number, strlen(telephone_number) + 1, telephone_number);
}

void Student::SetMarks(uint*&arr, uint &size, uint SomeMarks)
{
	uint *temp = new uint[size + 1];
	for (int i = 0; i < size; i++)
		temp[i] = arr[i];
	temp[size] = SomeMarks;
	if (arr)delete[]arr;
	arr = temp;
	size++;
}
