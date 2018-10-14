//Project008
//Programming Foundations - Shahed University - 971

#include <iostream>
using namespace std;

void test_func1()
{
	cout << "\n\nHello world ! (test_func1)\n";
}
void test_func2(int input)
{
	cout << "\n\nThe Parameter : "<< input <<"  (test_func2)\n";
}
void test_func3(int input1,int input2)
{
	cout << "\n\nThe Parameters [ first parameter : "<< input1 << " , second parameter : "<< input2 <<" ]  (test_func3)\n";
}
void test_func4(int input1,double input2)
{
	cout << "\n\nThe Parameters [ first parameter : "<< input1 << " , second parameter : "<< input2 <<" ]  (test_func4)\n";
}
int main()
{
	cout << "\nHello world ! (main_func)\n";
	
	test_func1();	
	test_func2(10);
	test_func3(20,30);
	test_func4(39,50.23987);
	
	return 0;
}
