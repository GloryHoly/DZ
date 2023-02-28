#include "smart_arr.h"


Smart_arr::Smart_arr(int size)
	{
		if (size < 0)
		{
			throw exception("–азмер массива не может быть отрицательным");
		}
		this->size = size;
		this->arr = new int[size]();
	}

	void Smart_arr::add_element(int element)
	{
		

		if (actual_size == size)
		{
			size *= 2;			
			int* arr_two = new int[size]();
			for (int i = 0; i < actual_size; i++)
			{
				arr_two[i] = arr[i];
			}
			delete[] arr;
			arr = arr_two;			
			arr[actual_size] = element;			
		}
		else {
			arr[actual_size] = element;
			actual_size++;
		}

		
	}

	int Smart_arr::get_element(int i)
	{
		if (i >= size)
		{
			throw std::out_of_range("»ндекс выходит за пределы допустимого диапазона");
		}
		if (arr[i] == 0)
		{
			throw exception("пустой элемент массива");
		}
		return arr[i];
	}

	Smart_arr& Smart_arr::operator=(const Smart_arr& other)
	{
		delete[] this->arr;
		this->arr = new int[other.size];

		for (int i = 0; i < other.size; i++) 
		{
			this->arr[i] = other.arr[i];
		}
		return *this;
	}

	Smart_arr::~Smart_arr() {
		delete[] arr;
	}

