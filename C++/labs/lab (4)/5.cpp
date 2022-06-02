
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
    int i,n,j,k=0;
    cout<<"n = ";
    cin>>n;
    int **a=new int* [n];
    for(i=0;i<n;i++)
    a[i]=new int [n];
    cout<<"a "<<endl;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    a[i][j]=rand () % 21-10;
    
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	cout<<"\t"<<a[i][j]<<" ";
    	cout<<endl;
	}
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(i==j&&a[i][j]<0&&a[i][j]%2==0)
    		{
    			k++;
			}
			if(i+j+1==n&&a[i][j]<0&&a[i][j]%2==0)
			k++;
		}
	}
	if(n%2!=0&&a[(n-1)/2][(n-1)/2]<0&&a[(n-1)/2][(n-1)/2]%2==0)
	k--;
    cout<<"k = "<<k;
    cout<<endl;
    for(i=0;i<n;i++)
    delete [] a[i];
    delete [] a;
    cout<<endl<<a[0][0]<<endl;
    
    system("pause");
    return(0);
}
