#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

class Exam
{
	public:
		Exam()
		{
			sum=0;
			len=0;
		}
		int OddSum(int Max)
		{			
			for(int i=1;i<Max;sum+=i,i+=2);
			return sum;
		}
		int Concat(char *s1,char *s2)
		{			
			int c=0;					
			for(len=0;s1[len]!='\0';len++);						
			for(int i=len,j=0;s2[j]!='\0';c=i,i++,j++)
			{
				s1[i]=s2[j];
			}
			s1[c+1]='\0';			
			for(len=0;s1[len]!='\0';len++);
			
			return len;						
		}
		void save(string namefile)
		{			
			ofstream output(namefile,ios::out);
			if (!output)
			{
				system("cls");
				cerr<<"..::!! There is no permition !!::..";
				exit(1);
			}
			output<<sum<<endl<<len<<endl<<b;
			output.close();					
		}
			
		char b[2000];
		char c[1000];
			
	private:
		int len;
		int sum;				
};
int main()
{
	Exam e;
	int chose=0;
	string yn="y";	
	
	do
	{ //menu
		system("cls");
		cout <<" The Term Exam of Shahed University \n"
		<<"\n\nChose one thing :\n\n 1. OddSum function \n\n 2. Concat function \n\n 3. Save function\n\n 4. Exit \n\n : ";
		cin>>chose;
		if (chose==1)
		{
			system("cls");
			{ //oddsum function
				int a;
				cout <<"\n\n .:OddSum function:.\n\n Please Enter one number : ";			
				cin>>a;	
				cout <<"\n\n # The sum of odd : "<<e.OddSum(a);
			}
			cout <<"\n\n\n\n## Do you want to try again [yes : y | no : n] ? "	;
			cin>>yn;
		}
		else if (chose==2)
		{
			system("cls");
			{ //concat function
				cout <<"\n\n .: Concat function :.\n\n Please Enter string 1 : ";																
				cin>>e.b;
				cout <<"\n\n Please Enter string 2 : ";
				cin>>e.c;
				cout <<"\n\n # The cat string : "<<e.Concat(e.b,e.c);
				cout <<"\n\n # The length of cat string : "<<e.b;				
			}
			cout <<"\n\n\n\n## Do you want to try again [yes : y | no : n] ? "	;
			cin>>yn;		
		}
		else if (chose==3)
		{
			system("cls");
			{ //save function				
				string name;
				cout <<"\n\n .: Save function :.\n\n Please Enter a filename : ";
				cin>>name;
				e.save(name);
				cout <<"\n\n\t.:: The \""<<name<<"\" file has created ::.";
			}
			cout <<"\n\n\n\n## Do you want to try again [yes : y | no : n] ? "	;
			cin>>yn;
		}
		else if (chose==4)
		{		
			yn="n";			
		}	

	}while(chose!=4&&yn=="y");
	
	system("cls");
	cout <<"\n\n\t.::Good Bye::.\n\n";
	
	return 0;	
}
