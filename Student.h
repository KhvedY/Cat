#pragma once
#include <iostream>
#include "Student.h"
typedef unsigned int uint;
using namespace std;

struct Birthday
{
	uint Day;
	uint Month;
	uint Year;
	bool YearIsLeap(uint year);
	uint ThisDay();
};

struct Fullname
{
	char* surname;
	char* name;
	char* patronymic;
	Fullname()
	{
		surname = nullptr;
		name = nullptr;
		patronymic = nullptr;
	}
	~Fullname()
	{
		if (surname) delete[]surname;
		if (name) delete[]name;
		if (patronymic) delete[] patronymic;
	}
};

struct Marks
{
	uint *credit;
	uint *exams;
	uint *course_works;
	uint c_size = 0;
	uint e_size = 0;
	uint cw_size = 0;
	Marks()
	{
		credit = nullptr;
		exams = nullptr;
		course_works = nullptr;
	}
	~Marks()
	{
		if (credit) delete[]credit;
		if (exams) delete[]exams;
		if (course_works) delete[]course_works;
	}
};

struct Personal_data
{
	char* adress;
	char* telephone_number;
	Personal_data()
	{
		adress = nullptr;
		telephone_number = nullptr;
	}
	~Personal_data()
	{
		if (adress) delete[]adress;
		if (telephone_number) delete[]telephone_number;
	}
};

class Student
{
private:

	Birthday birthday;
	Fullname Name;
	Marks mark;
	Personal_data p_data;

public:

	Student(char* surname, char* name, char* patronymic, char* adress, char* telephone_number, uint day, uint month, uint year);
	Student() 
	{
		char *surname = new char[];
		char *name = new char[];
		char *patronymic = new char[];
		char *adress = new char[];
		char *telephone_number = new char[];
		uint day = 21;
		uint month = 12;
		uint year = 1992;
	};
	~Student();


	void SetMarks(uint *&arr, uint &size, uint SomeMark);

	void Setday(uint Day);
	uint Getday(){ return birthday.Day; };

	void Setmonth(uint Month);
	uint Getmonth(){ return birthday.Month; };

	void Setyear(uint Year);
	uint Getyear(){ return birthday.Year; };

	void Setsurname(char* surname);
	char* Getsurname(){ return Name.surname; };

	void Setname(char* name);
	char* Getname(){ return Name.name; };

	void Setpatronymic(char* patronymic);
	char* Getpatronymic(){ return Name.patronymic; };

	void Setcredit(uint SomeMarks);
	uint Getcredit(uint ind)
	{
		if (mark.c_size >= ind)
			return mark.credit[ind - 1];
		else
			return 0;
	};

	void Setexams(uint SomeMarks);
	uint Getexams(uint ind)
	{
		if (mark.e_size >= ind)
			return mark.exams[ind - 1];
		else
			return 0;
	};

	void Setcourse_works(uint SomeMarks);
	uint Getcourse_works(uint ind)
	{
		if (mark.cw_size >= ind)
			return mark.course_works[ind - 1];
		else
			return 0;
	};

	void Setadress(char* adress);
	char* Getadress(){ return p_data.adress; };

	void Settelephone_number(char* telephone_number);
	char* Gettelephone_number(){ return p_data.telephone_number; };

};
