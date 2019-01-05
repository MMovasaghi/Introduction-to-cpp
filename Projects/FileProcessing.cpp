#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool Write(string namefile, int sum, string type, double avg)
{
	ofstream output(namefile, ios::out);
	if (!output)
	{
		system("cls");
		cout << "..::!! There is no permition !!::..";
		return 0;
	}
	output << sum << endl << type << endl << avg;
	output.close();
	return 1;
}
bool Read(string namefile, int *sum, string *type, double *avg)
{
	ifstream input(namefile, ios::in);
	if (!input)
	{		
		return 0;
	}
	input >> *sum >> *type >> *avg;
	input.close();
	return 1;
}
int main()
{
	while (true)
	{
		system("cls");
		cout << "File Processing - C++\n\n" << "Chose :\n1.Read\n2.Write\n : ";
		int inputmenu = 1;
		cin >> inputmenu;
		if (inputmenu == 1)
		{
			system("cls");
			cout << "1.Read from file :\n\n--FileName : ";
			string name;
			cin >> name;
			int sum;
			double avg;
			string type;
			bool res = Read(name, &sum, &type, &avg);
			if (res)
			{
				cout << "\n[*]Read successfully!\n";
				cout << "---Sum : " << sum << endl << "---Type : " << type << endl << "---Avg : " << avg;
			}	
			else
			{
				system("cls");
				cout << "..::!! There is no file here with name \"" << name <<"\" !!::..";
			}
		}
		else
		{
			system("cls");
			int sum;
			double avg;
			string type;
			string name;

			cout << "2.Write into the file :\n\n--FileName : ";
			cin >> name;
			cout << "\n--Sum : ";
			cin >> sum;
			cout << "\n--Avg : ";
			cin >> avg;
			cout << "\n--Type : ";
			cin >> type;
			bool res = Write(name, sum, type, avg);
			if (res)
			{
				cout << "\n[*]Write successfully!\n";
			}
			else
			{
				system("cls");
				cout << "..::!! There is no permition !!::..";
			}
				
		}
		cout << "\n\nPress any key to go back to menu ...";
		char menu;
		cin >> menu;
	}




	return 0;
}