#include<conio.h>
#include<iostream>
#include<string>


using namespace std;

class kn
{
	string av, name, vid;
	int year, st;
public:
	void get()
	{
		cout << "Enter av : ";
		cin >> av;
		cout << "Enter name : ";
		cin >> name;
		cout << "Enter vid : ";
		cin >> vid;
		cout << "Enter year : ";
		cin >> year;
		cout << "Enter st : ";
		cin >> st;
	}

	void set()
	{
		cout << av<<endl;
		cout << "Name : "<< name << endl;
		cout << "Vid : "<<vid << endl;
		cout << "Year : "<<year << endl;
		cout << "st : "<< st<<endl;
	}

	friend void func1(kn a, string q);
	friend void func2(kn a, string q);
	friend void func3(kn a, int q);

};

void func1(kn a, string q)
{
	if (a.name == q)
		a.set();
}

void func2(kn a, string q)
{
	if (a.vid == q)
		a.set();
}

void func3(kn a, int q)
{
	if (a.year > q)
		a.set();
}

int main()
{
	kn a[3];

	for (int i = 0; i < 3; i++)
	{
		a[i].get();
	}
	cout << "Out " << endl;
	for (int i = 0; i < 3; i++)
	{
		a[i].set();
	}
	cout << "Enter wath av search : ";
	string s;
	cin >> s;
	for (int i = 0; i < 3; i++)
	{
		func1(a[i],s);
	}

	cout << "Enter wath vid search : ";
	cin >> s;
	for (int i = 0; i < 3; i++)
	{
		func2(a[i], s);
	}

	int r;
	cout << "Enter wath year : ";
	cin >> r;
	for (int i = 0; i < 3; i++)
	{
		func3(a[i], r);
	}


	getch();
	return 0;
}