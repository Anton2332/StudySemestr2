
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
    cout<<"N = ";
    cin>>n;
    int *a=new int [n];
    
    int *b=new int [n];
    
	int *c=new int [n];
	
    cout<<"Ââ³ä à"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Ââ³ä b"<<endl;
    for(i=0;i<n;i++)
    cin>>b[i];
    for(i=0;i<n;i++)
    {
    	if(a[i]>b[i])
    	c[i]=a[i];
    	else
    	c[i]=b[i];
	}
	cout<<"Âèâ³ä ñ"<<endl;
    for(i=0;i<n;i++)
    cout<<c[i]<<" ";
    
    delete [] c;
    
    delete [] b;
    
    delete [] a;

    
    
    
    cout<<endl<<" - "<<a[0]<<endl<<" - "<<b[0]<<endl<<" - "<<c[0]<<endl;
    
    
    system("pause");
    return(0);
}
