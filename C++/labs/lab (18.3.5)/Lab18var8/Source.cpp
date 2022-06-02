#include<conio.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<list>
#include<algorithm>
#include<stdlib.h>

using namespace std;

void dodinlist(list <string>& l1, list <int>& l2, list <string>& l3,
	list <int>& d1, list <int>& d2, list <int>& d3 )
{
	string s;
	int i;
	cout << "Enter pnkt : ";
	cin >> s;
	l1.push_back(s);
	cout << "Enter number race : ";
	cin >> i;
	l2.push_back(i);
	cout << "Enter name and inits : ";
	cin >> s;
	l3.push_back(s);
	cout << "enter day : ";
	cin >> i;
	d1.push_back(i);
	cout << "Enter month : ";
	cin >> i;
	d2.push_back(i);
	cout << "Enter year : ";
	cin >> i;
	d3.push_back(i);

	
}

template <class t>
void dodinlist2(list <t>& l)
{
	t s;
	cin >> s;
	l.push_back(s);
}

void find(list <string> l1, list <int> l2, list <string> l3,
	list <int> d1, list <int> d2, list <int> d3)
{
	if (!l1.empty())
	{
		int r, d, m, y;
		cout << "Serch " << endl;
		cout << "Enter number : ";
		cin >> r;
		cout << "Enter day : ";
		cin >> d;
		cout << "Enter month : ";
		cin >> m;
		cout << "Enter yearse : ";
		cin >> y;

		list <string> ::iterator it1;
		it1 = l1.begin();
		list <int> ::iterator it2;
		it2 = l2.begin();
		list <string> ::iterator it3;
		it3 = l3.begin();
		list <int> ::iterator it4;
		it4 = d1.begin();
		list <int> ::iterator it5;
		it5 = d2.begin();
		list <int> ::iterator it6;
		it6 = d3.begin();

		while (it1 != l1.end())
		{
			if (*it2 == r && *it4 == d && *it5 == m && *it6 == y)
			{
				cout << *it2 << " - " << *it1 << " " << *it3 << " " << *it4 << "." << *it5 << "." << *it6 << endl;
			}
			
			it1++;
			it2++;
			it3++;
			it4++;
			it5++;
			it6++;
		}

	}
	else
	{
		cout << "list not search " << endl ;
	}
}

void del1(list <string>& l1, list <int>& l2, list <string>& l3,
	list <int>& d1, list <int>& d2, list <int>& d3)
{
	l1.clear();
	l2.clear();
	l3.clear();
	d1.clear();
	d2.clear();
	d3.clear();
	cout << "Deleted " << endl;
}




void print(list <string> l1, list <int> l2, list <string> l3,
	list <int> d1, list <int> d2, list <int> d3)
{
	list <string> ::iterator it1;
	list <int> ::iterator it2;
	list <string> ::iterator it3;
	list <int> ::iterator it4;
	list <int> ::iterator it5;
	list <int> ::iterator it6;

	it1 = l1.begin();
	it2 = l2.begin();
	it3 = l3.begin();
	it4 = d1.begin();
	it5 = d2.begin();
	it6 = d3.begin();
	while (it1 != l1.end())
	{
		cout << *it2 << " - " << *it1 << " " << *it3 << " " << *it4 << "." << *it5 << "." << *it6 << endl;
		it1++;
		it2++;
		it3++;
		it4++;
		it5++;
		it6++;
	}

}

int main()
{
	
	list <string> list1;
	list <int >list2;
	list <string>list3;
	list <int>data1;
	list <int>data2;
	list <int>data3;

	dodinlist(list1, list2, list3, data1, data2, data3);
	dodinlist(list1, list2, list3, data1, data2, data3);
	dodinlist(list1, list2, list3, data1, data2, data3);
	dodinlist(list1, list2, list3, data1, data2, data3);
	dodinlist(list1, list2, list3, data1, data2, data3);

	print(list1, list2, list3, data1, data2, data3);

	find(list1, list2, list3, data1, data2, data3);

	del1(list1, list2, list3, data1, data2, data3);





	return 0;
}