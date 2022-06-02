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
			cout<<"Введіть потужність : ";
			cin>>pot;
			cout<<"Введіть номер : ";
			cin>>number;
			
		}
		void output1()
		{
			cout<<"Потужність - "<<pot<<endl;
			cout<<"Номер - "<<number<<endl;
		}
		~engin()
		{
			cout<<"!!!"<<endl;
		}
};

class car : private engin //Томущо я методи батьківського класу не викликаю в int main
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
			cout<<"Введіть марку : ";
			cin>>mark;
			cout<<"Введіть ціну : ";
			cin>>price;
		}
		void output2()
		{
			output1();
			cout<<"Марка - "<<mark;
			cout<<endl<<"Ціна - "<<price<<endl;
		}
		~car()
		{
			cout<<"!!"<<endl;
		}
};

class truck : private car //Томущо я методи батьківського класу не викликаю в int main
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
			cout<<"Введіть вантажопідйомність : ";
			cin>>capacity;
		}
		void output3()
		{
			output2();
			cout<<"Вантажо підйомність - "<<capacity<<endl;
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
	cout<<"Вивід "<<endl;
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
	cout<<"Вивід "<<endl;
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
	cout<<"Вивід "<<endl;
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<i+1<<" truck"<<endl;
		a3[i].output3();
	}
	getch();
	return 0;
}
