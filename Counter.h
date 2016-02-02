#pragma once
#include "Counter.h"
#include <iostream>
typedef unsigned int uint;

class Counter
{
private:

	uint min_value;
	uint max_value;
	uint step;


public:

	void Setmin_value(uint min_value);
	uint Getmin_value(){ return min_value; };

	void Setmax_value(uint max_value);
	uint Getmax_value(){ return max_value; };

	void Setstep(uint step);
	uint Getstep(){ return step; };

	uint current_value;
	void Setcurrent_value(uint current_value);
	uint Getcurrent_value(){ return current_value; };

	uint step_set;
	void Setstep(uint step);
	uint Getstep(){ return step; };

	uint min_val_set;
	void Setmin_val_set(uint min_val_set);
	uint Getmin_val_set(){ return min_val_set; };

	uint max_val_set;
	void Setmax_val_set(uint max_val_set);
	uint Getmax_val_set(){ return max_val_set; };

	uint zeroing;
	void Setzeroing(uint zeroing);
	uint Getzeroing(){ return zeroing; };

	Counter(uint min_value, uint max_value, uint step);
	Counter() :Counter(0, 99999, 1){};

	Counter(uint max_val, uint min_val, uint step_set,uint current_value);
	Counter() :Counter(0, 0, 0,0){};

	Counter(uint zeroing);
	Counter(){};

};
