#include<conio.h>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
#include<math.h>





using namespace std;
template <class t, int nk>

class vector
{
public:
	t* a = new t[n];
	int n;
	vector()
	{
		n = nk;
		for (int i = 0; i < n; i++)
			a[i] = 0;

	}
	vector(int a1, int b)
	{
		b = b * 10;
		a1 = a1 * 10;
		int c = b - a1;
		for (int i = 0; i < n; i++)
		{
			
			a[i] = 0.1 * (rand() % (c + a1));
		}
	}

	void output()
	{
		cout << "output : " << endl;
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
	}

	void inputrand()
	{
		int a1, b;
		cout << "enter a and b : ";
		cout << endl << "a = ";
		cin >> a1;
		cout << "b = ";
		cin >> b;
		b = b * 10;
		a1 = a1 * 10;
		for (int i = 0; i < n; i++)
		{

			a[i] = 0.1 * (rand() % ((b - a1) + a1));
		}
	}


	void reassignment()
	{
		t* b = new t[n];
		for (int i = 0; i < n / 2; i++)
		{
			b[i] = a[i * 2];
		}
		for (int i = n / 2; i < n; i++)
		{
			b[i] = a[((i - n / 2) * 2) + 1];
		}
		for (int i = 0; i < n; i++)
			a[i] = b[i];
		delete[] b;
	}
	void deleted()
	{
		cout << "Enter del : ";
		t g;
		cin >> g;
		for (int i = 0; i < n; i++)
		{
			if (a[i] == g)
			{
				for (int j = i; j < n; j++)
					swap(a[j], a[j + 1]);

				n--;
			}
		}

	}


	void del()
	{
		delete[]a;
	}


	vector operator +(vector op2)
	{
		for (int i = 0; i < n; i++)
			a[i] = a[i] + op2.a[i];
		return *this;
	}

	void operator ++()
	{
		for (int i = 0; i < n; i++)
			a[i] = a[i] + 10;
	}
	bool operator >(vector op1)
	{
		t sum1k=0,sum2k=0;
		for (int i = 0; i < n; i++)
			sum1k = sum1k + a[i];
		for (int i = 0; i < n; i++)
			sum2k = sum2k + op1.a[i];
		if (sum1k > sum2k)
			return true;
		else
			return false;
	}
	bool operator <(vector op1)
	{
		t sum1=0, sum2=0;
		for (int i = 0; i < n; i++)
			sum1 = sum1 + a[i];
		for (int i = 0; i < n; i++)
			sum2 = sum2 + op1.a[i];
		if (sum1 < sum2)
			return true;
		else
			return false;

	}
	bool operator ==(vector op1)
	{
		t sum1=0, sum2=0;
		for (int i = 0; i < n; i++)
			sum1 = sum1 + a[i];
		for (int i = 0; i < n; i++)
			sum2 = sum2 + op1.a[i];
		if (sum1 == sum2)
			return true;
		else
			return false;
	}
	void input()
	{
		cout << "Enter vector : " << endl;
		for (int i = 0; i < n; i++)
		{
			cout << "[" << i << "] = ";
			cin >> a[i];
		}
	}

};





int main()
{
	srand(time(NULL));
	vector <int, 10> b;
	b.input();
	vector <int, 10> c;
	c.input();

	if (c == b)
		cout << "c==b" << endl;
	else
		cout << "c!=b" << endl;
	if (c > b)
		cout << "c>b" << endl;
	else
		cout << "c!>b" << endl;

	if (c < b)
		cout << "c<b" << endl;
	else
		cout << "c!<b" << endl;
	++c;
	c.output();
	(c + b).output();
	_getch();
	return 0;
}
