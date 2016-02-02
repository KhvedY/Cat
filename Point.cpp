#include <iostream>
using namespace std;
class Point
{
	int X;
	int Y;
public:
	Point();
	Point(int x, int y);
	~Point();
	int GetX() { return X; }
	int GetY() { return Y; }
	void SetX(int x);
	void SetY(int y);
};

Point::Point()
{
	X = Y = 0;
}

Point::Point(int x, int y)
{
	X = x;
	Y = y;
}

void Point::SetX(int x)
{
	if (x >= -5)
		X = x;
}
void Point::SetY(int y)
{
	if (y >= -5)
		Y = y;
}
Point::~Point()
{
	std::cout << "destructor done for " << X << ' ' << Y << std::endl;
}

void main()

{
	Point a;
	Point b(2, 3);
	cout << a.GetX() << "  " << a.GetY() << endl;
	cout << b.GetX() << "  " << b.GetY() << endl;

	a.SetX(9);
	a.SetY(-9);
	cout << a.GetX() << "  " << a.GetY() << endl;

	Point * p = new Point(1, 7);
	cout << p->GetX() << "  " << p->GetY() << endl;
	delete p;
}
