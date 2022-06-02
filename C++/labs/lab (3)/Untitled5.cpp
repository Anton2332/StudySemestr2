#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_CTYPE, "ukr");
	int i,n,j,k,ki,kj,k2,j2;
    cout<<"n = ";
    cin>>n;
    int a[n][n],q=0;
    int *p1[n],**p2;
    p2=p1;
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	cin>>a[i][j];
    	p1[i]=&a[i][0];
	}
	for(j2=0;j2<n;j2++){
	
	for(i=0;i<n;i++)
	{
	
		for(j=0;j<n;j++)
		{
			if(i==j&&q==0)
			{
				k=*(*(p1+i)+j);
				ki=i;
				kj=j;
				q++;
			}
			else
			if(i==j&&k>*(*(p1+i)+j))
				{
				    k2=*(*(p1+i)+j);
					*(*(p1+i)+j)=k;
					*(*(p1+ki)+kj)=k2;
					ki=i;
					kj=j;	
				}
				else
				if(i==j&&k<*(*(p1+i)+j))
				{
					k=*(*(p1+i)+j);
					ki=i;
					kj=j;
				}
			
		}
		
	}
	q=0;
}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<*(*(p1+i)+j)<<" ";
			
		}
		cout<<endl;
	}
	
	
    getch();
    return 0;
 }
