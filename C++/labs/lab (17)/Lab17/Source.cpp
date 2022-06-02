#include<conio.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<list>
#include<algorithm>
#include<stdlib.h>





using namespace std;

void print(vector <int> q)
{
	cout << "Вивід вектора : ";
	for (int i = 0; i < q.size(); i++)
	{
		cout << q[i] << " ";
	}
	cout << endl;
}

void print(list <int> l)
{
	list <int> ::iterator it;
	cout << "Вивід ліст : ";
	for (it = l.begin(); it != l.end(); it++) {
		
		cout << *it << " ";
	}
	cout << endl;
}

bool is_odd(int i)
{
	if ((i % 2) == 0)
		return true;
	else
		return false;
}

bool is(int i)
{
	if (i < 5)
		return true;
	else
	return false;
}



int main()
{
	setlocale(LC_ALL, "ukr");
	vector <int> vect;
	list <int> lis;

	int i = 0, n;

	cout << "Введіть розмірність вектора : ";
	cin >> n;
	float q;
	cout << "Введіть значення вектора : ";
	while (i < n)
	{
		cin >> q;
		vect.push_back(q);
		i++;
	}
	
	print(vect);

	sort(vect.begin(),vect.end());
	
	
	reverse(vect.begin(), vect.end());
	print(vect);

	vector<int>::iterator it;
	n = vect.size();
	for (i = 0; i < n; i++)
	{
		if (vect[i] < 5)
		{
			lis.push_back(vect[i]);
		}
	}
	vect.erase(remove_if(vect.begin(), vect.end(), is), vect.end());

	print(lis);
	
	sort(vect.begin(), vect.end());
	print(vect);

	lis.sort();
	print(lis);

	vector <int>vect2(vect);
	if (!lis.empty()) {
		list <int> ::iterator it = lis.begin();
		while (it != lis.end())
		{
			vect2.push_back(*it);
			it++;
		}
	}

	print(vect2);

	int k = 0;

	for (i = 0; i < vect2.size(); i++)
	{
		if (is_odd(vect2[i]))
			k++;

	}

	cout << "Кількість парних " << k;

	sort(vect2.begin(), vect2.end());
	unique(vect2.begin(),vect2.end());
	print(vect2);





	return 0;
}