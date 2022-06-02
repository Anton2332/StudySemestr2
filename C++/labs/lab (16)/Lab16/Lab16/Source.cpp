#include<conio.h>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<algorithm>
#include<fstream>
#include<math.h>

using namespace std;

void txt(string& str1)
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

void coping(string& str1)
{
	string s1;
	int i = 0;
	int k = 0;
	while (i<str1.length())
	{
		if (tolower(str1[i]) == 'a' || tolower(str1[i]) == 'e' || tolower(str1[i]) == 'i' || tolower(str1[i]) == 'o' || tolower(str1[i]) == 'u' || tolower(str1[i]) == 'y')
		k++;
		s1 = s1 + str1[i];
		if (str1[i] == ' ')
		{
			if (k > 2)
			{
				s1 = s1 + ' ';
				i++;
				str1.insert(i, s1);
				i = i + s1.length() - 1;
			}
			k = 0;
			s1.erase();
		}
		i++;
	}
	cout << "Compleat" << endl;
}

char find(string str1, string maxword1)
{
	int kword = 0;
	string s2;
	int i = 0;
	while (i < str1.length())
	{

		s2 = s2 + str1[i];
		if (str1[i] == ' ')
		{
			if (s2==maxword1)
				kword++;
			s2.erase();
		}
		i++;
	}
	return kword;
}

string maxwords(string& str1)
{
	string maxword1,maxword2,maxword3,s1;
	int i = 0;
	while (i < str1.length())
	{
		s1 = s1 + str1[i];

		if (str1[i] == ' ')
		{
			if (s1.length() > maxword1.length())
				maxword1 = s1;
				s1.erase();
		}
		i++;
	}
	i = 0;
	while (i < str1.length())
	{
		s1 = s1 + str1[i];
		if (str1[i] == ' ')
		{
			if (s1.length() > maxword2.length() && s1 != maxword1)
			maxword2 = s1;
				s1.erase();
		}
		i++;
	}
	i = 0;
	while (i < str1.length())
	{
		s1 = s1 + str1[i];
		if (str1[i] == ' ')
		{
			if (s1.length() > maxword3.length() && s1 != maxword1 && s1 != maxword2)
				maxword3 = s1;
				s1.erase();
		}
		i++;
	}
	string sh;
	sh = sh + maxword1 + " - " + char(find(str1, maxword1)+48) + "\n";
	sh = sh + maxword2 + " - " + char(find(str1, maxword2) + 48) + "\n";
	sh = sh + maxword3 + " - " + char(find(str1, maxword3) + 48) + "\n";
	return sh;
}



string find2(string& str1)
{
	string searching;
	cout << "Enter word : ";
	cin >> searching;
	cout << searching << endl;
	int i = 0,k=0;
	string s1,s2;
	while (i < str1.length())
	{
		s1 = s1 + str1[i];
		if (str1[i] == '.')
		{
			k=find(s1, searching);
			if (k > 0)
				s2 = s2 + " " + s1;
			s1.erase();
		}
		i++;
	}
	cout << s2 << endl;
	return s2;
}


