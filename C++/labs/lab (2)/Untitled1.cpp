#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_CTYPE, "ukr");
	int i,n,k=0;
    cout<<"n = ";
    cin>>n;
    float a[n],*p;
    p=a;
    cout<<"a"<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>*p;
    	p++;
	}
	p=a;
	cout<<"Вивід:"<<endl;
	for(i=0;i<n;i++)
	{
		if(k%2==0)
		{
		cout<<*p<<" - "<<p<<endl;
	    }
	    k++;
		p++;
	}
	cout<<"&p = "<<&p; 
	
	
    getch();
    return 0;
 }
