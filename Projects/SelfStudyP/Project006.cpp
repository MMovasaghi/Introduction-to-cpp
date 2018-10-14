//Project006
//Programming Foundations - Shahed University - 971

#include <iostream>
using namespace std;

int main()
{
	double n1;
	double n2;	
		
	cout << "Enter N1 : ";
	cin >> n1;
	cout << "\nEnter N2 : ";
	cin >> n2;
	
	if(n1 >= n2 && n2 >= 0)
	{
		cout << "\n\nResult : N1 >= N2 >= 0"<< endl;
	}
	else if(n1 >= 0 && 0 >= n2)
	{
		cout << "\n\nResult : N1 >= 0 >= N2"<< endl;
	}
	else if(0 >= n1 && n1 >= n2)
	{
		cout << "\n\nResult : 0 >= N1 >= N2"<< endl;
	}
	else if(0 >= n2 && n2 >= n1)
	{
		cout << "\n\nResult : 0 >= N2 >= N1"<< endl;
	}
	else if(n2 >= 0 && 0 >= n1)
	{
		cout << "\n\nResult : N2 >= 0 >= N1"<< endl;
	}
	else if(n2 >= n1 && n1 >= 0)
	{
		cout << "\n\nResult : N2 >= N1 >= 0"<< endl;
	}
	return 0;
}
