#include<conio.h>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<Windows.h>
#include<iomanip>

using namespace std;

class engin
{
protected:
	float mosh, number;
public:
	engin()
	{
		cout << "������ ������� ������� ��� ������� : ";
		cin >> mosh;
		cout << "������ ����� ������� : ";
		cin >> number;
	}

	void informb()
	{
		cout << "ʳ������ ������� ��� - " << mosh << endl;
		cout << "����� ������� - " << number << endl;
	}
};

class moto :public engin //� ����������� ���� ���� ������������ ���� ��������� ������� �� � ����
{
	int kil;
public:
	moto()
	{
		cout << "������ ������� ���� : ";
		cin >> kil;
	}

	void informd1()
	{
		informb();
		cout << "ʳ������ ���� - " << kil << endl;
	}
};

class sport : private moto//� ����������� ���� ���� ������������ ���� ��������� ������� �� � ����
{
	float max;
public:
	sport()
	{
		cout << "������ ���������� �������� : ";
		cin >> max;
	}
	void informd3()
	{
		informd1();
		cout << "����������� �������� - " << max << endl;
	}
};

class car : private engin//� ����������� ���� ���� ������������ ���� ��������� ������� �� � ����
{
	float ob;
public:
	car()
	{
		cout << "������ ��� ��������� : ";
		cin >> ob;
	}

	void informd2() {
		informb();
		cout << "��� ��������� - ";
		cout << ob << endl;
	}
};

class truck : public car//� ����������� ���� ���� ������������ ���� ��������� ������� �� � ����
{
	float gr;
public:
	truck()
	{
		cout << "������ �������������� : ";
		cin >> gr;
	}
	void informd4()
	{
		informd2();
		cout << "�������������� - " << gr << endl;
	}
};



int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_CTYPE, "ukr");
	SetConsoleTextAttribute(h, 9);
	cout << "Engin " << endl;
	engin a1;
	a1.informb();
	SetConsoleTextAttribute(h, 10);
	cout << "Moto" << endl;
	moto a2;
	a2.informd1();
	SetConsoleTextAttribute(h, 11);
	cout << "Car" << endl;
	car a3;
	a3.informd2();
	SetConsoleTextAttribute(h, 12);
	cout << "sport moto" << endl;
	sport a4;
	a4.informd3();
	SetConsoleTextAttribute(h, 13);
	cout << "truck" << endl;
	truck a5;
	a5.informd4();
	system("cls");
	SetConsoleTextAttribute(h, 9);
	cout << "Engin " << endl;
	a1.informb();
	SetConsoleTextAttribute(h, 10);
	cout << "Moto" << endl;
	a2.informd1();
	SetConsoleTextAttribute(h, 11);
	cout << "Car" << endl;
	a3.informd2();
	SetConsoleTextAttribute(h, 12);
	cout << "sport moto" << endl;
	a4.informd3();
	SetConsoleTextAttribute(h, 13);
	cout << "truck" << endl;
	a5.informd4();



	return 0;
}
