#include<conio.h>
#include<iostream>
#include<string.h>

using namespace std;

class beard
{
	int number;
protected:
	float weight;
public:
	string name,color,home;
	float height,swing;

	void print1()
	{
		float k;
		cout << "Enter swing : ";
		cin >> k;
		if (swing > k)
		{
			cout << name << " - " << number << " , " << weight << " , " << height << " , " << color << " , " << swing << " , " << home << endl;
		}
	}
	void print()
	{
		cout << name << " - " << number << " , " << weight << " , " << height << " , " << color << " , " << swing << " , " << home << endl;
	}

	int print2(int i)
	{
		float height2;
		int k;
		if (i = 0)
		{
			
			height2 = height;
			k = i;
		}
		if (height > height2)
		{
			height2 = height;
			k = i;
		}
		return k;
	}
	void print3( int i , bool *k )
	{
		float w1, w2;
		cout << "Enter w1 : ";
		cin >> w1;
		cout << "Enter w2 : ";
		cin >> w2;
		if (weight > w1 && weight < w2)
		{
			k[i] = true;
		}
	}

};



int main()
{
	int q;
	beard a[10];
	for (int i = 0; i < 10; i++)
	{
		q = a[i].print2(i);
	}
	a[q].print();
	bool b[10];




	return 0;
}



