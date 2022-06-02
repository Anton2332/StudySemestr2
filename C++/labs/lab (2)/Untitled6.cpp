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
    float a[n],*p,q;
    p=a;
    cout<<"a"<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>*p;
    	p++;
	}
	p=a;
	
	if(n%2==0)
		{
	for(i=0;i<n;i++)
	{
	
			q=*p;
			*p=*(p+1);
			*(p+1)=q;
			p+=2;
		}
		
		
	}
	else
	{
		p=a;
	for(i=0;i<n;i++)
	{
		if(k==(n-1))
		break;
		q=*p;
		*p=*(p+1);
		*(p+1)=q;
		p+=2;
		k+=2;
	}
	}
	p=a;
	cout<<"Виведення : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<*p<<" ";
		p++;
	}
	
	
    getch();
    return 0;
 }
