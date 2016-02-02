#pragma once

#include <iostream>
typedef unsigned short ushort;

class Cat
{
private:
	char * name;
	char *color;
	ushort weight;
	ushort Age;
public:

	void SetName(const char * name);
	char * GetName() const;
	void SetColor(const char * color);
	char *  GetColor() const;
	void Setweight(ushort weight);
	ushort Getweight(){ return weight; };
	void SetAge(ushort Age);
	ushort GetAge(){ return Age; };
	char * Voice() const;

	Cat(const char * name, const char *color,ushort weight,ushort Age);
	Cat(){};
	~Cat();

};
