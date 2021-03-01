#include <iostream>
#include "EuropeanOption.h"
//#include "EuropeanOption.cpp"

int main()
{
	EuropeanOption a(60, 50, 0.02, 1, 0.15);

	std::cout << a.get_T() << endl;

}