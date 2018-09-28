//Project011
//Programming Foundations - Shahed University - 971

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

class Calculator
{
	public :
		double cal(double a,double b,char op)
		{
			switch(op)
			{
				case '+': return a+b; break;
				case '-': return a-b; break;
				case '/': return a/b; break;
				case '*': return a*b; break;
				default : return 0; break;
			}
		}
};
int main()
{
	cout << "Project011 - Calculator\nProgramming Foundations - Shahed University - 971\n\n";
	
	int menu = 1;
	
	do
	{
		system ("CLS");
		cout << "Project011 - Calculator\nProgramming Foundations - Shahed University - 971\n\n";
		cout <<"Chose From Menu:\n1.[-]\n2.[+]\n3.[x]\n4.[/]\n0.Exit\n\n  : ";
		cin >> menu;
		if(menu != 0)
		{
			Calculator c;
			if(menu == 1)
			{
				system ("CLS");
				cout << "Project011 - Calculator\nProgramming Foundations - Shahed University - 971\n\n";
				cout << "\n[-] OPERATION\n";
				double a,b;
				cout << "\nEnter Number1 : ";
				cin >> a;
				cout << "\nEnter Number2 : ";
				cin >> b;
				cout << "\n\n>> RESULT : " << c.cal(a,b,'-');
			}
			else if(menu == 2)
			{
				system ("CLS");
				cout << "Project011 - Calculator\nProgramming Foundations - Shahed University - 971\n\n";
				cout << "\n[+] OPERATION\n";
				double a,b;
				cout << "\nEnter Number1 : ";
				cin >> a;
				cout << "\nEnter Number2 : ";
				cin >> b;
				cout << "\n\n>> RESULT : " << c.cal(a,b,'+');
			}
			else if(menu == 3)
			{
				system ("CLS");
				cout << "Project011 - Calculator\nProgramming Foundations - Shahed University - 971\n\n";
				cout << "\n[*] OPERATION\n";
				double a,b;
				cout << "\nEnter Number1 : ";
				cin >> a;
				cout << "\nEnter Number2 : ";
				cin >> b;
				cout << "\n\n>> RESULT : " << c.cal(a,b,'*');				
			}
			else if(menu == 4)
			{
				double a,b;
				do
				{
					system ("CLS");
					cout << "Project011 - Calculator\nProgramming Foundations - Shahed University - 971\n\n";
					cout << "\n[/] OPERATION\n";					
					cout << "\nEnter Number1 : ";
					cin >> a;
					cout << "\nEnter Number2 : ";
					cin >> b;
				}while(b == 0);		
				
				cout << "\n\n>> RESULT : " << c.cal(a,b,'/');
				
				
			}
			cout << "\n\nPress any key to go back to menu ...";
			_getch(); 
		}
		
	}while(menu != 0);
	cout << "\n\n [:: PROGRAM FINISHED ::]";
	return 0;
}
