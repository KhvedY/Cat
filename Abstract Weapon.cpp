#include <iostream>
#include <conio.h>
using namespace std;


class AbstractWeapon abstract
{

public:

	virtual void sound() = 0;
	virtual void Action_1() = 0;
	virtual void Action_2() = 0;
};

class knife : public AbstractWeapon
{
public:
	virtual void sound()
	{
		cout << "hdsh" << endl;
	}
	virtual void Action_1()
	{
		
	}
	virtual void Action_2()
	{
	
	}
};

class usp : public AbstractWeapon
{
public:
	virtual void sound()
	{
		cout << "pew pew" << endl;
	}
	virtual void Action_1()
	{

	}
	virtual void Action_2()
	{

	}
};

class deagle : public AbstractWeapon
{
public:
	virtual void sound()
	{
		cout << "bang bang" << endl;
	}
	virtual void Action_1()
	{

	}
	virtual void Action_2()
	{

	}
};


class ak47 : public AbstractWeapon
{
public:
	virtual void sound()
	{
		cout << "tatatata" << endl;
	}
	virtual void Action_1()
	{

	}
	virtual void Action_2()
	{

	}
};

class m16 : public AbstractWeapon
{
public:
	virtual void sound()
	{
		cout << "tttttt" << endl;
	}
	virtual void Action_1()
	{

	}
	virtual void Action_2()
	{

	}
};

class awp : public AbstractWeapon
{
public:
	virtual void sound()
	{
		cout << "bam!" << endl;
	}
	virtual void Action_1()
	{

	}
	virtual void Action_2()
	{

	}
};

class he : public AbstractWeapon
{
public:
	virtual void sound()
	{
		cout << "boom!" << endl;
	}
	virtual void Action_1()
	{

	}
	virtual void Action_2()
	{

	}
};

class sg : public AbstractWeapon
{
public:
	virtual void sound()
	{
		cout << "pshshshsh" << endl;
	}
	virtual void Action_1()
	{

	}
	virtual void Action_2()
	{

	}
};

class flash : public AbstractWeapon
{
public:
	virtual void sound()
	{
		cout << "bzzzzzz (milk)" << endl;
	}
	virtual void Action_1()
	{

	}
	virtual void Action_2()
	{

	}
};

class shotgun : public AbstractWeapon
{
public:
	virtual void sound()
	{
		cout << "bdsh" << endl;
	}
	virtual void Action_1()
	{

	}
	virtual void Action_2()
	{

	}
};

void GetSomeWeapon(AbstractWeapon& weapon)
{
	weapon.sound();
}

void main()
{
	knife knife;
	usp usp;
	deagle deagle;
	ak47 ak47;
	m16 m16;
	awp awp;
	he he;
	sg sg;
	flash flash;
	shotgun shotgun;

	int key1 = _getch();
	switch (key1)
	{
	case 32:   //пробел
		cout << "Aiming" << endl;
		break;
	case 13:  //enter
		cout << "Dealing damage!" << endl;
		break;
	}

	int key2 = _getch();
	switch (key2)
	{
	case 48:
		cout << "Getting knife" << endl;
		break;
	case 49:
		cout << "Getting usp" << endl;
		break;
	case 50:
		cout << "Getting deagle" << endl;
		break;
	case 51:
		cout << "Getting ak47" << endl;
		break;
	case 52:
		cout << "Getting m16" << endl;
		break;
	case 53:
		cout << "Getting awp" << endl;
		break;
	case 54:
		cout << "Getting he" << endl;
		break;
	case 55:
		cout << "Getting sg" << endl;
		break;
	case 56:
		cout << "Getting flash" << endl;
		break;
	case 57:
		cout << "Getting shotgun" << endl;
		break;
	};
	
	GetSomeWeapon(knife);
	knife.Action_1();
	knife.Action_2();
	GetSomeWeapon(usp);
	usp.Action_1();
	usp.Action_2();
	GetSomeWeapon(deagle);
	deagle.Action_1();
	deagle.Action_2();
	GetSomeWeapon(ak47);
	ak47.Action_1();
	ak47.Action_2();
	GetSomeWeapon(m16);
	m16.Action_1();
	m16.Action_2();
	GetSomeWeapon(awp);
	awp.Action_1();
	awp.Action_2();
	GetSomeWeapon(he);
	he.Action_1();
	he.Action_2();
	GetSomeWeapon(sg);
	sg.Action_1();
	sg.Action_2();
	GetSomeWeapon(flash);
	flash.Action_1();
	flash.Action_2();
	GetSomeWeapon(shotgun);
	shotgun.Action_1();
	shotgun.Action_2();
}
