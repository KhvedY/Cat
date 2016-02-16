# include "Counter.h"

void main()
{
	Counter f;
	f.Setcurrent_value(12345);
	std::cout << "The current value of counter is :" << f.Getcurrent_value() << std::endl;
	f.Setmin_value(0);
	std::cout << "Minimal value of counter is :" << f.Getmin_value() << std::endl;
	f.Setmax_value(99999);
	std::cout << "Maximal value of counter is :" << f.Getmax_value() << std::endl;
	f.Setstep(10);
	std::cout << "Step of counter is :" << f.Getstep() << std::endl;
}
