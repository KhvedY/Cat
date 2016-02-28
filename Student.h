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
};

struct Fullname
{
	char* surname;
	char* name;
	char* patronymic; //отчество
};

struct Marks
{
	uint *credit;
	uint *exams;
	uint *course_works;
	uint c_size = 0;
	uint e_size = 0;
	uint cw_size = 0;

};

struct Personal_data
{
	char* adress;
	char* telephone_number;
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
	Student() :Student("Ivanov", "Ivan", "Ivanovich", "Deribasovskaya 1", "322223", 1, 2, 1990){};
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
	uint Getcredit(){ return mark.SomeMarks; };

	void Setexams(uint SomeMarks);
	uint Getexams(){ return mark.SomeMarks; };

	void Setcourse_works(uint SomeMarks);
	uint Getcourse_works(){ return mark.SomeMarks; };

	void Setadress(char* adress);
	char* Getadress(){ return p_data.adress; };

	void Settelephone_number(char* telephone_number);
	char* Gettelephone_number(){ return p_data.telephone_number; };

};




