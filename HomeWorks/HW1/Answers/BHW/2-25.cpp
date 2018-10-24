//Shahed University - 2018
//HW1 - EX. 2.25
#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	
	cin >> a >> b;
	
	if(b % a == 0)
	{
		cout << " yes ";
	}
	if(a % b == 0)
	{
		cout << " yes";
	}
	else
	{
		cout << " no ";		
	}
	
	
	
	
	return 0;
}
