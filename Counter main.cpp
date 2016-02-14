# include "Counter.h"

void main()
{
	Counter f;
	f.Setcurrent_value(1134);
	std::cout << "The current value of counter is :" << f.Getcurrent_value() << std::endl;
	f.Setmin_value(0);
	std::cout << "Minimal value of counter is :" << f.Getmin_value() << std::endl;
	f.Setmax_value(99999);
	std::cout << "Maximal value of counter is :" << f.Getmax_value() << std::endl;
	f.Setstep(0);
	std::cout << "Step of counter is :" << f.Getstep() << std::endl;
	f.Setstep_grow(10);
	std::cout << "Currently step of counter is :" << f.Getstep_grow() << std::endl;
	f.Setzeroing(100000);
	std::cout << "Current value of counter is :" << f.Getzeroing() << std::endl;

}
