#include <iostream>
using namespace std;

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
			cout << myData[i] << " ";
		}
		cout << "\nInput index: ";
		cin >> index;
		if (index >= 0 && index < 10)
		{
			cout << "Input value: ";
			cin >> val;
			myData[index]=val;
		}
		else
		{
			cout << "Index out of range. Exit." << endl;
			break;
		}
	}
	while (index >= 0 && index < 10);
	return 0;
}
