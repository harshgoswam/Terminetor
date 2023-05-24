#include<iostream>
#include<string.h>

using namespace std;

class Car;
class Garage
{
	public :
		Garage (int g)
		{
			try
			{
				throw g;
			}
			catch (int g)
			{
				cout<<g<<endl<<"Handeled "<<endl;
			}
		}
};

class Car
{
	public :
		Car (int n)
		{
			Garage g(n);
		}
};

class Motor
{
	public :
		Motor ()
		{
			throw Car ( 50);
		}
};

main()
{
	try
	{
		Motor m1;
	}
	catch (...)
	{
		cout<<"---End---"<<endl;
	}
}
