#include<iostream>
using namespace std;
void testFunction(int X)
{
	if(X==0)
	{
		throw 0;
	}
	else if(X==1)
	{
		throw"String exeption;
	}
	else if(X==2)
	{
		throw 3.14;
	}
	else
	{
		cout<<"No exception thrown"<<endl;
	}
}
int main()
{
	for(int i=0;i<4;i++)
	{
		try{
			testFunction(i);
		}
		catch(int e)
		{
			cout<<"Caught an integer exception"<<endl;
		}
		catch(const char*e)
		{
			cout<<"Caught a string exception"<<endl;
		}
		catch(double e)
		{
			cout<<"Caught a double exception"<<e<<endl;
		}
		catch(...)
		{
			
		}
	}
}
