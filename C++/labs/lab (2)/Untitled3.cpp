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
    float a[n],*p,sum=0;
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
		if(*p==0)
		q++;
		if(q!=0)
		sum+=*p;
		if(*p>0)
		{
			k++;
		}
		p++;
	}
	cout<<"K = "<<k<<endl<<"sum = "<<sum<<endl<<"Вивід:"<<endl;
	p=a;
	for(i=0;i<n;i++)
	{
		cout<<*p+2<<" ";
		p++;
	}
	
	
    getch();
    return 0;
 }
