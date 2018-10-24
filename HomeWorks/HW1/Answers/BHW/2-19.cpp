//Shahed University - 2018
//HW1 - EX. 2.19
#include<iostream>

using namespace std;
	
int main()
{
	int x,y,z;
	cout<<"Enter three different int : ";
	cout<<"\nNumber 1 :  ";
	cin>>x ;
	cout<<"\nNumber 2 :  ";
	cin>>y;
	cout<<"\nNumber 3 :  ";
	cin>>z;
    cout<<"\n sum is "<<x+y+z<<endl;
    cout<<"\n product is "<<x*y*z<<endl;
    cout<<"\n average is "<<(x+y+z)/3<<endl;
    
    if(x>y && y>z)
    {
	    cout<<"\n the smallest is "<<z<<endl;
	    cout<<"\n the largest is "<<x<<endl;
	}
    
	if(x>z && z>y)
    {
    	cout<<"\n the smallest is "<<y<<endl;
    	cout<<"\n the largest is "<<x<<endl;
	}
	
	if(y>x && x>z)
     {
     	cout<<"\n the smallest is "<<z<<endl;
     	cout<<"\n the largest is "<<y<<endl;
	 }
	 if(y>z && z>x)
	 {
	 	cout<<"\n the smallest is "<<x<<endl;
	 	cout<<"\n the largest is "<<y<<endl;
	 }
	 if(z>x && x>y)
     {
	    cout<<"\n the smallest is "<<y<<endl;
	    cout<<"\n the largest is "<<z<<endl;
  }
     if(z>y && y>x)
     {
     	cout<<"\n the smallest is "<<x<<endl;
     	cout<<"\n the largest is "<<z<<endl;
	 }
	 if(x==y && y>z)
	 {
	 	cout<<"\n the smallest is "<<z<<endl;
	 	cout<<"\n the largest is "<<x<<endl;
	 }
	 if(x==y && y<z)
	 {
	 	cout<<"\n the smallest is "<<x<<endl;
	 	cout<<"\n the largest is "<<z<<endl;
	 }
	 if(x==z && z>y)
	 {
	 	cout<<"\n the smallest is "<<y<<endl;
	 	cout<<"\n the largest is "<<x<<endl;
	 }
	 if(x==z && z<y)
	 {
	 	cout<<"\n the smallest is "<<x<<endl;
	 	cout<<"\n the largest is "<<y<<endl;
	 }
	 if(z==y && y>x)
	 {
	 	cout<<"\n the smallest is "<<x<<endl;
	 	cout<<"\n the largest is "<<y<<endl;
	 }
	 if(y==z && z<x)
	 {
	 	cout<<"\n the smallest is "<<y<<endl;
	 	cout<<"\n the largest is "<<x<<endl;
	 }
	 if(y==z && z==x)
	 {
	 	cout<<"\n they are equal";
	 }
  return 0;
}
