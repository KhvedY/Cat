#include "Counter.h"

Counter::Counter(uint min_value, uint max_value, uint step)
{
	this->min_value = 0;
	this->max_value = 0;
	this->step = 0;
	Setmin_value(min_value);
	Setmax_value(max_value);
	Setstep(step);
}
	Counter::Counter(uint zeroing)
	{
		this->zeroing = 0;
		Setzeroing(zeroing);
}
	Counter::Counter(uint max_val, uint min_val, uint step_set, uint current_value)
	{
		this->max_val = 0;
	}
