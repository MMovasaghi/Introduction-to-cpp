
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	double max,max2,x;
	cout << "number : ? ";
		cin>> x;
		max=x;
		if(max==0)
			cout<<"ERORE";	
		system("cls");
	for(int b=0;b!=1;)
	{
		cout << "number : ? ";
		cin>> x;
		if(x==0)
			break;
		if(max<=x)
		{
			max2=max;		
			max=x;
		}else if(max2<=x)
			max2=x;	
		system("cls");	
	}
	system("cls");
	cout << "MAX is : "<<max<< "  and next is :"<<max2;
	return 0;	
}
