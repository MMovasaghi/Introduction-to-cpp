
#include<iostream>
#include<math.h>
#include<windows.h>

using namespace std;


int twototen(int a)
{
	if(a>0)
	{
		twototen(a/2);
		cout<<a%2;  
	}	
}

int tentotwo(int a)
{
    int b = 0;
    for(int c=0; a > 0; c++ )
    {
    if(a %10 == 1)
        {
            b += pow(2, c); 
        }
    a/= 10;
    }
return b;
}

int main()
{
	int a,b;
	cout << "tabdil be ? (2 or 10) : ";
	cin >>b;
	cout << '\n'<<"number : ";
	cin>>a;
	if(b==2)
		twototen(a);
	else if(b==10)
		cout <<tentotwo(a);
	else 
		cout << "error";
			
	return 0;
}
