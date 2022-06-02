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
    int *p1[n],**p2,mini[n],min,k=0;
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
			if(k==0)
			{
				min=*(*(p1+i)+j);
			    k++;
			}
			else
			if(min>*(*(p1+i)+j))
			{
				min=*(*(p1+i)+j);
			}
		}
		k=0;
		for(j=0;j<n;j++)
		{
			if(*(*(p1+i)+j)==min)
			{
				mini[i]=j;
			}
		}
	}
	cout<<"mini "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<mini[i]<<" ";
	}
	
	
    getch();
    return 0;
 }
