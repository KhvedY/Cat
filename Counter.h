#pragma once
#include "Counter.h"
#include <iostream>
typedef unsigned int uint;

class Counter
{
private:

	uint current_value;
	uint min_value;
	uint max_value;
	uint step;
	
public:

	void Setcurrent_value(uint current_value);
	uint Getcurrent_value(){ return current_value; };

	void Setmin_value(uint min_value);
	uint Getmin_value(){ return min_value; };

	void Setmax_value(uint max_value);
	uint Getmax_value(){ return max_value; };

	void Setstep(uint step);
	uint Getstep(){ return step; };

	
	Counter(uint min_value, uint max_value, uint step, uint current_value);
	Counter()
	{ 
		min_value = 0;
		max_value = 99999;
		step = 1;
		current_value = 0;
	};
};
