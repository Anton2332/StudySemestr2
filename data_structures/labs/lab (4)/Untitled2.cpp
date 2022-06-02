#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;

struct triengl
{
	float a,b,c;
	float area()
	{
		float p,S;
		p=(a+b+c)/2;
		S=sqrt(p*(p-a)*(p-b)*(p-c));
		return S;
	}
};

int main ()
{
	int i,n;
	float sum=0;
	cout<<"n = ";
	cin>>n;
	triengl s[n];
	for(i=0;i<n;i++)
	{
		
		cout<<"a = ";
		cin>>s[i].a;
		cout<<"b = ";
		cin>>s[i].b;
		cout<<"c = ";
		cin>>s[i].c;
		sum=sum+s[i].area();	
	}
	cout<<"sum = "<<sum;
	
	
	
		
    getch();
    return 0;
 }
