
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int A,B,C,z,m;
	string tan,sin,cos,g;
	cout<<"enter A,B,C,g(x)=cos or sin or tan:"<<endl;
	cin>>A;
	cin>>B;
	cin>>C;
	cin>>g;

	

	if(g=="sin")
	{
		cout<<"-"<<A<<"cos"<<"("<<B<<"x"<<")"<<"+"<<C<<"x";
		exit(0);
	}
	if(g=="cos")
	{
		cout<<A<<"sin"<<"("<<B<<"x"<<")"<<"+"<<C<<"x";
		exit(0);
	}
	if(g=="tan")
	{
		cout<<"-"<<A<<"ln"<<"|cos"<<B<<"x"<<"|"<<"+"<<C<<"x";
		exit(0);
	}

}





