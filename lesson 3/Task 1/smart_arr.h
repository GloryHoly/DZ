#include <iostream>
#pragma once

class Smart_arr : public std::exception
{
private:
	int size, actual_size = 0;
	int* arr;

public:
	Smart_arr(int size);

	void add_element(int i);
	int get_element(int i);

	~Smart_arr();
};

