#include<conio.h>
#include<iostream>
#include<string.h>


using namespace std;

class flower
{
	int number;
public:
	string name;
	string flowering, inflorescence, root_system;
	float height;

protected:
	string color;
public:
	void get()
	{
		cout << "enter name : ";
		cin >> name;
		cout << "enter number : ";
		cin >> number;
		cout << "enter color : ";
		cin >> color;
		cout << "enter flowering : ";
		cin >> flowering;
		cout << "enter heihgt : ";
		cin >> height;
		cout << "enter inflorescence : ";
		cin >> inflorescence;
		cout << "enter root sustem : ";
		cin >> root_system;
	}
	void print()
	{
		cout << name << " - " << number << "," << color << "," << flowering << "," << height << "," << inflorescence << "," << root_system << endl;
	}

	void print2()
	{
		float k;
		cout << "enter height : ";
		cin >> k;
		if (height > k)
		{
			cout << name << " - " << number << "," << color << "," << flowering << "," << height << "," << inflorescence << "," << root_system << endl;
		}
	}

	void print3()
	{
		char k;
		cout << "Enter letter : ";
		cin >> k;
		if (name[0] == k)
		{
			cout << name << " - " << number << "," << color << "," << flowering << "," << height << "," << inflorescence << "," << root_system << endl;
		}
	}

	
	void flowering1()
	{
		cout << flowering << endl;
	}
	template<class t>
	void flowering1(t k)
	{
		flowering = k;
	}

};




int main()
{
	flower arr[4];

	for (int i = 0; i < 2; i++)
	{
		arr[i].get();
	}
	for (int i = 0; i < 4; i++)
	{
		arr[i].print();
	}

	return 0;
}
