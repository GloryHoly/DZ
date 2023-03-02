#include <iostream>
#pragma once

class Smart_arr 
{
private:
	int size, actual_size = 0;
	int* arr;

public:
	Smart_arr(int size);

	void add_element(int i);
	int get_element(int i);

	Smart_arr(const Smart_arr&) = delete;
	Smart_arr& operator=(const Smart_arr&) = delete;

	~Smart_arr();
};

