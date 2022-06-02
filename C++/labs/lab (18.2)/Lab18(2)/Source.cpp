
/*
#include<conio.h>
#include<iostream>
#include <string.h>
#include <time.h>
#include <stdlib.h>
*/


//setlocale(LC_CTYPE, "ukr");//укр мова

using namespace std;//простір імен std

//Вказівники
/*
flaot *p;//створення вказівника
cout<<&p;//розіменування вказівника

int i;
p = &i;//присвоює в вказівник посилання на i

int a[10];
p = a;//вказівник p вказує на масив a
*/

//подвійний вказівник 
/*
int a[n][n];
	int *p1[n];//масив вказівників
	int **p2;//подвійний вказівник
	p2=p1;//в подвійний вказівник присвойли посилання на адиночний вказівник
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cin>>a[i][j];
		p1[i]=&a[i][0];//введення в одиночний вказівник
	}

	for(i = 0;i<n;i++

	{
		for(j = 0;j<n;j++)
			cout<<"*(*(p1+i)+j);//розіменування
*/

//одновиміний динамічний масив
/*
	int i,n;
	cout<<"N = ";
	cin>>n;
	int *a=new int [n];

	for(i=0;i<n;i++)//Введення
	cin>>a[i];

	delete [] a;//видалення одновимірного масиву
*/

//двовиміний динамічний масив
/*
	int **a=new int* [n];//початок створення двовимірного динамічного масиву
	for (i=0;i<n;i++)
	a[i]=new int [m];//кінець створення


	for(i=0;i<n;i++)//початок видалення
	{
		delete [] a[i];
	}
	delete [] a;//кінець видалення


*/

//Простір імен
/*
namespace matrix //початок створення простору імен (matrix) назва простору
{
	int i;
	float s;
	void v(int **pb,int b)//функція простору імен для введення в масив
	{
		int i,j;
		for(i=0;i<b;i++)
			for(j=0;j<b;j++)
			pb[i][j]=rand()%10+3;
	}
}
int main(){
matrix::v(b,nk);//виклик з простору імен
cout<<matrix::s;//Виведе значення s з даного простору імен
}
*/

//Макроси
/*
int main(){
	setlocale(LC_CTYPE, "ukr");
	cout<<"?????? ? ????? : "<<__FILE__<<endl;//виведе розположения файла
	cout<<"?? ??????? - "<<__LINE__;//виведе рядок в якому викликаний
	cout<<endl;
	cout<<"??? : "<<__TIME__<<endl;//виведе годину виклику
	cout<<"???? : "<<__DATE__;//виведе дату виклику
	return 0;
}
*/

//Програмування макросів
/*
using namespace std;
#define N 10
#define K 42
#define FUNC ({for(i=0;i<N;i++) {k=rand()%7+1;summa+=k;cout<<summa<<endl;getch();}\
{\
if (summa>K) {cout<<"Find an average";}\
else {cout<<"Write to the file";}\
}\
})
int main()
{
	int k, summa=0, i;
	FUNC;
	getch();
	return 0;
}

*/

//функція зчитування з файлу
/*
#inlcude<fstream>
void readtxt(string& str1)
{
	ifstream in("z1.txt");
	string str2;
	if (in.is_open())
	{
		while (getline(in, str2))
		{
			str1 = str1 + " " + str2;
		}
	}
	else
		cout << "file not open!!!" << endl;
	str1.erase(0,1);
	in.close();

}

*/

//запис в файл
/*
void outtxt(string str13)
{
	ofstream out;
	string namefile;
	cout << "Enter position file : ";
	cin >> namefile;
	out.open(namefile.c_str());
	int j = 0;
	if (out.is_open())
	{
		if (str1.length() != 0)
		{
			for (int i = 0; i < str1.length(); i++)
			{
				out << str1[i];
				j++;
				if (j > 75 && str1[i] == ' ')
				{
					out << "\n";
					j = 0;
				}
			}

		}
		cout << "Completed " << endl;
	}
	else
		cout << "The file was not opened !!!"<<endl;


	out.close();
}

*/

//Класи
/*
class lines//дружній клас
{int k;
	public:
	void lin(school a)
	{cout<<a.get1();}
}
class ticket
{
	public:
	string item;
	int number,hours[2],quantity1,quantity2;
	ticket()//конструктор за замовчуванням
	{
		cout<<"Enter item : ";
		cin>>item;
		cout<"Enter humber : ";
		cin>>number;
		cout<<"Enter hours : ";
		cin>>hours[0];
		cout<<"Enter minutes : ";
		cin>>hours[1];
		cout<<"Enter quantity1 : ";
		cin>>quantity1;
		cout<<"Enter quantity2 : ";
		cin>>quantity2;
	}
	ticket(string a,int b,int c,int d,int e,int q )//конструктор з параметрами
	{
		item=a;
		number=b;
		hours[0]=c;
		hours[1]=d;
		quantity1=e;
		quantity2=q;
	}
	void percent();//імя методу

	friend void p(school a);//обявления дружней функции

	friend class lines;//обявления дружнего класа
};

void ticket::percent()//розгорнутий метод
{cout<<"quantity1/quantity2="<<quantity1/quantity2<<endl;}

void p(school a)//сама дружня функція
{cout<<a.vik;}



int main()
{
lines b;
school q;
b.func(q);//виклик методу з фружнього класу

school a;
	p(a);//викик дружньой функцій


ticket A;
A.percent();
return 0;
}
*/

