#include <iostream>
using namespace std;

int main()
{
	cout << "::: Base of Pointers-Shahed Uni-2018 :::\n  :::::::: C\\C++ Programming :::::::::\n\n";
	int *a;
	int b = 20;
	int c = 30;
	int d = 40;
	
	a = &b;
	cout << "Operation : { a = &b }\n";
	cout << " 1: (a)  = " << a << endl;
	cout << " 2: (*a) = " << *a << endl;
	cout << " 3: (b)  = " << b << endl;
	cout << " 4: (&b) = " << &b << endl;	
	
	cout << "\n------------------------\n";
	
	*a = c;
	cout << "Operation : { *a = c }\n";
	cout << " 1: (a)  = " << a << endl;
	cout << " 2: (*a) = " << *a << endl;
	cout << " 3: (b)  = " << b << endl;
	cout << " 4: (&b) = " << &b << endl;
	cout << " 5: (b)  = " << c << endl;
	cout << " 6: (&b) = " << &c << endl;
	
	cout << "\n------------------------\n";
	
	a = &d;
	cout << "Operation : { a = &d }\n";
	cout << " 1: (a)  = " << a << endl;
	cout << " 2: (*a) = " << *a << endl;
	cout << " 3: (b)  = " << b << endl;
	cout << " 4: (&b) = " << &b << endl;
	cout << " 5: (d)  = " << d << endl;
	cout << " 6: (&d) = " << &d << endl;
	
	return 0;
}
