#include <iostream>

int main()
{
	int myData[10];
	int index = 0;
	int val = 0;
	for (int i = 0; i < 10; i++)
	{
		myData[i] = 1;
	}

	do {
		for (int i = 0; i < 10; i++)
		{
			std::cout << myData[i] << " ";
		}
			std::cout << "\nInput index: ";
			std::cin >> index;
		if (index >= 0 && index < 10)
		{
			std::cout << "Input value: ";
			std::cin >> val;
			myData[index]=val;
		}
		else
		{
			std::cout << "Index out of range. Exit." << std::endl;
			break;
		}
	}
	while (index >= 0 && index < 10);
	return 0;
}
