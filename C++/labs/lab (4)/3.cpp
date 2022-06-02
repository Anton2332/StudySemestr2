
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
    int i,n,j,m,k1,k2;
	cout<<"n = ";
	cin>>n;
	cout<<"m = ";
	cin>>m;
	int **a=new int* [n];
	int b;
	for (i=0;i<n;i++)
	a[i]=new int [m];
	
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	cin>>a[i][j];
	   
    cout<<"Íמלונ 1 סעמגבצÿ : ";
    cin>>k1;
    cout<<"Íמלונ 2 סעמגבצÿ : ";
    cin>>k2;
    for(i=0;i<n;i++)
    {
    	b=a[i][k1];
    	a[i][k1]=a[i][k2];
    	a[i][k2]=b;
	}
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	cout<<a[i][j]<<" ";
		cout<<endl;
	}
    for(i=0;i<n;i++)
    {
    	delete [] a[i]; 
	}
    delete [] a;
    cout<<endl;
    cout<<a[0][0]<<endl;


    
    system("pause");
    return(0);
}
