#include "Counter.h"


Counter::Counter(uint min_value, uint max_value, uint step, uint current_value)
{
	Setmin_value(min_value);
	Setmax_value(max_value);
	Setstep(step);
	Setcurrent_value(current_value);
}

void Counter::Setcurrent_value(uint current_value)
{
	if (current_value>=max_value)
		std::cout << "Wrong value !" << std::endl;
	else
		this->current_value = current_value;
}


void Counter::Setmin_value(uint min_value)
{
	this->min_value = min_value;
}

void Counter::Setmax_value(uint max_value)
{
	this->max_value = max_value;
}

void Counter::Setstep(uint step)
{
	if (step<=max_value)
	this->step = step;
}

