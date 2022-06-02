
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
    int i,n;
    cout<<"n = ";
    cin>>n;
    int *a=new int[n];
    cout<<"Ââ³ä à"<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	int k;
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				
				k=a[j];
				a[j]=a[i];
				a[i]=k;
			}
		}
	}
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    delete []a;
    cout<<endl<<" - "<<a[0]<<endl;


















    
    system("pause");
    return(0);
}
