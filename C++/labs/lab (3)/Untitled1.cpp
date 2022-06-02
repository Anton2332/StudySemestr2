#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_CTYPE, "ukr");
	int i,n,j,max,min,k=0,q=0;
    cout<<"n = ";
    cin>>n;
    int a[n][n];
    int *p1[n],**p2;
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
			if(i==j)
			{
				if(k==0)
				{
					k++;
					max=*(*(p1+i)+j);
				}
				else
				if(max<*(*(p1+i)+j))
				max=*(*(p1+i)+j);
			}
			if(i+j+1==n)
			{
				if(q==0)
				{
					q++;
					min=*(*(p1+i)+j);
				}
				else
				if(min>*(*(p1+i)+j))
				min=*(*(p1+i)+j);
			}
		}
	}
	if(max>min)
	cout<<"rizn = "<<max-min;
	else
	cout<<"rizn = "<<min-max;
	
    getch();
    return 0;
 }
