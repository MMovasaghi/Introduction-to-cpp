/*
@	HW6-shahed University
@	Fall2018-97	(971)
@	T-Dr.Bijani
@	TA-MHM
*/
#include <iostream>
#include <cmath>//For POW Function
using namespace std;

class HW6
{
	public :
		int ReverseNum(int input1)
		{
			int result = -1;//To Give error if not responding
			
			if(input1 >= 0)
			{	
				result = 0;			
				int length = 0;
				int input2 = input1;
				for(length=0;input1>0;length++)
				{
					input1 -= (input1%(10));
					input1 = input1/10;
				}
				for(length--; input2>0 ; length--)
				{
					result += (input2%(10))*pow(10,(length));
					input2 -= (input2%(10));
					input2 = input2/10;
				}
			}			
			return result;	
		}	
		unsigned long Base10ToBase2(int Number)
		{
			return BaseAToBaseB(10,2,Number);//Using the General function 
		}
		unsigned long Base2ToBase10(int Number)
		{
			return BaseAToBaseB(2,10,Number);//Using the General function 
		}
		unsigned long BaseAToBaseB(int A,int B,int Number)
		{
			unsigned long result=0;
			if(A>=2 && B>=2 && A<=10 && B<=10)
			{
				if(A == 10)
				{
					if(B == 10)
					{
						result = Number;
					}
					else
					{
						result = Base10ToB(B,Number);
					}
				}
				else
				{
					if(B == 10)
					{
						result = BaseATo10(A,Number);
					}
					else
					{
						int A10 = BaseATo10(A,Number);
						result = Base10ToB(B,A10);
					}
				}
			}
			
			return result;
		}
	private :
		int BaseATo10(int A,int Number)
		{
			int result = 0;
			
			for(int i=0;Number>0;i++)
			{
				result += (Number%10)*pow(A,i);
				Number/=10;
			}
			return result;
		}
		int Base10ToB(int B,int Number)
		{
			int Temp=0,i;
			int result = 0;		    
		    for (i = 0 ; Number>=B ; i++)
		    {
		        Temp = Number%B;
		        result += pow(10,i)*Temp;
		        Number/=B;
		    }
		    result += pow(10,i);
			return result;
		}
};


int main()
{
	bool ShowMenu = true;
	do
	{
		char Menu;
		system("cls");
		cout << "HW6-Shahed University\n\n";
		cout << "Chose Menu :\n"
			<< "1.Reverse Number" << endl
			<< "2.Base 10 To Base 2" << endl
			<< "3.Base 2 To Base 10" << endl
			<< "4.Base A To Base B" << endl
			<< "0.Exit" << endl
			<< " : ";
		cin >> Menu;
		if(Menu == '1')
		{
			HW6 H;
			int n;
			system("cls");
			cout << "\n1.Reverse Number\n\n";
			cout << "Enter Number = ";
			cin >> n;
			cout << "\n\nResult = " << H.ReverseNum(n);
			
			cout << "\n\nPress a key to go back to menu ...";
			char a;
			cin >> a;
		}
		else if(Menu == '2')
		{
			HW6 H;
			int n;
			system("cls");
			cout << "\n2.Base 10 To Base 2\n\n";
			cout << "Enter Number = ";
			cin >> n;
			cout << "\n\nResult = " << H.Base10ToBase2(n);
			
			cout << "\n\nPress a key to go back to menu ...";
			char a;
			cin >> a;
		}
		else if(Menu == '3')
		{
			HW6 H;
			int n;
			system("cls");
			cout << "\n3.Base 2 To Base 10\n\n";
			cout << "Enter Number = ";
			cin >> n;
			cout << "\n\nResult = " << H.Base2ToBase10(n);
			
			cout << "\n\nPress a key to go back to menu ...";
			char a;
			cin >> a;
		}
		else if(Menu == '4')
		{
			HW6 H;
			int n,a,b;
			system("cls");
			cout << "\n4.Base A To Base B\n\n";
			cout << "Enter base A = ";
			cin >> a;
			cout << "Enter base B = ";
			cin >> b;
			cout << "Enter Number on base A = ";
			cin >> n;
			cout << "\n\nResult = " << H.BaseAToBaseB(a,b,n);
			
			cout << "\n\nPress a key to go back to menu ...";
			char v;
			cin >> v;
		}
		else if(Menu == '0')
		{
			ShowMenu = false;
		}
	}while(ShowMenu);
	
	return 0;
}
