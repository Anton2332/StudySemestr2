#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;



class school
{
	string lastname,firstname,name;
	int vik;
	int rik;
	char st;
	public:
	school()
	{
		vik=0;
		rik=0;
		st='0';
		lastname='0';
		firstname='0';
		name='0';
	}
	void roz_vik()
	{
		vik=2021-rik;
	}
	void input()
	{
		cout<<"������ ������� : ";
		cin>>lastname;
		cout<<"������ ��� : ";
		cin>>firstname;
		cout<<"������ ��������� : ";
		cin>>name;
		cout<<"������ �� ���������� : ";
		cin>>rik;
		cout<<"������ ����� ���� Ƴ���� �� w ���� ������� �� m : ";
		cin>>st;
		roz_vik();
	}
	void get1()
	{
		cout<<lastname<<" "<<firstname<<" "<<name<<" "<<endl;
		cout<<"³� - "<<vik<<endl;
		cout<<"г� ���������� - "<<rik<<endl;
		cout<<"����� : ";
		if(st=='w'||st=='W')
		cout<<"Ƴ����"<<endl;
		else
		if(st=='m'||st=='M')
		cout<<"�������"<<endl;
		else
		cout<<"�� ���� �������� !!!"<<endl;
	}
	friend void p(school a);
};

class prats : private school //������ � ������ ������������ ����� �� �������� � int main
{
	string name;
	float zarp;
	public:
	prats(int k,float zarp1=10)
	{
		cout<<"̳��� ������ : ";
		cin>>name;
		zarp=zarp1;
	}
	void input_prats()
	{
		input();
		cout<<"̳��� ������ : ";
		cin>>name;
		cout<<"����� �������� : ";
		cin>>zarp;
	}
	void get4()
	{
		get1();
		cout<<"̳��� ������ - "<<name<<endl;
		cout<<"�������� - "<<zarp<<endl;
	}
	
	
};

void p(school a)
{
	cout<<a.vik;
}

int main(){
	school a;
	p(a);
	setlocale(LC_CTYPE, "ukr");
	//prats a(2);
//	a.get4();
	//a.input_prats();
	//a.get4();
	
	getch();
	return 0;
}
