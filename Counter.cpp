#include "Counter.h"


Counter::Counter(uint zeroing)
{
	this->zeroing = 0;
	Setzeroing(zeroing);
}
Counter::Counter(uint min_value, uint max_value, uint step, uint current_value)
{
	this->min_value = 0;
	this->max_value = 0;
	this->step = 0;
	this->current_value = 0;
	Setmin_value(min_value);
	Setmax_value(max_value);
	Setstep(step);
	Setcurrent_value(current_value);
}

void Counter::Setcurrent_value(uint current_value)
{
	if (current_value>max_value)
		std::cout << "Wrong value !" << std::endl;
	else
		this->current_value = current_value;
}


void Counter::Setzeroing(uint zeroing)
{
	if (zeroing > max_value)
		this->zeroing = 0;
	else
		this->zeroing = zeroing;
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
	this->step = ++step+current_value;
}

void Counter::Setstep_grow(uint step_grow)
{
	this->step_grow = step_grow+=current_value;
}
