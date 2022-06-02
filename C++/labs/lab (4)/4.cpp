
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale>
#include <Windows.h>
#include <string.h>

using namespace std;


int main()
{
    setlocale(LC_CTYPE, "ukr");
    srand(time(NULL));
    int i,n,j,sum=0,q=1;
    cout<<"n = ";
    cin>>n;
    int **a=new int* [n];
    for(i=0;i<n;i++)
    {
    	a[i]=new int [n];
	}
	cout<<"a "<<endl;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
    	if((i>j&&i+j+1<n)||i<j&&i+j+1>n)
    	a[i][j]=0;
    	else
    	{
    	a[i][j]=q;
        q++;    	
    }
	}
    
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	cout<<"\t"<<a[i][j];
    	cout<<endl;
	}
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(i==0||i==n-1)
    		sum+=a[i][j];
    		if(j==0||j==n-1)
    		sum+=a[i][j];
		}
	}
	cout<<"sum = "<<sum<<endl;
	for(i=0;i<n;i++)
    delete [] a[i];
    delete [] a;
    cout<<endl<<" - "<<a[0][0]<<endl;
    




    
    system("pause");
    return(0);
}
