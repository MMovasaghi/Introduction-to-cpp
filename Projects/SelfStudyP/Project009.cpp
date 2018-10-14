//Project009
//Programming Foundations - Shahed University - 971

#include <iostream>
#include <string>
using namespace std;

string test_func1()
{
	return "Hello world ! (test_func1)";
}
int test_func2(int input)
{
	input = input*10;
	return input;
}
int test_func3(int input1,int input2)
{
	return input1 + input2;
}
double test_func4(int input1,double input2)
{
	return input1 * input2;
}


int main()
{
	cout << "\nHello world ! (main_func)\n";
	
	string s1 = test_func1();	
	int n2 = test_func2(10);
	int n3 = test_func3(20,30);
	double d4 = test_func4(39,50.23987);
	
	cout << "\ns1 = " << s1 << endl;
	cout << "\nn2 = " << n2 << endl;
	cout << "\nn3 = " << n3 << endl;
	cout << "\nd4 = " << d4 << endl;
	
	return 0;
}
