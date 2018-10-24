//Shahed University - 2018
//HW1 - EX. 2.18
#include <iostream>
using namespace std;

int main()
{
	
	int a;
	int b;
	
	cout << "Enter The Numbers : ";
	cin >> a ;
	cout << "Enter the other num : ";
	cin >> b ;
	
	if(a > b){
		cout << "Larger Number Is :" << a;
	}
	if(b > a)
	{
		cout << "Larger Number Is :"<< b;
	}
	if(b == a)
	{
		cout << "they are equal";
	}
	
	return 0;
}

