#include <iostream>
using namespace std;

class Date
{
public :
	Date(int d,int m,int y)
	{
		Day = d;
		Month = m;
		Year = y;
	}
	Date()
	{
		Day = 0;
		Month = 0;
		Year = 0;
	}
	int Day, Month, Year;
};

int main()
{
	int Day, Month, Year;
	//Enter Date 1 from user
	cout << "$Date 1 : " << endl;
	cout << "  Day : ";
	cin >> Day;
	cout << endl;
	cout << "  Month : ";
	cin >> Month;
	cout << endl;
	cout << "  Year : ";
	cin >> Year;
	cout << endl;

	if (Day > 0 && Day < 31 && Month > 0 && Month < 13 && Year > 0)
	{
		Date date1(Day, Month, Year);

		//Enter Date 2 from user
		cout << "$Date 2 : " << endl;
		cout << "  Day : ";
		cin >> Day;
		cout << endl;
		cout << "  Month : ";
		cin >> Month;
		cout << endl;
		cout << "  Year : ";
		cin >> Year;
		cout << endl;

		if (Day > 0 && Day < 31 && Month > 0 && Month < 13 && Year > 0)
		{
			Date date2(Day, Month, Year);

			long long int date1res = date1.Year * 360 + date1.Month * 30 + date1.Day;
			long long int date2res = date2.Year * 360 + date2.Month * 30 + date2.Day;
			if(date1res <= date2res)
			{
				Date resdate;
				resdate.Year = (date2res - date1res) / 360;
				resdate.Month = ((date2res - date1res) % 360) / 30;
				resdate.Day = (((date2res - date1res) % 360) % 30);
	
				cout << "\n\nResult : Year [" << resdate.Year << "] , Month [" << resdate.Month << "] , Day [" << resdate.Day << "] \n\n";
			}
			else
			{
				cout << "\n\nInputs are not correct!";
			}

			
		}
		else
		{
			cout << "\n\nInput is not correct !";
		}
	}
	else
	{
		cout << "\n\nInput is not correct !";
	}	

	return 0;
}
