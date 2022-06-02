#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_CTYPE, "ukr");
	int a=1,b=2,c=3;
	cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
	cout<<"&a = "<<&a<<" &b = "<<&b <<" &c = "<<&c<<endl;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	if(*p1<*p2)
	{
		p1=&c;
		if(*p1<*p2)
		{
			cout<<"max = "<<p2<<endl;
		}
		else
		cout<<"max = "<<p1;
	}
	else
	{
		p2=&c;
		if(*p1<*p2)
		{
			cout<<"max = "<<p2<<endl;
		}
		else
		cout<<"max = "<<p1;
	}
	cout<<endl;
	p1=&a;
	p2=&b;
	if(*p1<*p2)
	{
		p2=&c;
		if(*p1<*p2)
		{
			cout<<"min = "<<p1<<endl;
		}
		else
		cout<<"min = "<<p2;
	}
	else
	{
		p1=&c;
		if(*p1<*p2)
		{
			cout<<"max = "<<p1<<endl;
		}
		else
		cout<<"max = "<<p2;
	}

	
	
    getch();
    return 0;
 }
