
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float q;
	float a,b,c,d;
	float l,u;
	cout<<"please enter a,b,c,d,lower bound,upper bound:"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>l;
	cin>>u;
	
	if(u>l)
	{
		q=(a*(u*u*u*u)/4+b*(u*u*u)/3+c*(u*u)/2+d*(u))-(a*(l*l*l*l)/4+b*(l*l*l)/3+c*(l*l)/2+d*(l));	
		cout<<q;
	}
	
	else
	{
		cout<<"upper bound is less than lower bound!!!"<<endl;
	}
	
	return 0;
}
