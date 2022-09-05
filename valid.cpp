#include <iostream>
#include <cmath>

int main()
{
	std::cout << "Please enter an integer: ";
	int num = 0;
	std::cin >> num;

	while (num <= 0 || num >= 100)
	{
		std::cout << "Please enter an integer: ";
		std::cin >> num;	
	}

	num = pow(num,2);
	std::cout << "Number squared is " << num << std::endl;
}
