
/*
#include<conio.h>
#include<iostream>
#include <string.h>
#include <time.h>
#include <stdlib.h>
*/


//setlocale(LC_CTYPE, "ukr");//��� ����

using namespace std;//������ ���� std

//���������
/*
flaot *p;//��������� ���������
cout<<&p;//������������ ���������

int i;
p = &i;//�������� � �������� ��������� �� i

int a[10];
p = a;//�������� p ����� �� ����� a
*/

//�������� �������� 
/*
int a[n][n];
	int *p1[n];//����� ���������
	int **p2;//�������� ��������
	p2=p1;//� �������� �������� ��������� ��������� �� ��������� ��������
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cin>>a[i][j];
		p1[i]=&a[i][0];//�������� � ��������� ��������
	}

	for(i = 0;i<n;i++

	{
		for(j = 0;j<n;j++)
			cout<<"*(*(p1+i)+j);//������������
*/

//���������� ��������� �����
/*
	int i,n;
	cout<<"N = ";
	cin>>n;
	int *a=new int [n];

	for(i=0;i<n;i++)//��������
	cin>>a[i];

	delete [] a;//��������� ������������ ������
*/

//��������� ��������� �����
/*
	int **a=new int* [n];//������� ��������� ����������� ���������� ������
	for (i=0;i<n;i++)
	a[i]=new int [m];//����� ���������


	for(i=0;i<n;i++)//������� ���������
	{
		delete [] a[i];
	}
	delete [] a;//����� ���������


*/

//������ ����
/*
namespace matrix //������� ��������� �������� ���� (matrix) ����� ��������
{
	int i;
	float s;
	void v(int **pb,int b)//������� �������� ���� ��� �������� � �����
	{
		int i,j;
		for(i=0;i<b;i++)
			for(j=0;j<b;j++)
			pb[i][j]=rand()%10+3;
	}
}
int main(){
matrix::v(b,nk);//������ � �������� ����
cout<<matrix::s;//������ �������� s � ������ �������� ����
}
*/

//�������
/*
int main(){
	setlocale(LC_CTYPE, "ukr");
	cout<<"?????? ? ????? : "<<__FILE__<<endl;//������ ������������ �����
	cout<<"?? ??????? - "<<__LINE__;//������ ����� � ����� ����������
	cout<<endl;
	cout<<"??? : "<<__TIME__<<endl;//������ ������ �������
	cout<<"???? : "<<__DATE__;//������ ���� �������
	return 0;
}
*/

//������������� �������
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

//������� ���������� � �����
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

//����� � ����
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

//�����
/*
class lines//������ ����
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
	ticket()//����������� �� �������������
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
	ticket(string a,int b,int c,int d,int e,int q )//����������� � �����������
	{
		item=a;
		number=b;
		hours[0]=c;
		hours[1]=d;
		quantity1=e;
		quantity2=q;
	}
	void percent();//��� ������

	friend void p(school a);//��������� ������� �������

	friend class lines;//��������� �������� �����
};

void ticket::percent()//����������� �����
{cout<<"quantity1/quantity2="<<quantity1/quantity2<<endl;}

void p(school a)//���� ������ �������
{cout<<a.vik;}



int main()
{
lines b;
school q;
b.func(q);//������ ������ � ��������� �����

school a;
	p(a);//����� �������� �������


ticket A;
A.percent();
return 0;
}
*/

//�������� ����������� �����
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

class prats : private school //(schoool)����������� ���� (prats) ������� ����
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

//����������� �����������
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

class prats : private school , prevate school2 //(schoool)����������� ���� � (school2)����� ����������� ���� (prats)������� ����
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

//����� �������
/*
#include<iomanip>
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(h, 1);����� ������ ���������� ������ � �����

cout << setw(46) << "Yes" << endl;//������ � ������

*/

//���������
/*
try
	{if (a < 0)//���� ��������� ����� ���� ��������� ��� � try �� ���������
			throw 1;}
	catch (int e)//�������� ����� � try
	{if (e == 1)
		{cout << "You cannot enter negative values" << endl;}}
*/

//������� � ������ ������ �����
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

//����� � ������ ������ �����
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
{vector <int, 10> b;//������ ������ ����� (10 �� ���� nk)
	return 0;
}

*/

//�������������� �������� Lab15 ����� �����
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

//�����
/*
s2.length()//������� ���������� �����
tolower(str1[i])//� �������� ������
str1.erase();//������� ���� ���� str1
s3.replace(j,n, str1);//� j , n ������� ������� ������� � �������� str1
*/

//���������
/*
#include<vector>
#include<list>
#include<algorithm>
#include<stdlib.h>

vect.push_back(q);//���� � ����� q
sort(vect.begin(), vect.end());//���������� ������� �� ���������� 

unique(vect2.begin(),vect2.end());//������� ����� ��������

reverse(vect.begin(), vect.end());//����� ������ ������� � �����

lis.sort();//���������� ���� �� ����������

*/







