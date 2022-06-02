#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_CTYPE, "ukr");
	int i,n,k=0,q=0;
    cout<<"n = ";
    cin>>n;
    float a[n],*p,min=1;
    p=a;
    cout<<"a"<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>*p;
    	p++;
	}
	p=a;
	for(i=0;i<n;i++)
	{
		if(int(*p)%2==0)
		{
			if(k==0)
			{
				k++;
				min=*p;
			}
			else
			if(min>*p)
			{
				min=*p;
			}
		}
		p++;
	}
	p=a;
	for(i=0;i<n;i++)
	{
		if(*p==min)
		{
			cout<<*p<<"-"<<&p<<"-"<<q<<endl;
		}
		p++;
		q++;
	}
	
	cout<<"min = "<<min;
	
	
    getch();
    return 0;
 }
