#include<conio.h>
#include<iostream>
#include<math.h>
#include <list>
#include<algorithm>//��������� ���������
#include<stdlib.h>

using namespace std;



void searchInList(list <int> l) {
	bool b = false;
	if (!l.empty()) {
		int num;
		
		cout << "������ �� ������� ������ : ";
		cin >> num;
		list <int> ::iterator it;
		for (it = l.begin(); it != l.end(); it++) {
			if (*it == num)
				b = true;
		}
		if (b) cout << "���� ����� � � ������!"<<endl;
		else cout << "������ ����� ���� � ������!"<<endl;
	}
}

void deleteInList(list <int>& l) {
	if (!l.empty()) {
		int num;
		bool b = false;
		cout << "������� �� ������� �������� : ";
		cin >> num;
		list <int> ::iterator it;
		for (it = l.begin(); it != l.end(); it++)
			if (*it == num) {
				b = true;
				l.erase(it);
			}
		if (b) 
			cout << "������� ������� �����!"<<endl;
		else 
			cout << "������ ����� ���� � ������!"<<endl;
	}
}

void intsertInList(list <int> l) {
	bool b = false;
	if (!l.empty()) {
		int num,num2;

		cout << "������ ����� ��� : ";
		cin >> num;
		cout << "������ �� : ";
		cin >> num2;
		list <int> ::iterator it;
		for (it = l.begin(); it != l.end(); it++) {
			if (*it == num)
			{
				b = true;
				l.insert(it,num2);
			}

		}
	}
}


void intsertInList2(list <int> l) {
	bool b = false;
	if (!l.empty()) {
		int num, num2;

		cout << "������ ����� ��� : ";
		cin >> num;
		cout << "������ �� : ";
		cin >> num2;
		list <int> ::iterator it;
		for (it = l.begin(); it != l.end(); it++) {
			if (*it == num)
			{
				b = true;
				it++;
				l.insert(it, num2);
			}

		}
	}
}





void Funcsional()
{
	cout << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "|               ���� ��� ������ � ��������          |" << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "1. ��� ������� �������� � ������" << endl;
	cout << "2. ��� �������� � ������� ������" << endl;
	cout << "3. ��� �������� � ����� ������" << endl;
	cout << "4. ������� �������� ���� ��������" << endl;
	cout << "5. ������� �������� ����� ��������" << endl;
	cout << "6. ����� ��������� �����" << endl;
	cout << "7. ��������� ����� � �������� ���������" << endl;
	cout << "8. �������� ������" << endl;
	cout << "9. �����" << endl;
}

int main()
{
	setlocale(LC_CTYPE, "ukr");

	int s = 0;

	list<int> firstlist;

	int k;



	while (s != 9) {

		Funcsional();
		cin >> s;
		switch (s) {
		case 1:
			if (firstlist.empty()){
				cout << "������ ������ ������� : ";
				cin >> k;
				firstlist.push_front(k);
			}
			else
			{
				cout << "������ ������� ��� ���� �������!!";
			}
			cout  << "��� ����������� �������� ������ " << endl;
			break;
		case 2:
			if (firstlist.empty())
			{
				cout << "�� �� ���� ������� ������� �������� !!!";
			}
			else
			{ 
				cout << "������ �������� �������� ��� ���������� � ������� : ";
				cin >> k;
				firstlist.push_back(k);
			}
			cout  << "��� ����������� �������� ������ " << endl;
			break;
		case 3:
			if (firstlist.empty())
			{
				cout << "�� �� ���� ������� ������� �������� !!!";
			}
			else
			{
				cout << "������ �������� �������� ��� ���������� � ����� : ";
				cin >> k;
				firstlist.push_front(k);
			}
			cout << "��� ����������� �������� ������ " << endl;
			break;
		case 4:
			if (firstlist.empty())
			{
				cout << "������ ������ !!!";
			}
			else
			intsertInList2(firstlist);
			cout << "��� ����������� �������� ������ " << endl;
			break;
		case 5:
			if (firstlist.empty())
			{
				cout << "������ ������ !!!";
			}
			else
			intsertInList(firstlist);

			cout  << "��� ����������� �������� ������ " << endl;
			break;
		case 6:
			if (firstlist.empty())
			{
				cout << "������ ������ !!!";
			}
			else
			{
				searchInList(firstlist);
			}

			cout << "��� ����������� �������� ������ " << endl;
			break;
		case 7:
			if (firstlist.empty())
			{
				cout << "������ ������ !!!";
			}
			else
			{
				deleteInList(firstlist);
			}
			cout << "��� ����������� �������� ������ " << endl;
			break;
		case 8:
			cout << "�������� ������ : ";
			copy(firstlist.begin(), firstlist.end(), ostream_iterator<int>(cout, " "));
			cout <<endl<< "��� ����������� �������� ������ " << endl;
			break;
		case 9:

			cout << "�������� ����������." << endl;
			break;
		default:cout << "������ �������� ��������" << endl << "��� ��������� �������� Enter"; break;
		}
		_getch();
		system("cls");

	}





	return 0;
}
