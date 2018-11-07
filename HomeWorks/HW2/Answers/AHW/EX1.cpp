#include <iostream>
using namespace std;

class Test
{
	public :
		Test()
		{
			//----------------POINT(B)-------------------
			//a = 200 & b = 10
			cout << "Shahed University - Fall2018 - Prog971\n\tHW2 - 10.19.2018\n\n" << endl;
			a = 200;
			b = 10;
		}
		void Func1()
		{
			//----------------POINT(A)-------------------	
			//a = 200 & b = 10	
			if(a = b) // this 'if' is always 'true' because it is initial 'a' from 'b' so always a=b ==> to get it correct : "if(a == b)"
				cout << " > Result : a = b" << endl;
			if(a < b)
				cout << " > Result : a < b" << endl;
			if(a > b)
				cout << " > Result : a > b" << endl;
		}
	private :
		int a = 100;
		int b = 1;		
};

int main()
{
	//----------------POINT(C)-------------------	
	//'a' and 'b' is not declared 	
	Test T;
	
	//----------------POINT(D)-------------------
	//a = 200 & b = 10
	T.Func1();
	
	return 0;	
}
