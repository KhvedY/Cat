#include "Cat.h"
Cat::Cat(const char * name, const char *color,ushort weight,ushort Age)
{
	this->name = nullptr;
	this->color = nullptr;
	this->weight = 0;
	this->Age = 0;
	SetName(name);
	SetColor(color);
	Setweight(weight);
	SetAge(Age);
}

Cat::~Cat()
{
	delete[] this->name;
	delete[] this->color;
}

void Cat::SetName(const char * name)
{
	int len = strlen(name) + 1;
	if (this->name)
		delete[] this->name;
	this->name = new char[len];
	strcpy_s(this->name, len, name);
}

char * Cat::GetName() const
{
	int len = strlen(this->name) + 1;
	char * Cat_name = new char[len];
	strcpy_s(Cat_name, len, this->name);
	return Cat_name;
}

void Cat::SetColor(const char * color)
{
	int len = strlen(color) + 1;
	if (this->color)
		delete[] this->color;
	this->color = new char[len];
	strcpy_s(this->color, len, color);
}

char * Cat::GetColor() const
{
	int len = strlen(this->color) + 1;
	char * Cat_color = new char[len];
	strcpy_s(Cat_color, len, this->color);
	return Cat_color;
}
void Cat::Setweight(ushort weight)
{
	this->weight = weight;
}

void Cat::SetAge(ushort Age)
{
	this->Age = Age;
}

char * Cat::Voice() const
{
	return " Meow ";
}
