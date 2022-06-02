#include<conio.h>
#include<iostream>
#include<math.h>
#include <list>
#include<algorithm>//Бібліотека алгоритмів
#include<stdlib.h>

using namespace std;



void searchInList(list <int> l) {
	bool b = false;
	if (!l.empty()) {
		int num;
		
		cout << "Введіть що потрібно знайти : ";
		cin >> num;
		list <int> ::iterator it;
		for (it = l.begin(); it != l.end(); it++) {
			if (*it == num)
				b = true;
		}
		if (b) cout << "Таке число є в списку!"<<endl;
		else cout << "Такого числа немає в списку!"<<endl;
	}
}

void deleteInList(list <int>& l) {
	if (!l.empty()) {
		int num;
		bool b = false;
		cout << "ВВведіть що потрібно видалити : ";
		cin >> num;
		list <int> ::iterator it;
		for (it = l.begin(); it != l.end(); it++)
			if (*it == num) {
				b = true;
				l.erase(it);
			}
		if (b) 
			cout << "Элемент успешно удалён!"<<endl;
		else 
			cout << "Такого числа немає в списку!"<<endl;
	}
}

void intsertInList(list <int> l) {
	bool b = false;
	if (!l.empty()) {
		int num,num2;

		cout << "Введіть перед чим : ";
		cin >> num;
		cout << "Введіть що : ";
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

		cout << "Введіть перед чим : ";
		cin >> num;
		cout << "Введіть що : ";
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
	cout << "|               Меню для роботи з списками          |" << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "1. Ввід першого елемента в список" << endl;
	cout << "2. Ввід елемента в початок списку" << endl;
	cout << "3. Ввід елемента в кінець списку" << endl;
	cout << "4. Вставка елемента після заданого" << endl;
	cout << "5. Вставка елемента перед заданого" << endl;
	cout << "6. Пошук потрібного вузла" << endl;
	cout << "7. Видалення вузла з вказаним значенням" << endl;
	cout << "8. Перегляд списку" << endl;
	cout << "9. Вихід" << endl;
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
				cout << "Введіть перший елемент : ";
				cin >> k;
				firstlist.push_front(k);
			}
			else
			{
				cout << "Перший елемент вже було введено!!";
			}
			cout  << "Для продовження натисніть клавішу " << endl;
			break;
		case 2:
			if (firstlist.empty())
			{
				cout << "Ще не було введено першого елемента !!!";
			}
			else
			{ 
				cout << "Введіть значення елемента для вставлення в початок : ";
				cin >> k;
				firstlist.push_back(k);
			}
			cout  << "Для продовження натисніть клавішу " << endl;
			break;
		case 3:
			if (firstlist.empty())
			{
				cout << "Ще не було введено першого елемента !!!";
			}
			else
			{
				cout << "Введіть значення елемента для вставлення в кінець : ";
				cin >> k;
				firstlist.push_front(k);
			}
			cout << "Для продовження натисніть клавішу " << endl;
			break;
		case 4:
			if (firstlist.empty())
			{
				cout << "Список пустий !!!";
			}
			else
			intsertInList2(firstlist);
			cout << "Для продовження натисніть клавішу " << endl;
			break;
		case 5:
			if (firstlist.empty())
			{
				cout << "Список пустий !!!";
			}
			else
			intsertInList(firstlist);

			cout  << "Для продовження натисніть клавішу " << endl;
			break;
		case 6:
			if (firstlist.empty())
			{
				cout << "Список пустий !!!";
			}
			else
			{
				searchInList(firstlist);
			}

			cout << "Для продовження натисніть клавішу " << endl;
			break;
		case 7:
			if (firstlist.empty())
			{
				cout << "Список пустий !!!";
			}
			else
			{
				deleteInList(firstlist);
			}
			cout << "Для продовження натисніть клавішу " << endl;
			break;
		case 8:
			cout << "Елементи списку : ";
			copy(firstlist.begin(), firstlist.end(), ostream_iterator<int>(cout, " "));
			cout <<endl<< "Для продовження натисніть клавішу " << endl;
			break;
		case 9:

			cout << "Програма завершенна." << endl;
			break;
		default:cout << "Введіть коректне значення" << endl << "Для оновлення натисніть Enter"; break;
		}
		_getch();
		system("cls");

	}





	return 0;
}
