#include<conio.h>
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

enum poverh
{
	one=1,
	two, 
	three,
	four, 
	five, 
	six, 
	seven, 
	eight, 
	nine, 
	ten 
};

struct pow
{
	int q,s,d;
};

poverh rnd(poverh n1,int k1)//визначення поверху
{
	poverh q;
	int i=0;
	while(i<20)
	{
		i=rand()%(k1)+1;
		if(i!=n1)
		break;
	}
	switch(i)
	{
		case 1:q=one;break;
		case 2:q=two;break;
		case 3:q=three;break;
		case 4:q=four;break;
		case 5:q=five;break;
		case 6:q=six;break; 
		case 7:q=seven;break;
		case 8:q=eight;break; 
		case 9:q=nine;break;
		case 10:q=ten;break;
	}
	return q;
}
int rnd1(int q1,int t1)//для визначення кількості для входу
{
	int q=0,g;
	g=t1-q1;
	q=rand()%(g)+1;
	return q;
}

int rnd1(int q1)//для визначення кількості для виходу
{
	int q;
	q=rand()%(q1)+1;
	return q;
}
void result(pow a[],int vsh[],int uvsh[],int power[],int n){
    ofstream file1("text.TXT"); 
    int i;
    for(i=0;i<n;i++)
	{
		if(i==0)
		{
			file1<<"Стан ліфту на 1 поверсі :"<<endl;
			file1<<"Кількість пасажирів - "<<a[i].q<<"."<<endl;
			if(a[i].q==8)
			file1<<"Можливе перевантаження "<<endl;
			file1<<"Напрям руху : ";
			if(a[i].d==0)
			{
				file1<<"Вверх"<<endl;
			}
			else
			{
				file1<<"Вниз"<<endl;
				
			}
		}
		else
		{
			file1<<"----------------------------------"<<endl;
			file1<<"Поверх : "<<power[i]<<endl;
			file1<<"Вийшло : ";
			file1<<vsh[i]<<endl;
			file1<<"Зайшло : "<<uvsh[i]<<endl;
			file1<<"Всього : "<<a[i].q<<endl;
			if(i!=(n-1))
			{
			file1<<"Напрям руху : ";
			if(a[i].d==0)
			{
				file1<<"Вверх"<<endl;
			}
			else
			{
				file1<<"Вниз"<<endl;
				
			}
		}
		}
	}
	file1<<"----------------------------------"<<endl;
	file1<<"Перевезено осіб : "<<a[n-1].s<<endl;
    	
    file1.close();
}

int main()
{
	setlocale(LC_CTYPE, "ukr");	
	srand(time(NULL));
	
	poverh n1,n2;
	n1=one;
	int n,i,sum=0;
	cout<<"n = ";
	cin>>n;
	system("cls");
	int vsh[n],uvsh[n],power[n];
	pow a[n];
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			a[i].q=rnd1(8);
			cout<<"Стан ліфту на 1 поверсі :"<<endl;
			cout<<"Кількість пасажирів - "<<a[0].q<<"."<<endl;
			sum=sum+a[i].q;
			a[i].s=sum;
			if(a[i].q==8)
			cout<<"Можливе перевантаження "<<endl;
			cout<<"Напрям руху : ";
			power[i]=n1;
			n2=rnd(n1,10);
			if(n1<n2)
			{
				a[i].d=0;
				cout<<"Вверх"<<endl;
				n1=n2;
			}
			else
			{
				a[i].d=1;
				cout<<"Вниз"<<endl;
				n1=n2;
			}
		}
		else
		{
			cout<<"----------------------------------"<<endl;
			cout<<"Поверх : "<<n1<<endl;
			cout<<"Вийшло : ";
			vsh[i]=rnd1(a[i-1].q);
			uvsh[i]=rnd1((a[i-1].q-vsh[i]),8);
			a[i].q=uvsh[i]+(a[i-1].q-vsh[i]);
			cout<<vsh[i]<<endl;
			cout<<"Зайшло : "<<uvsh[i]<<endl;
			cout<<"Всього : "<<a[i].q<<endl;
			sum=sum+uvsh[i];
			power[i]=n1;
			a[i].s=sum;
			if(i!=(n-1))
			{
			cout<<"Напрям руху : ";
			n2=rnd(n1,10);
			
			if(n1<n2)
			{
				a[i].d=0;
				cout<<"Вверх"<<endl;
				n1=n2;
			}
			else
			{
				a[i].d=1;
				cout<<"Вниз"<<endl;
				n1=n2;
			}
		}
		}
		
		getch();
	}
	cout<<"----------------------------------"<<endl;
	cout<<"Перевезено осіб : "<<a[n-1].s<<endl;
	result(a,vsh,uvsh,power,n);
	getch();
	
	return 0;
}
