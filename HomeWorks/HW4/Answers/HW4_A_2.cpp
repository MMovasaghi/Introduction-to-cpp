
#include<iostream>

using namespace std;

int main()
{
	int a,b;
	int i,t=1;
	cout<<"enter number: \n enter power:"<<endl;
	cin>>a;
	cin>>b;
	
	for(i=0;i<b;i++)
	{
		t*=a;
	}
	
	cout<<t;
	
	return 0;
}
