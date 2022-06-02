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
    p2=p1;
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	cin>>a[i][j];
    	p1[i]=&a[i][0];
	}
	cout<<"Вивід : "<<endl;
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		for(j=0;j<n;j++)
		{
			cout<<*(*(p1+i)+j)<<" ";
		}
		else
		for(j=(n-1);j>-1;j--)
		{
			cout<<*(*(p1+i)+j)<<" ";
		}
		cout<<endl;
	}

	
	
    getch();
    return 0;
 }
