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

poverh rnd(poverh n1,int k1)//���������� �������
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
int rnd1(int q1,int t1)//��� ���������� ������� ��� �����
{
	int q=0,g;
	g=t1-q1;
	q=rand()%(g)+1;
	return q;
}

int rnd1(int q1)//��� ���������� ������� ��� ������
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
			file1<<"���� ���� �� 1 ������ :"<<endl;
			file1<<"ʳ������ �������� - "<<a[i].q<<"."<<endl;
			if(a[i].q==8)
			file1<<"������� �������������� "<<endl;
			file1<<"������ ���� : ";
			if(a[i].d==0)
			{
				file1<<"�����"<<endl;
			}
			else
			{
				file1<<"����"<<endl;
				
			}
		}
		else
		{
			file1<<"----------------------------------"<<endl;
			file1<<"������ : "<<power[i]<<endl;
			file1<<"������ : ";
			file1<<vsh[i]<<endl;
			file1<<"������ : "<<uvsh[i]<<endl;
			file1<<"������ : "<<a[i].q<<endl;
			if(i!=(n-1))
			{
			file1<<"������ ���� : ";
			if(a[i].d==0)
			{
				file1<<"�����"<<endl;
			}
			else
			{
				file1<<"����"<<endl;
				
			}
		}
		}
	}
	file1<<"----------------------------------"<<endl;
	file1<<"���������� ��� : "<<a[n-1].s<<endl;
    	
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
			cout<<"���� ���� �� 1 ������ :"<<endl;
			cout<<"ʳ������ �������� - "<<a[0].q<<"."<<endl;
			sum=sum+a[i].q;
			a[i].s=sum;
			if(a[i].q==8)
			cout<<"������� �������������� "<<endl;
			cout<<"������ ���� : ";
			power[i]=n1;
			n2=rnd(n1,10);
			if(n1<n2)
			{
				a[i].d=0;
				cout<<"�����"<<endl;
				n1=n2;
			}
			else
			{
				a[i].d=1;
				cout<<"����"<<endl;
				n1=n2;
			}
		}
		else
		{
			cout<<"----------------------------------"<<endl;
			cout<<"������ : "<<n1<<endl;
			cout<<"������ : ";
			vsh[i]=rnd1(a[i-1].q);
			uvsh[i]=rnd1((a[i-1].q-vsh[i]),8);
			a[i].q=uvsh[i]+(a[i-1].q-vsh[i]);
			cout<<vsh[i]<<endl;
			cout<<"������ : "<<uvsh[i]<<endl;
			cout<<"������ : "<<a[i].q<<endl;
			sum=sum+uvsh[i];
			power[i]=n1;
			a[i].s=sum;
			if(i!=(n-1))
			{
			cout<<"������ ���� : ";
			n2=rnd(n1,10);
			
			if(n1<n2)
			{
				a[i].d=0;
				cout<<"�����"<<endl;
				n1=n2;
			}
			else
			{
				a[i].d=1;
				cout<<"����"<<endl;
				n1=n2;
			}
		}
		}
		
		getch();
	}
	cout<<"----------------------------------"<<endl;
	cout<<"���������� ��� : "<<a[n-1].s<<endl;
	result(a,vsh,uvsh,power,n);
	getch();
	
	return 0;
}
