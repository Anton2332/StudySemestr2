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
		cout<<"Введіть прізвище : ";
		cin>>lastname;
		cout<<"Введіть імя : ";
		cin>>firstname;
		cout<<"Введіть побатькові : ";
		cin>>name;
		cout<<"Введіть рік народження : ";
		cin>>rik;
		cout<<"Введіть стать якщо Жіноча то w якщо чоловіча то m : ";
		cin>>st;
		roz_vik();
	}
	void get1()
	{
		cout<<lastname<<" "<<firstname<<" "<<name<<" "<<endl;
		cout<<"Вік - "<<vik<<endl;
		cout<<"Рік народження - "<<rik<<endl;
		cout<<"Стать : ";
		if(st=='w'||st=='W')
		cout<<"Жіноча"<<endl;
		else
		if(st=='m'||st=='M')
		cout<<"Чоловіча"<<endl;
		else
		cout<<"Не вірно Введенно !!!"<<endl;
	}
	friend void p(school a);
};

class prats : private school //Томущо я методи батьківського класу не викликаю в int main
{
	string name;
	float zarp;
	public:
	prats(int k,float zarp1=10)
	{
		cout<<"Місце роботи : ";
		cin>>name;
		zarp=zarp1;
	}
	void input_prats()
	{
		input();
		cout<<"Місце роботи : ";
		cin>>name;
		cout<<"Розмір зарплати : ";
		cin>>zarp;
	}
	void get4()
	{
		get1();
		cout<<"Місце роботи - "<<name<<endl;
		cout<<"Зарплата - "<<zarp<<endl;
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
