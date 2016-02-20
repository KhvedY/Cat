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
	uint * credit;
	uint *exams;
	uint *course_works;
};

struct Personal_data
{
	char* adress;
	uint telephone_number;
};

class Student
{
private:

	Birthday birthday;
	Fullname Name;
	Marks mark;
	Personal_data p_data;

public:

	Student(char* surname, char* name, char* patronymic, char* adress, uint telephone_number, uint day, uint month, uint year);
	Student() :Student("Ivanov", "Ivan", "Ivanovich", "Deribasovskaya 1", 322223, 1, 2, 1990){};
	Student(uint* credit, uint* exams, uint* course_works);
	Student() : Student("9", "10", "11"){};
	~Student();

	void show();

	void Setday(uint Day);
	void Setmonth(uint Month);
	void Setyear(uint Year);
	void Setsurname(char* surname);
	void Setname(char* name);
	void Setpatronymic(char* patronymic);
	void Setcredit(uint* credit);
	void Setexams(uint* exams);
	void Setcourse_works(uint* course_works);
	void Setadress(char* adress);
	void Settelephone_number(uint telephone_number);

	Birthday Get_birthday(){ return birthday; };
	Fullname Get_name(){ return Name; };
	Marks Get_assessment(){ return mark; };
	Personal_data Get_p_data(){ return p_data; };
};
