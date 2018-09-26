//Project003
//
#include <iostream>
using namespace std;

int main()
{
	short int n1 = 10; // [–32,768 to 32,767]
	int n2 = 10; // [–2,147,483,648 to 2,147,483,647]
	long int n3 = 10; // [–2,147,483,648 to 2,147,483,647]
	
	double d1 = 20.991; //15 or 16 significant figures (sf)
	long double d2 = 20.991; //18 or 19 significant figures (sf)
	
	float f1 = 5.98; //6 or 7 significant figures (sf)
	
	cout << sizeof(int);
	return 0;
}
