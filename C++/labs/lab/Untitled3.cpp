#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_CTYPE, "ukr");
	float a,b,c,d;
	float *pa,*pb,*pc,*pd,*p1,*p2;
	int i=0;
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	pa=&a;
	pb=&b;
    if(*pa==*pb)
    {	
    	while(i!=4)
    	{
    	   cout<<"¬вед≥ть коректне значенн€ "<<endl<<"b = ";
		   cin>>*pb;
		   if(*pa!=*pb)
		   break;	
		}
	}
	cout<<"c = ";
	cin>>c;
	pc = &c;
	 if(*pa==*pc ||*pb==*pc)
    {
    	
    	while(i!=4)
    	{
    	   cout<<"¬вед≥ть коректне значенн€ "<<endl<<"c = ";
		   cin>>*pc;
		   if(*pa!=*pc&&*pb!=*pc)
		   break;	
		}
	}
   cout<<"d = ";
   cin>>d;
   pd=&d;
   	 if(*pa==*pd ||*pb==*pd||*pc==*pd)
    {
    	
    	while(i!=4)
    	{
    	   cout<<"¬вед≥ть коректне значенн€ "<<endl<<"d = ";
		   cin>>*pd;
		   if(*pa!=*pd&&*pb!=*pd&&*pc!=*pd)
		   break;	
		}
	}
    float sr;
    sr=(*pa+*pb+*pc+*pd)/4.0;
    cout<<"sr = "<<sr<<endl;
    *p1=*pa;
    if(*p1)
    
	
	
	
    getch();
    return 0;
 }
