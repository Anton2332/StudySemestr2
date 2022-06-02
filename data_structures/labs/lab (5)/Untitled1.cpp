#include <iostream> 
#include <conio.h>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

struct aeroflot
{
	string city,vidp,type;
	int vidst,num;
};

void per1(aeroflot s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(s[i].city=="Львів"&&(s[i].type=="пасажирський"||s[i].type=="вантажний"))
		{
		
		cout<<"Пункт прибуття : "<<s[i].city<<endl<<"Пункт відправки : "<<s[i].vidp<<endl<<"Відстань між ними : ";
		cout<<s[i].vidst<<endl<<"Тип літака : "<<s[i].type<<endl<<"Номер рейсу : "<<s[i].num<<endl;
	
		}
	}
	
	
}

void per2(aeroflot s[],int n)
{
	int i,k,q=0;
	
	cout<<"Введіть відстань після якой буде рахуватись : ";
	cin>>k;
	cout<<endl;
	for(i=0;i<n;i++)
	{
		if(s[i].vidst>k)
		{
			cout<<"Нумерація рейсів які підходять - "<<q+1<<endl;	
			cout<<"Номер рейсу : "<<s[i].num<<endl<<"Тип літака : "<<s[i].type<<endl;
				q++;
		}
	}
	if(q==0)
	cout<<"Таких рейсів не знайдено !!!"<<endl;
}

int main ()
{ 
    setlocale(LC_CTYPE, "ukr");
    system("chcp 1251");
	system("clr");
	
	
	
    int i,j,n;
    cout<<"n = ";
    cin>>n;
    string zamc,zamv,zamt;
	int zamvid,zamnum;
    aeroflot s[n];
    for(i=0;i<n;i++)
    {
    	cout<<"Введіть пункт призначенн : ";
    	cin.get();
    	getline(cin,s[i].city);
    	cout<<"Введіть пункт відправки : ";
    	getline(cin,s[i].vidp);
    	cout<<"Відстань між пунктами : ";
    	cin>>s[i].vidst;
    	cout<<"Введіть номер рейсу : ";
    	cin>>s[i].num;
    	cout<<"Якщо в словах буде помилка то програма не спрацює !!!"<<endl;
    	cout<<"Введіть назву рейсу (пасажирський, вантажний, військовий) : ";
    	cin>>s[i].type;
	}
	per1(s,n);
	per2(s,n);
	
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].vidst>s[j].vidst)
			{
				zamc=s[i].city;
				s[i].city=s[j].city;
				s[j].city=zamc;
				zamv=s[i].vidp;
				s[i].vidp=s[j].vidp;
				s[j].vidp=zamv;
				zamt=s[i].type;
				s[i].type=s[j].type;
				s[j].type=zamt;
				zamvid=s[i].vidst;
				s[i].vidst=s[j].vidst;
				s[j].vidst=zamvid;
				zamnum=s[i].num;
				s[i].num=s[j].num;
				s[j].num=zamnum;
			}
		}
	}
	cout<<endl<<"Посортовано за зростанням відстані "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Пункт прибуття : "<<s[i].city<<endl<<"Пункт відправки : "<<s[i].vidp<<endl<<"Відстань між ними : "<<s[i].vidst<<endl<<"Тип літака : ";
		cout<<s[i].type<<endl<<"Номер рейсу : "<<s[i].num<<endl;
	}
	

	
	for(i=0;i<n;i++)
	{
		if(s[i].type=="військовий")
		{
		for(j=i;j<n;j++)
		{
			s[j].city=s[j+1].city;
			s[j].num=s[j+1].num;
			s[j].type=s[j+1].type;
			s[j].vidp=s[j+1].vidp;
			s[j].vidst=s[j+1].vidst;
		}
		n--;
		i--;
	}
	}
	cout<<endl<<"Видалено елементи з типом військовий "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Пункт прибуття : "<<s[i].city<<endl<<"Пункт відправки : "<<s[i].vidp<<endl<<"Відстань між ними : "<<s[i].vidst<<endl<<"Тип літака : ";
		cout<<s[i].type<<endl<<"Номер рейсу : "<<s[i].num<<endl;
	}
	
		
    getch();
    return 0;
 }
