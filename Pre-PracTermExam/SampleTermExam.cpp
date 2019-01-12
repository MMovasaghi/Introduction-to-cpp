#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

class TermEx
{
public :
	TermEx()
	{
		result_Of_Function1 = "";
		result_Of_Function2 = -1;
		a_input = -1;
		b_input = -1;
		c_input = -1;
	}
	string Function1(string str)
	{
		int getUpper = 'a' - 'A';
		if (str[0] <= 'z' && str[0] >= 'a')
			str[0] -= getUpper;
		for (int i = 1; str[i] != '\0'; i++)
		{
			if (str[i] <= 'Z' && str[i] >= 'A')
				str[i] += getUpper;			
		}
		result_Of_Function1 = str;
		return str;
	}
	int Function2(int a, int b, int c)
	{
		a_input = a;
		b_input = b;
		c_input = c;

		if (b == ((a + c) / 2))
			result_Of_Function2 = 1; //donbale hesabi 
		else if (pow(b, 2) == a*c)
			result_Of_Function2 = 2; //donbale hendesi
		else
			result_Of_Function2 = 3; //hechkodam

		return result_Of_Function2;

	}
	void Function3(char *str)
	{
		int getUpper = 'a' - 'A';
		if (str[0] <= 'z' && str[0] >= 'a')
			str[0] -= getUpper;
		for (int i = 1; str[i] != '\0'; i++)
		{
			if (str[i] <= 'Z' && str[i] >= 'A')
				str[i] += getUpper;
		}
	}
	bool Save()
	{
		bool res = false;
		ofstream output("Output.txt", ios::out);
		if (!output)
		{
			cout << "\n\n!! File NotFound !!\n\n";
			exit(0);
		}
		if (result_Of_Function1 != "" && result_Of_Function2 != -1)
		{
			output << result_Of_Function1 << endl << result_Of_Function2 << endl << a_input << endl << b_input << endl << c_input;
			res = true;
		}			
		output.close();
		return res;
	}
	bool Read()
	{
		bool res = false;
		ifstream input("Output.txt", ios::in);
		if (!input)
		{
			cout << "\n\n!! File NotFound !!\n\n";
			exit(0);
		}
		input >> Read_Word >> Read_Number >> a_input >> b_input >> c_input;

		if (Read_Word != "" && Read_Number != -1)
		{			
			res = true;
		}		
		input.close();
		return res;
	}

	string Read_Word;
	int Read_Number;
	int a_input;
	int b_input;
	int c_input;
private :
	string result_Of_Function1;
	int result_Of_Function2;
	
};




int main()
{
	TermEx t;
	while (true)
	{
		system("cls");		
		int input = 1;
		cout << "Chose from the menu :\n 1.Function 1 { Get the word in the correct format }\n 2.Function 2 {Hendesi or Hesabi} \n 3.Function 3 \n 4.Save \n 5.Read \n 6.Exit \n : ";
		cin >> input;
		if (input == 1)
		{
			system("cls");
			cout << "1.Function 1 { Get the word in the correct format } :\n\n";
			cout << "Enter a word : ";
			string input_word;
			cin >> input_word;
			cout << "\n\n>> Result : " << t.Function1(input_word);
		}
		else if (input == 2)
		{
			system("cls");
			int input_Number1, input_Number2, input_Number3;
			cout << "2.Function 2 {Hendesi or Hesabi} :\n\n";
			cout << "Enter Number1 : ";			
			cin >> input_Number1;
			cout << "Enter Number2 : ";
			cin >> input_Number2;
			cout << "Enter Number3 : ";
			cin >> input_Number3;

			int result = t.Function2(input_Number1, input_Number2, input_Number3);
			cout << "\n\n >> Result : ";
			switch (result)
			{
				case 1: cout << "donbale hesabi\n\n";	break;
				case 2: cout << "donbale hendesi\n\n";	break;
				default: cout << "Hechkodam\n\n";	break;
			}
		}
		else if (input == 3)
		{
			system("cls");
			cout << "3.Function 3 :\n\n";
			cout << "Enter a word : ";
			char input_word[100];
			cin >> input_word;
			t.Function3(input_word);
			cout << "\n\n>> Result : " << input_word;
		}
		else if (input == 4)
		{
			system("cls");
			cout << "4.Save :\n\n";
			bool result = t.Save();
			if (result)
			{
				cout << "\n\n >> Saved Successfully !\n\n";
			}
			else
			{
				cout << "\n\n >> Error !\n\n";
			}
		}
		else if (input == 5)
		{
			system("cls");
			cout << "4.Read :\n\n";
			bool result = t.Read();
			if (result)
			{
				int menu_de;
				cout << "\n\n >> Read Successfully !\n\n";
				cout << "Read Word : " << t.Read_Word << "\nRead Numbers : " << t.a_input << " " << t.b_input << " " << t.c_input << "\n\n";
				cout << "Chose from menu : \n1.Function 1 \n2.Function2 \n : ";
				cin >> menu_de;
				if (menu_de == 1)
				{
					cout << "\n\n>> Result : " << t.Function1(t.Read_Word);
				}
				else
				{
					int result = t.Function2(t.a_input, t.b_input, t.c_input);
					cout << "\n\n >> Result : ";
					switch (result)
					{
						case 1: cout << "donbale hesabi\n\n";	break;
						case 2: cout << "donbale hendesi\n\n";	break;
						default: cout << "Hechkodam\n\n";	break;
					}
				}
			}
			else
			{
				cout << "\n\n >> Error !\n\n";
			}
		}
		else if (input == 6)
		{
			//finish the program
			system("cls");
			cout << "\n\nGood Bye :)\n\n";
			cout << "\n\nPress any key to exit ....";
			char getback = 'a';
			cin >> getback;
			exit(0);
		}
		cout << "\n\nPress any key to go back to menu ....";
		char getback = 'a';
		cin >> getback;
	}
	
	return 0;
}