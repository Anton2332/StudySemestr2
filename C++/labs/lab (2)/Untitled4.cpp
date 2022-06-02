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
    float a[n],*p,arf=0,b,d;
    p=a;
    cout<<"Масив a"<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>*p;
    	p++;
	}
	cout<<"a = ";
	cin>>d;
	cout<<"b = ";
	cin>>b;
	p=a;
	for(i=0;i<n;i++)
	{
		if(*p==d)
		{
			k++;
		}
		
		if(k!=0)
		{
			arf+=*p;
			k++;
		}
	    if(*p==b)
	    break;
		p++;
	}
	arf=arf-d-b;
	k=k-3;
	cout<<"Середнє арефметичне : "<<arf/float(k);
	
	
    getch();
    return 0;
 }
