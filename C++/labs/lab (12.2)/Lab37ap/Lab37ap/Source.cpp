#include<conio.h>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<Windows.h>
#include<iomanip>



using namespace std;

class fotop
{
protected:
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	string model,mater;
	int zoom;
	float vart;
public:
	fotop()
	{
		model = '0';
		mater = '0';
		vart = 0;
	}

	void vartfunc()
	{
		if (mater == "metal" || mater == "�����" || mater == "Metal" || mater == "�����")
			vart = (zoom + 2) * 15;
		else
			vart = (zoom + 2) * 10;

	}

	fotop(int k)
	{
		cout << "������ ������ : ";
		cin >> model;
		cout << "������ ��������� (������ 1 � ����� 35) : ";
		while (zoom < 1)
		{
			cin >> zoom;
			if (zoom < 1 || zoom>35)
			{
				cout << "������� �� �������� �������� !!!" << endl;
				cout << "������ ��������� (������ 1 � ����� 35) : ";
			}
			else
				break;
		}
		cout << "������ ������� (metal or plastic)���(����� ��� �������) : ";
		while (0 < 1)
		{
			cin >> mater;
			if (mater == "metal"||mater=="plastic"||mater=="�����"||mater=="�������"||mater == "Metal" || mater == "Plastic" || mater == "�����" || mater == "�������")
				break;
			else
			{
				cout << "������� �� �������� �������� !!!" << endl;
				cout << "������ ������� (metal or plastic)���(����� ��� �������) : ";
			}
		}
		vartfunc();
	}

	void inform()
	{
		SetConsoleTextAttribute(h, 9);
		cout << setw(30) << "������ : ";
		SetConsoleTextAttribute(h, 12);
		cout << model << endl;
		SetConsoleTextAttribute(h, 9);
		cout << setw(30) << "Zoom : ";
		SetConsoleTextAttribute(h, 12);
		cout << zoom << endl;
		SetConsoleTextAttribute(h, 9);
		cout << setw(30) << "������� : ";
		SetConsoleTextAttribute(h, 12);
		cout<< vart << " $" << endl;
	}

	bool dorog()
	{
		if (vart > 200)
		{
			return true;
		}
		else
			return false;
	}
	void getfotop(string m, int z, string m2)
	{
		model = m;
		zoom = z;
		mater = m2;
		vartfunc();
	}

};

class tsifr : public fotop
{
	int kilmeg;
public :
	tsifr()
	{
		kilmeg = 0;
	}


	tsifr(int k)
	{
		fotop(1);
		vartfunc();

		cout << "������ ������� ���������� : ";
		cin >> kilmeg;
	}

	void novmod()
	{
		kilmeg = kilmeg + 2;
	}

	void gettsifr(int k, string m, int z, string m2)
	{
		kilmeg = k;
		model = m;
		zoom = z;
		mater = m2;
		vartfunc();
	}

	void informt()
	{
		inform();
		SetConsoleTextAttribute(h, 9);
		cout << setw(30) << "ʳ������ ���� ������ : ";
		SetConsoleTextAttribute(h, 12);
		cout <<  kilmeg;
		cout << endl;

	}
};





int main()
{
	setlocale(LC_CTYPE, "ukr");
	
	fotop a;
	a.getfotop("Fotop", 4, "plastic");
	a.inform();
	if (a.dorog())
		cout << setw(38) << "������� " << endl;
	else
		cout << setw(38) << "������� " << endl;
	
	tsifr b;
	b.gettsifr(8, "tsifrfont", 3, "metal");
	b.informt();
	if (b.dorog())
		cout << setw(38) << "������� " << endl;
	else
		cout << setw(38) << "������� " << endl;
	b.novmod();
	b.informt();
	if (b.dorog())
		cout << setw(38) << "������� " << endl;
	else
		cout <<setw(38)<< "������� " << endl;
	

	return 0;
}


