//Project005
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
	
	if(n1 > n2)
	{
		cout << "\n\nN1 > N2"<< endl;
	}
	else if(n1 == n2)
	{
		cout << "\n\nN1 = N2"<< endl;
	}
	else
	{
		cout << "\n\nN1 < N2"<< endl;
	}
	return 0;
}
