
#include <iostream>

int main()
{
	std::cout<<"enter 20 numbers:";

	int l=20;
	int a[l],i,j,temp;

	for(i=0;i<l;i++)
	{
	std::cin>>a[i];    
	}

	for(i=l-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(a[j]>a[j+1])   
			{
				temp=a[j];  
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	for(i=0;i<l;i++)
	{
	std::cout<<a[i];   
	}
	
	return 0;
}