//одиничне наслідування класів
/*
class school
{
	string lastname,firstname,name;
	int vik;
	int rik;
	char st;
	public:
	school()
	{
		vik=0;
		rik=0;
		st='0';
		lastname='0';
		firstname='0';
		name='0';
	}
	void input()
	{
		cin>>lastname;
		cin>>firstname;
		cin>>name;;
		cin>>rik;
		cin>>st;
	}
};

class prats : private school //(schoool)батьківський клас (prats) дочірній клас
{
	string name;
	float zarp;
	public:
	prats(int k,float zarp1=10)
	{
		cin>>name;
		zarp=zarp1;
	}
	void input_prats()
	{
		input();
		cin>>name;
		cin>>zarp;
	}
};

int main(){
	prats a(2);
	a.input_prats();

	return 0;
}


*/

//множествене наслідування
/*
class school
{
	string lastname,firstname,name;
	int vik;
	int rik;
	char st;
	public:
	school()
	{
		vik=0;
		rik=0;
		st='0';
		lastname='0';
		firstname='0';
		name='0';
	}
	void input()
	{
		cin>>lastname;
		cin>>firstname;
		cin>>name;;
		cin>>rik;
		cin>>st;
	}
};
class school2
{
	string lastname,firstname,name;
	int vik;
	int rik;
	char st;
	public:
	school()
	{
		vik=0;
		rik=0;
		st='0';
		lastname='0';
		firstname='0';
		name='0';
	}
	void input()
	{
		cin>>lastname;
		cin>>firstname;
		cin>>name;;
		cin>>rik;
		cin>>st;
	}
};

class prats : private school , prevate school2 //(schoool)батьківський клас і (school2)також батьківський клас (prats)дочірній клас
{
	string name;
	float zarp;
	public:
	prats(int k,float zarp1=10)
	{
		cin>>name;
		zarp=zarp1;
	}
	void input_prats()
	{
		input();
		cin>>name;
		cin>>zarp;
	}
};

int main(){
	prats a(2);
	a.input_prats();

	return 0;
}

*/

//гарна консоль
/*
#include<iomanip>
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(h, 1);змінює кольор наступного тексту в косолі

cout << setw(46) << "Yes" << endl;//отступ в консолі

*/

//виключння
/*
try
	{if (a < 0)//після виконання умови весь наступний код в try не зчитується
			throw 1;}
	catch (int e)//перевірка умови з try
	{if (e == 1)
		{cout << "You cannot enter negative values" << endl;}}
*/

//функцій з зміними типами даних
/*
template <class t>
void roz(t* b, int n)
{
	t k;
	k = b[0];
	int q = 0;
	for (int i = 0; i < n; i++)
	{
		if (b[i] == k)
			q++;
	}
	cout << endl << b[0] << " -- " << q;

}
*/

//класи з зміними типами даних
/*
template <class t, int nk>
class vector
{public:
	t* a = new t[n];
	int n;
	vector()
	{n = nk;
		for (int i = 0; i < n; i++)
			a[i] = 0;}
	void output()
	{cout << "output : " << endl;
		for (int i = 0; i < n; i++)
		cout << a[i] << " ";}
	void input()
	{cout << "Enter vector : " << endl;
		for (int i = 0; i < n; i++)
		{cout << "[" << i << "] = ";
			cin >> a[i];}}

};
int main()
{vector <int, 10> b;//виклик такого класу (10 це наше nk)
	return 0;
}

*/

//Перевантаження операцій Lab15 трохи більше
/*
class vector {
void operator ++()
	{
		for (int i = 0; i < n; i++)
			a[i] = a[i] + 10;
	}
}

	int main()
	{
	vector <int, 10> c;
	++c;
	return 0;
	}

*/

//стрінг
/*
s2.length()//довжина стрінгового рядка
tolower(str1[i])//в нижньому регістрі
str1.erase();//видаляє весь вміст str1
s3.replace(j,n, str1);//з j , n кількість символів видаляє і вставляє str1
*/

//алгоритми
/*
#include<vector>
#include<list>
#include<algorithm>
#include<stdlib.h>

vect.push_back(q);//додає в кінець q
sort(vect.begin(), vect.end());//сортування вектора за зростанням 

unique(vect2.begin(),vect2.end());//видаляє сусідні дублікати

reverse(vect.begin(), vect.end());//змінює місцями початок і кінець

lis.sort();//сортування ліста за зростанням

*/







