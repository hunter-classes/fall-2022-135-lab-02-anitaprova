#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Please enter an integer: ";
	int num = 0;
	cin >> num;

	while (num <= 0 || num >= 100)
	{
		cout << "Please enter an integer: ";
        	cin >> num;	
	}

	num = pow(num,2);
	cout << "Number squared is " << num << endl;
}
