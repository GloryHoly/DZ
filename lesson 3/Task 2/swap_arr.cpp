#include <iostream>
#include <Windows.h>
#include "smart_arr.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	
	try
	{
		Smart_arr arr(5);
		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);
		std::cout << arr.get_element(2) << std::endl;
		Smart_arr new_array(2);
		new_array.add_element(44);
		new_array.add_element(34);
		std::cout << new_array.get_element(1) << std::endl;

		arr = new_array;
		std::cout << arr.get_element(2) << std::endl;
		std::cout << new_array.get_element(2) << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
		
	
	return 0;
}