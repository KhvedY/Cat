#pragma once
#include "Counter.h"
#include <iostream>
typedef unsigned int uint;

class Counter
{
private:

	uint current_value;
	const uint min_value = 0;
	const uint max_value = 99999; 
	const uint step=1;
	uint step_grow;
	uint zeroing;
	uint min_value_Set;
	uint max_value_Set;

public:

	void Setcurrent_value(uint current_value);
	uint Getcurrent_value(){ return current_value; };

	const uint Getmin_value(){ return min_value; }; 

	const uint Getmax_value(){ return max_value; }; 

	uint Getstep(){ return step; };

	void Setstep_grow(uint step_grow);
	uint Getstep_grow(){ return step_grow; };

	void Setzeroing(uint zeroing);
	uint Getzeroing(){ return zeroing; };

	void Setmin_value_Set(uint min_value_Set);
	uint Getmin_value_Set(){ return min_value_Set; };

	void Setmax_value_Set(uint max_value_Set);
	uint Getmax_value_Set(){ return max_value_Set; };

	Counter(){};

	Counter(uint min_value_Set, uint max_value_Set, uint step_grow, uint current_value);

	Counter(uint zeroing);

};
