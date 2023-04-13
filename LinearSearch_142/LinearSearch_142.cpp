#include <iostream>
using namespace std;

int arr[20];
int n;
int i;


void input() 
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}
	cout << "\n___________________\n";
	cout << " Enter array elements \n";
	cout << "_____________________\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int ctr;

	do
	{
		cout << "\nEnter the element you want to search: ";
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < n; i++)
		{
			ctr++;
			if (arr[i] == item)
			{
				cout << "\n" << item << " Found at Position " << (i + 1) << endl;
				break;
			}
		}

		if (i == n)
			cout << "\n" << item << " Not Found in the Array\n";
		cout << "\nNumber of Comparisons: " << ctr << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;
	}
}

int main()
{
    std::cout << "Hello World!\n";
}

