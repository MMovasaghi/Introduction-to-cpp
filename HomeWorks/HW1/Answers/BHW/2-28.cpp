//Shahed University - 2018
//HW1 - EX. 2.28
#include <iostream>

using namespace std;

int main(){
	int a;
	
	int b;
	int c;
	int d;
	int e;
	int f;
	
	cin >> a;
	
	cout << (a-(a%10000))%100000/10000 << "\t" << (a-(a%1000))%10000/1000 << "\t" << (a-(a%100))%1000/100 << "\t" << ((a-(a%10))%100)/10 << "\t" << a%10;
	
	
	
	
	
	
	
	return 0;
}