void outtxt(string str1,string str2,string str3)
{
	ofstream out;
	string namefile;
	cout << "Enter position : ";
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
		if (str2.length() != 0)
		{
			for (int i = 0; i < str2.length(); i++)
			{
				out << str2[i];
				j++;
				if (j > 75 && str2[i] == ' ')
				{
					out << "\n";
					j = 0;
				}
			}
		}
		if (str3.length() != 0)
		{
			for (int i = 0; i < str3.length(); i++)
			{
				out << str3[i];
				j++;
				if (j > 75 && str3[i] == ' ')
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


void outtxt2(string str1, string str2)
{
	ofstream out;
	out.open("z3.txt");
	int j = 0;
	if (out.is_open())
	{
		out << "\n";
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
		if (str2.length() != 0)
		{
			for (int i = 0; i < str2.length(); i++)
			{
				out << str2[i];
				j++;
				if (j > 75 && str2[i] == ' ')
				{
					out << "\n";
					j = 0;
				}
			}

		}
		cout << "Completed " << endl;
	}
	else
		cout << "The file was not opened !!!" << endl;
	out.close();
}


void searchpar(string str1, string word)
{
	int k,pos1,pos2;
	k = find(str1, word);
	try
	{
		if (k == 0)
			throw 1;
		if (k == 1)
			throw 2;
		pos1=str1.find(word)+word.length();
		pos2 = str1.rfind(word)-9;
		str1.erase(pos1, pos2);
		outtxt2(word, str1);
	}
	catch (int e)
	{
		if (e == 0)
			cout << "There is no such word in the line" << endl;
		if (e == 1)
			cout << "Occurs only once" << endl;
	}
}


int kilword(string str1)
{
	int i = 0, k = 0;
	string s;
	while (i < str1.length())
	{
		
		if ((str1[i] == ' ' || str1[i] == ',' || str1[i] == '.')&&s.length()!=0)
		{
			k++;
			s.erase();
		}
		else
		s = s + str1[i];
		i++;
	}
	return k;
}


string filling(string str1)
{
	int q,i=0,j=0;
	q = kilword(str1);
	ifstream in("t.txt");
	string s1,str2,str3;
	if (in.is_open())
	{
		while (i<q)
		{
			getline(in, str2);
			j = 0;
			while (j < str2.length())
			{
				str3 = str3 + str2[j];

				if (str2[j] == ' ')
				{
					i++;
					s1 = s1 + " " + str3;
					str3.erase();

					if (i == q)
					{
						i++;
						break;
					}
				}
				j++;
			}
		}
	}
	else
		cout << "file not open!!!" << endl;
	in.close();
	return s1;
}

//сортування 
void sort2(string& s3)
{
	int maxslv,maxbkv;
	maxslv = kilword(s3);
	string s1, maxword1;
	int i = 0;

	while (i < s3.length())
	{
		s1 = s1 + s3[i];

		if (s3[i] == ' ')
		{
			if (s1.length() > maxword1.length())
			{
				maxword1 = s1;
			}
			s1.erase();
		}
		i++;
	}
	maxbkv = maxword1.length()-1;
	char** a = new char* [maxslv];
	for (i = 0; i < maxslv; i++)
	{
		a[i] = new char[maxbkv];
	}
	int j,i2;
	i = 0;
	i2 = 0;
	while (i < s3.length())
	{
		if (s3[i] == ' ' || s3[i] == ',' || s3[i] == '.')
		{
			if(s1.length()!=0){
				for (j = 0; j < s1.length(); j++)
				{
					a[i2][j] = tolower(s1[j]);
				}
				for (j = j; j < maxbkv; j++)
				{
					a[i2][j] = '"';
				}
				i2++;
			}
			s1.erase();
		}
		else
			s1 = s1 + s3[i];
		i++;
	}
	string st1, st2;
	for (i = 0; i < maxslv; i++)
	{
		st1.erase();
		
		for (j = 0; j < maxbkv; j++)
		{
			if (a[i][j] != '"')
				st1 = st1 + a[i][j];
		}
		for (i2 = i+1; i2 < maxslv; i2++)
		{
			st2.erase();
			for(j=0;j<maxbkv;j++)
			{ 
				if (a[i2][j] != '"')
					st2 = st2 + a[i2][j];
			}
			if (st1 >= st2)
			{
				swap(a[i], a[i2]);
			}
		}
	}

	s3.erase();
	for (i = 0; i < maxslv; i++)
	{
		for (j = 0; j < maxbkv; j++)
		{
			if (a[i][j] != '"')
				s3 = s3 + a[i][j];
		}
		s3 = s3 + " ";
	}
}

void dels(string& s3)
{
	int i = 0;
	while (i < s3.length())
	{
		if (s3[i] == ' ' && s3[i + 1] == ' ')
			s3.erase(i, 1);
		i++;
	}
}

void last(string str1)
{
	string s1;
	s1 = filling(str1);
	string s2(s1);
	string s3;
	s3 = s1 + " " + s2 + " ";
	dels(s3);
	sort2(s3);
	int j=0;
	ofstream out;
	out.open("z4.txt");
	if (out.is_open())
	{
		if (s1.length() != 0)
		{
			for (int i = 0; i < s1.length(); i++)
			{
				out << s1[i];
				j++;
				if (j > 75 && s1[i] == ' ')
				{
					out << "\n";
					j = 0;
				}
			}
			out << "\n";
		}
		if (s2.length() != 0)
		{
			for (int i = 0; i < s2.length(); i++)
			{
				out << s2[i];
				j++;
				if (j > 75 && s2[i] == ' ')
				{
					out << "\n";
					j = 0;
				}
			}
			out << "\n";
		}
		if (s3.length() != 0)
		{
			for (int i = 0; i < s3.length(); i++)
			{
				out << s3[i];
				j++;
				if (j > 75 && s3[i] == ' ')
				{
					out << "\n";
					j = 0;
				}
			}
		}
		cout << "Completed " << endl;
	}
	else
		cout << "The file was not opened !!!" << endl;
	out.close();
}

void Funcs()
{
	cout << endl;
	cout << "|                       Меню                       |" << endl;
	cout << "1. Якщо слова мають більше двох голосних літер" << endl;
	cout << "2. Визначити 3 найдовші слова" << endl;
	cout << "3. Вивести на екран тільки ті речення, що містять задане з клавіатури слово" << endl;
	cout << "4. Запис в файл" << endl;
	cout << "5. Видалити всі символи між першим на останнім місцезнаходженням вказаного слова" << endl;
	cout << "6. Об’єднати рядки s1 та s2 в рядок s3 та розмістити всі слова у алфавітному порядку" << endl;
	cout << "7. Вихід" << endl;
}

int main()
{
	
	setlocale(LC_CTYPE, "ukr");
	cout << " А , Б , В , Г , Д  , Є" << endl;
	string str1,str2,str3,word("your"),s1,s2,s3;
	txt(str1);
	int s = 0;
	Funcs();
	while (s != 7) {
		cin >> s;
		switch (s) {
		case 1:
			coping(str1);
			cout << endl << "Pres any kay" << endl;
			break;
		case 2:
			str2=maxwords(str1);
			cout << endl << "Pres any kay" << endl;
			break;
		case 3:
			str3 = find2(str1);
			cout << endl << "Pres any kay" << endl;
			break;
		case 4:
			outtxt(str1, str2, str3);
			cout << endl << "Pres any kay" << endl;
			break;
		case 5:
			searchpar(str1, word);
			cout << endl << "Збереженно в z3.txt" << endl;
			cout<< "Pres any kay" << endl;
			break;
		case 6:
			last(str1);
			cout << endl << "Збереженно в z4.txt" << endl;
			cout<< "Pres any kay" << endl;
			break;
		case 7:
			cout << "Програма завершенна." << endl;
			break;
		default:cout << "Введіть коректне значення" << endl;
			cout<< "Pres any kay"; break;
		}
		_getch();
		system("cls");
		Funcs();
	}
	_getch();
	return 0;
}