#include <iostream> 
#include <conio.h>

using namespace std;

struct worker
{
	char pr[15],in[15],pos[20];
	int year;
	float zp;
	int experiance()
	{
		int st;
		st = 2021-year;
		return st;
	}
	float salary()
	{
		float zpp;
		zpp=zp*0.67;
		return zpp;
	}
	
};

int main ()
{
	setlocale(LC_CTYPE, "ukr");
	int i,n;
	cout<<"n = ";
	cin>>n;
	worker s[n];
	for(i=0;i<n;i++)
	{
	    cout<<"������� : ";
		cin>>s[i].pr;
		cout<<"������� : ";
		cin>>s[i].in;
		cout<<"������ : ";
		cin>>s[i].pos;
		do{
		cout<<"г� ������ : ";
		cin>>s[i].year;
		if(s[i].year>2021)
		cout<<"������ �������� �������� !!! "<<endl;	
		}while(s[i].year>2021);
		
		cout<<"�������� ��� ���������� ������� : ";
		cin>>s[i].zp;
	}
	for(i=0;i<n;i++)
	{
		cout<<s[i].pr<<endl<<"���� : "<<s[i].experiance()<<endl<<"�������� � ����������� ������� : "<<s[i].salary()<<endl;
	}
	
	
		
    getch();
    return 0;
 }
