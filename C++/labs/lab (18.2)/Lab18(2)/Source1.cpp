#include<conio.h>
#include<iostream>
#include<string>

using namespace std;

class participants
{
	string lastname,adres,number;
public:
	participants()
	{
		lastname = '0';
		adres = '0';
		number = '0';
	}
	void input()
	{
		cout << "Enter lastname : ";
		cin >> lastname;
		cout << "Enter number : ";
		cin >> number;
		cout << "Enter adres : ";
		cin >> adres;
	}

	void print()
	{
		cout << "lastname " << lastname << endl;
	}
	
};

class list1 : public participants
{

	int data[3];
	bool pil;
	int numberch;
public:
	list1()
	{
		data[0] = 0;
		data[1] = 0;
		data[2] = 0;
		pil = false;
		numberch = 0;
	}
	void input2()
	{
		input();
		cout << "Enter data " << endl;
		cout << "Enter day : ";
		cin >> data[0];
		cout << "Enter month : ";
		cin >> data[1];
		cout << "Entar years : ";
		cin >> data[2];
		cout << "do you have benefits?(yes or no)";
		string s;
		cin >> s;
		if (s == "yes")
			pil = true;
		else
			if (s == "no")
				pil = false;
			else
				cout << "you enter not the correct value" << endl;

		cout << "enter number in the queue : ";
		cin >> numberch;

	}

	void print2()
	{
		print();
		cout << "you in cherh " << endl;
	}
	bool operator !=(list1 op1)
	{
		if (data[0] != op1.data[0]&& data[1] != op1.data[1]&& data[2] != op1.data[2])
			return true;
		else
			return false;
	}

	bool operator <(list1 op1)
	{
		if (data[0] == op1.data[0] && data[1] == op1.data[1] && data[2] < op1.data[2])
			return true;
		else
			if (data[0] == op1.data[0] && data[1] < op1.data[1] )
				return true;
			else
				if (data[0] < op1.data[0])
					return true;
				else
					return false;
	}

};

class list2 : public participants
{
	bool pos;
	int trevdop;
	int chaspoch[2];
	int chaspochvs[2];
public: 
	list2(){
		pos = false;
		trevdop = 0;
		chaspoch[0] = 0;
		chaspoch[1] = 0;
		chaspochvs[0] = 0;
		chaspochvs[1] = 0;
	}
	void input2()
	{
		cout << "do you nead pos ? (yes or no)";
		string s;
		cin >> s;
		if (s == "yes")
			pos = true;
		else
			if (s == "no")
				pos = false;
			else
				cout << "you enter not the correct value" << endl;
		cout << "Enter trevalist dop : ";
		cin >> trevdop;
		cout << "enter hourse poch : ";
		cin >> chaspoch[0];
		cout << "enter minutes : ";
		cin >> chaspoch[1];
		cout << "Enter hourse pohc dop : ";
		cin >> chaspochvs[0];
		cout << "endter minutes : ";
		cin >> chaspochvs[1];
	}
	void print2()
	{
		print();
		cout << "you in konf "<<endl;
	}
	bool operator !=(list2 op1)
	{
		if (trevdop != op1.trevdop)
			return true;
		else
			return false;
	}
	bool operator <(list2 op1)
	{
		if (trevdop < op1.trevdop)
			return true;
		else
			return false;
	}
};


int main()
{
	list1 a, b;
	a.input2();
	a.print2();
	
	if (a < b)
		cout << "a<b" << endl;
	else
		cout << "a!<b" << endl;
	if (a != b)
		cout << "a!=b" << endl;
	else
		cout << "a==b" << endl;


	list2 a1, b1;
	a1.input2();
	a1.print2();
	if (a1 < b1)
		cout << "a1<b1" << endl;
	else
		cout << "a1!<b1" << endl;
	if (a1 != b1)
		cout << "a1!=b1" << endl;
	else
		cout << "a1==b1" << endl;


}

