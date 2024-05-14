#include<iostream>
using namespace std;
int main()
{
	int val1 = NULL, val2 = NULL;
	char operation = NULL;

	cout << "-----------Simple Calculator-------------"<<endl;
	cout << "| Enter the first Value: "; 
	cin >> val1;
	cout << "| Enter the second Value: ";
	cin >> val2;
	cout << "| Enter the arthimatic operation: ";
	cin >> operation;

	if (operation == '+')
	{
		cout << "| Value= " << val1 + val2 << endl;
		cout << "-----------------------------------------" << endl;
	}
	else if (operation == '-')
	{
		cout << "| Value= " << val1 - val2 << endl;
		cout << "-----------------------------------------" << endl;
	}
	else if (operation == 'x' || operation=='*')
	{
		cout << "| Value= " << val1 * val2 << endl;
		cout << "-----------------------------------------" << endl;
	}
	else if (operation == '/')
	{
		cout << "| Value = " << val1 / val2 << endl;
		cout << "-----------------------------------------" << endl;
	}
	else
	{
		cout << "| Invalid Arthimetic Operator! " << endl;
		cout << "-----------------------------------------" << endl;
	}


	system("pause");
	return 0;
}