#include <conio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class engin
{
	float number,pot;
	public:
		engin()
		{
			number=0;
			pot=0;
		}
		void input1()
		{
			cout<<"������ ��������� : ";
			cin>>pot;
			cout<<"������ ����� : ";
			cin>>number;
			
		}
		void output1()
		{
			cout<<"��������� - "<<pot<<endl;
			cout<<"����� - "<<number<<endl;
		}
		~engin()
		{
			cout<<"!!!"<<endl;
		}
};

class car : private engin //������ � ������ ������������ ����� �� �������� � int main
{
	string mark;
	float price;
	public:
		car()
		{
			price=0;
			mark='0';
		}
		void input2()
		{
			input1();
			cout<<"������ ����� : ";
			cin>>mark;
			cout<<"������ ���� : ";
			cin>>price;
		}
		void output2()
		{
			output1();
			cout<<"����� - "<<mark;
			cout<<endl<<"ֳ�� - "<<price<<endl;
		}
		~car()
		{
			cout<<"!!"<<endl;
		}
};

class truck : private car //������ � ������ ������������ ����� �� �������� � int main
{
	float capacity;
	public:
		truck()
		{
			capacity=0;
		}
		void input3()
		{
			input2();
			cout<<"������ ���������������� : ";
			cin>>capacity;
		}
		void output3()
		{
			output2();
			cout<<"������� ��������� - "<<capacity<<endl;
		}
		~truck()
		{
			cout<<"!"<<endl;
		}
};
int main()
{
	setlocale(LC_CTYPE, "ukr");
	cout<<"engin"<<endl;
	engin a1[3];
	int i,n=3;
	for(i=0;i<n;i++)
	{
		cout<<i+1<<" engin"<<endl;
		a1[i].input1();
	}
	cout<<endl;
	cout<<"���� "<<endl;
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<i+1<<" engin"<<endl;
		a1[i].output1();
	}
	cout<<"car"<<endl;
	car a2[3];
	for(i=0;i<n;i++)
	{
		cout<<i+1<<" car"<<endl;
		a2[i].input2();
	}
	cout<<endl;
	cout<<"���� "<<endl;
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<i+1<<" car"<<endl;
		a2[i].output2();
	}
	cout<<"truck"<<endl;
	
	truck a3[3];
	for(i=0;i<n;i++)
	{
		cout<<i+1<<" truck"<<endl;
		a3[i].input3();
	}
	cout<<endl;
	cout<<"���� "<<endl;
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<i+1<<" truck"<<endl;
		a3[i].output3();
	}
	getch();
	return 0;
}
