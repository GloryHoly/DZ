#include "smart_arr.h"


Smart_arr::Smart_arr(int size)
	{
		if (size <= 0)
		{
			throw std::exception("Размер массива не может быть отрицательным или равен 0");
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
			throw std::out_of_range("Индекс выходит за пределы допустимого диапазона");
		}
		if (i > actual_size)
		{
			throw std::exception("элемент массива ещё не добавлен, добавьте элемент!");
		}
		if (i < 0)
		{
			throw std::exception("элемент массива не может быть отрицательным!");
		}
		
		return arr[i];
	}

	Smart_arr::~Smart_arr() {
		delete[] arr;
	}

