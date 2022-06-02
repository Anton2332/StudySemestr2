#include<conio.h>
#include<iostream>
#include<string>
#include<list>
#include<math.h>


using namespace std;

class student
{

	string lastname, firstname,number;
	int data[3];
public:
	void input()
	{
		cout << "Enter lastname : ";
		cin >> lastname;
		cout << "Enter firstname : ";
		cin >> firstname;
		cout << "Enter number : ";
		cin >> number;
		cout << "Enter data of birth "<<endl;
		cout << "Enter day : ";
		cin >> data[0];
		cout << "Enter month : ";
		cin >> data[1];
		cout << "Enter years : ";
		cin >> data[2];
	}

	void print()
	{
		cout << "Lastname : " << lastname << endl;
		cout << "Firstname : " << firstname << endl;
		cout << "Number : " << number << endl;
		cout << "Data of birth : " <<data[0]<<","<<data[1]<<","<<data[2] << endl;
	}
	friend void search(list <student>& l);
	friend void sort(list <student>& l);
};

void search(list <student> & l)
{
	list <student> ::iterator it;
	string last2;
	int k = 0;
	cout << "Enter wath do you want search : ";
	cin >> last2;
	for (it = l.begin(); it != l.end(); it++)
	{
		if ((*it).lastname == last2)
		{
			k++;
			(*it).print();
		}
	}
	if (k == 0)
	{
		cout << "Dont search !!!"<<endl;
	}
}

void dodavan(list <student>& l)
{
	student k;

	k.input();
	l.push_back(k);
}

void dodavan2(list <student>& l)
{
	student k;

	k.input();
	l.push_front(k);
}

void del1(list <student>& l)
{
	l.pop_back();
}

void del2(list <student>& l)
{
	l.pop_front();
}


void sort(list <student>& l)
{
	list <student> ::iterator it;
	list <student> ::iterator it2;
	list <student> ::iterator it3;
	for (it = l.begin(); it != l.end(); it++)
	{
		it3 = it;
		for (it2 = it3++; it2 != l.end(); it2++)
		{
			if ((*it).data[0] > (*it2).data[0] && (*it).data[1] > (*it2).data[1] && (*it).data[2] > (*it2).data[2])
				swap(*it, *it2);
			else
			if ((*it).data[0] > (*it2).data[0] && (*it).data[1] == (*it2).data[1] && (*it).data[2] == (*it2).data[2])
				swap(*it, *it2);
			else
				if ((*it).data[0] <= (*it2).data[0] && (*it).data[1] > (*it2).data[1] && (*it).data[2] == (*it2).data[2])
					swap(*it, *it2);
				else
					if ((*it).data[0] <= (*it2).data[0] && (*it).data[1] <= (*it2).data[1] && (*it).data[2] > (*it2).data[2])
						swap(*it, *it2);
			
		}
	}
}

void printk(list <student> l)
{
	list <student> ::iterator it;
	for (it = l.begin(); it != l.end(); it++)
	{
		(*it).print();
	}
}

int main()
{
	list <student> lis;

	dodavan(lis);
	dodavan(lis);
	dodavan(lis);
	search(lis);
	sort(lis);
	printk(lis);


	return 0;
}