/*
Expensive Calculator
Date : 3.27.18
Author : Darian Callahan
*/

#include<iostream>
int main()
{
	std::cout << "Basic opperations" << std::endl;
	std::cout << "7 + 3 = " << 7 + 3 << std::endl;
	std::cout << "7 - 3 = " << 7 - 3 << std::endl;
	std::cout << "7 * 3 = " << 7 * 3 << std::endl;
	std::cout << "7 / 3 = " << 7 / 3 << std::endl;
	std::cout << "7.0 / 3.0 = " << 7.0 / 3.0 << std::endl;
	std::cout << std::endl;

	std::cout << "Using Strings" << std::endl;
	std::cout << "seven minus three is equal to " << 7 - 3 << std::endl;
	std::cout << std::endl;

	std::cout << "Modulus" << std::endl;
	std::cout << "7 % 3 = " << 7 % 3 << std::endl;
	std::cout << std::endl;

	std::cout << "PEMDAS" << std::endl;
	std::cout << "7 + 3 * 5 = " << 7 + 3 * 5 << std::endl;
	std::cout << "(7 + 3) * 5 = " << (7 + 3) * 5 << std::endl;
	std::cout << std::endl;

	system("pause");
	return 0;

}