//Shahed University - 2018
//HW1 - EX. 2.30
#include<iostream>

using namespace std;

int main()

{
	float w,h,r;


	x:cout<<"\n\n  please input your height(m)  = ";
	
	cin>>h;
	
	cout<<"\n\n  please input your weight(kg)  = ";
	
	cin>>w;
	
	r=w/(h*h);
	
	cout << "\n\n  your bmi is = " << r ;
	if ( r < 19)
	{
		cout << "\n\n  you are thin";
	}
	if ( r >19 && r < 25)
	{
		cout << "\n\n  you are normal";
	}
	if ( r > 25 && r < 30)
	{
		cout << "\n\n  you have extra weight ";
	}
	
	if ( r > 30 )	
	{
		cout << "\n\n   you are so fat ! ";
	}
	
	return 0;
}
