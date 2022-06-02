#include<conio.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<stdlib.h>




using namespace std;



int main()
{
	setlocale(LC_ALL, "ukr");
	vector <float> X;

	int i = 0,n;

	cout << "Введіть розмірність вектора : ";
	cin >> n;
	float q;
	cout << "Введіть значення вектора : ";
	while (i < n)
	{
		cin >> q;
		X.push_back(q);
		i++;
	}


	cout << "Вивід вектора : ";
	for (i = 0; i < X.size(); i++)
	{
		cout << X[i] << " ";
	}
	
	float max, min,max1,min1;
	int a, b;
	max = X[0];
	min = X[0];

	

	for (i = 0; i < X.size(); i++)
	{
		if (X[i] > max)
			max = X[i];
		if (X[i] < min)
			min = X[i];
	}

	cout << endl;
	cout << "max = " << max << endl; 
	cout << "min = " << min << endl;;

	cout << "Введіть діапазон від a до b " << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	int r;
	if (b > a && b < X.size())
	{
		r = 0;
		for (i = a; i <= b; i++)
		{
			if (r == 0 )
			{
				min1 = X[i];
				r++;
			}
			if (X[i] < min1 && r != 0)
			{
				min1 = X[i];
			}
		}
		r = 0;
		for (i = a; i <= b; i++)
		{
			if (r == 0 )
			{
				max1 = X[i];
				r++;
			}

			if (X[i] > max1 &&r!=0)
			{
				max1 = X[i];
			}
		}
	}
	else
		if (a > b && a < X.size())
		{
			r = 0;
			for (i = b; i <= a; i++)
			{
				if (r == 0)
				{
					min1 = X[i];
					r++;
				}
				if (X[i] < min1 &&r!=0)
				{
					min1 = X[i];
					r++;
				}
			}
			r = 0;
			for (i = b; i <= a; i++)
			{
				if (r == 0)
				{
					max1 = X[i];
					r++;
				}

				if (X[i] > max1 && r!=0)
				{
					max1 = X[i];
				}
			}
		}
		else
			cout << "Верхня межа вийшла за рамки";
	
	

	cout << "В діапазоні  ";
	cout << endl;
	cout << "max = " << max1;
	cout << endl;
	cout << "min = " << min1 << endl;

	for (i = 0; i < X.size(); i++)
	{
		for (int j = i + 1; j < X.size(); j++)
			if (X[i] > X[j])
				swap(X[i], X[j]);
	}

	cout << "Вивід вектора : ";
	for (i = 0; i < X.size(); i++)
	{
		cout << X[i] << " ";
	}

	vector <float>Z(5,1);
	cout <<endl<< "Введіть позицію  вставки : ";
	cin >> n;
	auto pos = X.cbegin();
	pos = pos + n;
	X.insert(pos, Z.begin(), Z.end());

	for (i = 0; i < X.size(); i++)
	{
		cout << X[i] << " ";
	}

	cout << endl;

	vector <float> x2;
	int k;
	cout << "Введіть позицію видалення : ";
	cin >> k;
	for (i = 0; i < X.size(); i++)
	{
		if (i != k)
			x2.push_back(X[i]);
	}
	X.clear();

	for (i = 0; i < x2.size(); i++)
	{
		X.push_back(x2[i]);
	}

	cout << "Вивід вектора : ";
	for (i = 0; i < X.size(); i++)
	{
		cout << X[i] << " ";
	}

	cout << endl;
	cout << "Введіть діапазон сортування від a до b "<<endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	if (b > a && b < X.size())
	{
		for (i = a; i < b; i++)
		{
			for (int j = i + 1; j < b; j++)
				if (X[i] > X[j])
					swap(X[i], X[j]);
		}
	}
	else
		if (a > b && a < X.size())
		{
			for (i = b; i < a; i++)
			{
				for (int j = i + 1; j < a; j++)
					if (X[i] > X[j])
						swap(X[i], X[j]);
			}
		}
		else
			cout << "Верхня межа вийшла за рамки";

	
	cout << "Вивід вектора : ";
	for (i = 0; i < X.size(); i++)
	{
		cout << X[i] << " ";
	}

	return 0;
}