//Project010
//Programming Foundations - Shahed University - 971

#include <iostream>
using namespace std;

class test_class
{
	public:
		void func1()
		{
			cout << "\n\nHello world ! (test_class , func1)\n";
		}
		void func2(int input)
		{
			cout << "\n\nThe Parameter : "<< input <<"  (test_class , func2)\n";
		}
		void func3(int input1,int input2)
		{
			cout << "\n\nThe Parameters [ first parameter : "<< input1 << " , second parameter : "<< input2 <<" ]  (test_class , func3)\n";
		}
		void func4(int input1,double input2)
		{
			cout << "\n\nThe Parameters [ first parameter : "<< input1 << " , second parameter : "<< input2 <<" ]  (test_class , func4)\n";
		}
		string func5()
		{
			return "Hello world !";
		}
		int func6(int input)
		{
			input = input*10;
			return input;
		}
		int func7(int input1,int input2)
		{
			return input1 + input2;
		}
		double func8(int input1,double input2)
		{
			return input1 * input2;
		}
};

int main()
{
	cout << "Work with Classes :" << endl;
	cout << "\n-----------------------------------------------\n";
	test_class tc;
	tc.func1();
	tc.func2(10);
	tc.func3(20,30);
	tc.func4(10,3.2983);
	cout << "\n-----------------------------------------------\n";
	string s1 = tc.func5();	
	int n2 = tc.func6(78);
	int n3 = tc.func7(29,8912);
	double d4 = tc.func8(7,82.283);
	
	cout << "\ns1 = " << s1 << " (test_class , func5)" << endl;
	cout << "\nn2 = " << n2 << " (test_class , func6)" << endl;
	cout << "\nn3 = " << n3 << " (test_class , func7)" << endl;
	cout << "\nd4 = " << d4 << " (test_class , func8)" << endl;
	return 0;
}
