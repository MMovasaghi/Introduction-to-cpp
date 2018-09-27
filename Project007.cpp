//Project007
//Programming Foundations - Shahed University - 971

#include <iostream>
#include <string>
using namespace std;

int main()
{
	double n1;
	double n2;
	string op;
	double result;
	
	cout << "Enter N1 : ";
	cin >> n1;
	cout << "\nEnter N2 : ";
	cin >> n2;
	cout << "\nEnter Operator [+ - / *]: ";
	cin >> op;
	
	if(op == "+")
	{
		result = n1+n2;
		cout << "\n\nResult {n1+n2} = "<<result;
	}
	else if(op == "-" || op == "_")
	{
		result = n1-n2;
		cout << "\n\nResult {n1-n2} = "<<result;
	}
	else if(op == "*" || op == "x" || op == "X" )
	{
		result = n1*n2;
		cout << "\n\nResult {n1*n2} = "<<result;
	}
	else if(op == "/" && n2 != 0)
	{
		result = n1/n2;
		cout << "\n\nResult {n1/n2} = "<<result;
	}
	else
	{
		cout << "\n\nSome of your parameters are incorrect!";
	}
	return 0;
}
