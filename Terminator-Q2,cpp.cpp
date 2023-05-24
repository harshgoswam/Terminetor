#include<iostream>
#include<string.h>
using namespace std;

main()
{
	int p,q,r;
	p=100;
	q=0;
	char example[]="can not divide by zero";
	
	try
	{
		if(q==0)
		{
			throw example;
		}
		else
		{
		   	r=p/q;
			cout<<"r ="<<r<<endl;  	
		}
	}
	catch(int n[])
	{
		cout<<n<<endl;
	}
	catch(...)
	{
		cout<<"Genral exeption.";
	}
}
