#include<conio.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include<math.h>

using namespace std;

class student
{
	string pr,number;
	int a[5];
public:
	void input(int i)
	{	
		cout << "Enter pr : ";
		if(i == 0)
			getline(cin, pr);
		else
		{
			cin.get();
			getline(cin, pr);
		}
		cout << "Enter number : ";
		cin >> number;
		cout << "Enter bal : ";
		cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	}

	void print()
	{
		cout << "output : " << endl;
		cout << pr << endl;
		cout <<"number : "<< number << endl;
		cout << "bal : " << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << endl;
	}
	friend float ser(student k);
	friend void sort(student* k);
	friend void func3(student* k);
};

void func1(student* k)
{
	int n = 10;
	for (int i = 0; i < n; i++)
	{
		k[i].input(i);
	}
}

void func12(student* k)
{
	int n = 10;
	for (int i = 0; i < n; i++)
	{
		k[i].print();
	}
}

float ser(student k)
{
	float q;
	q = k.a[0] + k.a[1] + k.a[2] + k.a[3] + k.a[4];
	q = q / 5;
	return q;
}

void sort(student* k)
{
	int n = 10;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ser(k[i]) > ser(k[j]))
			{
				swap(k[i], k[j]);

			}
		}
	}
}

void func3(student* k)
{
	int n = 10;
	int q = 0,q2;

	for (int i = 0; i < n; i++)
	{
		q2 = 0;
		for (int j = 0; j < 5; j++)
		{
			if (k[i].a[j] == 5 || k[i].a[j] == 4)
			{
				q++;
				q2++;
			}
		}
		if (q2 != 0)
		{
			k[i].print();
		}
	}

	if (q == 0)
	{
		cout << "student dont have " << endl;
	}

}



int main()
{
	int n = 10;
	student b[10];
	func1(b);
	for (int i = 0; i < n; i++)
	{
		b[i].print();
	}
	cout << "sort : " << endl;
	sort(b);
	for (int i = 0; i < n; i++)
	{
		b[i].print();
	}

	func3(b);




	return 0;
}