#include "Cat.h"
using namespace std;

void MyCats()
{
	Cat * FirstCat = new Cat("Murkey","Red",9,2);
	cout <<"First Cat name: "<< FirstCat->GetName() << endl;
	cout <<"First Cat color:"<< FirstCat->GetColor() << endl;
	cout << "First Cat weight: " << FirstCat->Getweight() << endl;
	cout << "First Cat Age: " << FirstCat->GetAge() << endl;
	cout << "Voice: " << FirstCat->Voice() << endl;

	Cat * SecondCat = new Cat("Johny","RED",5,1);
	cout <<"Second Cat name: "<< SecondCat->GetName() << endl;
	cout <<"Second Cat color: "<< SecondCat->GetColor() << endl;
	cout << "Second Cat weight : " << SecondCat->Getweight() << endl;
	cout << "Second Cat Age : " << SecondCat->GetAge() << endl;
	cout << "Voice: " << SecondCat->Voice() << endl;
	cout << endl;

	delete FirstCat;
	cout << "First Cat deleted " << endl;
	delete SecondCat;
	cout << "Second Cat deleted " << endl;
}
void main()
{
	MyCats();
	cout << endl;
}
