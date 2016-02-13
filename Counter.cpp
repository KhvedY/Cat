#include "Counter.h"


Counter::Counter(uint zeroing)
{
	this->zeroing = 0;
	Setzeroing(zeroing);
}
Counter::Counter(uint min_value_Set, uint max_value_Set, uint step_grow, uint current_value)
{
	this->min_value_Set = 0;
	this->max_value_Set = 0;
	this->step_grow = 0;
	this->current_value = 0;
	Setmin_value_Set(min_value_Set);
	Setmax_value_Set(max_value_Set);
	Setstep_grow(step_grow);
	Setcurrent_value(current_value);
}

void Counter::Setcurrent_value(uint current_value)
{
	if (current_value<=max_value)
		this->current_value = current_value;
	else
		std::cout << " Too HIGH value of counter !" << std::endl;
}


void Counter::Setstep_grow(uint step_grow)
{
	this->step_grow = step_grow+current_value;
}

void Counter::Setzeroing(uint zeroing)
{
	if (zeroing > 99999)
		this->zeroing = 0;
	else
	this->zeroing = zeroing;
}

void Counter::Setmin_value_Set(uint min_value_Set)
{
	this->min_value_Set = min_value_Set;
}

void Counter::Setmax_value_Set(uint max_value_Set)
{
	this->max_value_Set = max_value_Set;
}
