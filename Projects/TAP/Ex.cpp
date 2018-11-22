#include <iostream>
#include <cmath>
using namespace std;

class Test
{
	public :
		Test()
		{
			
		}
		bool IsAval(int a)
		{
			if(a >= 2)
			{
				for(int i = 2; i <= sqrt(a) ; i++)
				{
					if(a%i == 0)
						return false;
				}
				return true;
			}
			return false;
		}
		int BMM(int a,int b)
		{
			int bmm = 0;
			if(a > 0 && b > 0)
			{
				for(int i=0; i <= a && a <= b; i++)
				{
					if(i%a == 0 && i%b == 0)
						bmm = i;
				}
			}
			return bmm;
		}
};

int main()
{
	int n;
	cout << "Chose from menu :\n 1.Aval\n 2.BMM\n : ";
	cin >>n;
	if(n == 1)
	{
		int a;
		system("cls");
		cout << "1.Aval";
		cout << "\nEnter Number = ";		
		cin >> a;
		Test t;
		if(t.IsAval(a) == 1)
			cout << "\n\nResult : Aval";
		else
			cout << "\n\nResult : Not Aval";
		
	}
	else if(n == 2)
	{
		int a,b;
		system("cls");
		cout << "2.BMM";
		cout << "\nEnter Number1 = ";		
		cin >> a;
		cout << "\nEnter Number2 = ";		
		cin >> b;
		Test t;
		cout << "\n\nResult : " << t.BMM(a,b);
	}
	return 0;
}
