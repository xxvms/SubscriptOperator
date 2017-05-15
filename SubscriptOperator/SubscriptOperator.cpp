// SubscriptOperator.cpp : Defines the entry point for the console application.
//
//Create safe array (index values are checked before access)
//uses separate put and get function
#include <iostream>
#include <process.h> // for exit()

const int LIMIT = 10; 

class safeArray
{
private:
	int arr[LIMIT];

public:
	void putElement(int n, int elementValue) //set value of element
	{
		if (n < 0 || n >= LIMIT)
		{
			std::cout << "\nIndex out of bounds aaa";
			exit(1);
		}
		arr[n] = elementValue;
	}

	int getElement(int n) const // get value of element
	{
		if (n < 0 || n >= LIMIT)
		{
			std::cout << "\nIndex out of bounds here";
			exit(1);
		}
		return arr[n];
	}
};


int main()
{
	safeArray sa1;

	for (int i = 0; i < LIMIT; i++) //insert element
	{
		sa1.putElement(i, i * 10);

	}

	for (int j = 0; j < LIMIT; j++) //display element
	{
		int temp = sa1.getElement(j);
		std::cout << "Element " << j << " is " << temp << std::endl;
	}

	system("pause");
    return 0;
}

