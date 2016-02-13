# include "Counter.h"

void main()
{
	Counter f;
	f.Setcurrent_value(6885);
	std::cout << "The current value of counter is :" << f.Getcurrent_value() << std::endl;
	std::cout << "Minimal value of counter is :" << f.Getmin_value() << std::endl;
	std::cout << "Maximal value of counter is :" << f.Getmax_value() << std::endl;
	std::cout << "Step of counter is :" << f.Getstep() << std::endl;
	f.Setstep_grow(100);
	std::cout << "Currently step of counter is :" << f.Getstep_grow() << std::endl;
	f.Setzeroing(549050);
	std::cout << "Current value of counter is :" << f.Getzeroing() << std::endl;
	f.Setmin_value_Set(25);
	std::cout << "Current minimal value of counter is :" << f.Getmin_value_Set() << std::endl;
	f.Setmax_value_Set(5000);
	std::cout << "Current maximal value of counter is :" << f.Getmax_value_Set() << std::endl;
}
