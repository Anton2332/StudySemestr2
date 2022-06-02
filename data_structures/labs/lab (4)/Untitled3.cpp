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
	    cout<<"Прізвище : ";
		cin>>s[i].pr;
		cout<<"Ініціали : ";
		cin>>s[i].in;
		cout<<"Посада : ";
		cin>>s[i].pos;
		do{
		cout<<"Рік вступу : ";
		cin>>s[i].year;
		if(s[i].year>2021)
		cout<<"Введіть коректне значення !!! "<<endl;	
		}while(s[i].year>2021);
		
		cout<<"Зарплата без врахування податку : ";
		cin>>s[i].zp;
	}
	for(i=0;i<n;i++)
	{
		cout<<s[i].pr<<endl<<"Стаж : "<<s[i].experiance()<<endl<<"Зарплата з врахуванням податку : "<<s[i].salary()<<endl;
	}
	
	
		
    getch();
    return 0;
 }
