#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_CTYPE, "ukr");
	int i,n,j;
    cout<<"n = ";
    cin>>n;
    int a[n][n];
    int *p1[n],**p2;
    float srv=0,kv=0,kd=0,srd=0,k0=0;
    
    p2=p1;
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	cin>>a[i][j];
    	p1[i]=&a[i][0];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(*(p1+i)+j)<0)
			{
				srv+=*(*(p1+i)+j);
				kv++;
			}
			else
			if(*(*(p1+i)+j)>0)
			{
				srd+=*(*(p1+i)+j);
				kd++;
			}
			else
			if(*(*(p1+i)+j)==0)
			{
				k0++;
			}
		}
	}
	cout<<"Середнє арифметичне відємних : "<<srv/kv<<endl;
	cout<<"Середнє арифметичне додатніх : "<<srd/kd<<endl;
	cout<<"Кількість нулів : "<<k0;
	
	
    getch();
    return 0;
 }
