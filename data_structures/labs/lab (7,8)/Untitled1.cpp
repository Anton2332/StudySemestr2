#include <iostream>
#include<conio.h>

using namespace std;

struct list{
	int d;
	list *next;
}*first ,*last;

void add_one(){
	list *c;
	c=new list;
	cout<<"Введіть 1 елемент : "; 
	cin>>c->d;
	c->next=0;
	first=c;
	
	last=c;
}

void print()//виведення списку
{
	list *c=first;
	cout<<"Output list : ";
	while(c!=0)
	{
		cout<<c->d<<" ";
		c=c->next;
	}
	cout<<endl;
}

void add_begin(int x)//Додавання в початок елемент X
{
    list *c=new list;
	c->d=x;
	c->next=first;
	first=c;	
}

void add_end(int x)//Додавання в кінець елемента X
{
	list *c=new list;
	c->d=x;
	c->next=0;
	if(first==0)
	first=c;
	else
	last->next=c;
	last=c;
}

void add_mid1(int s,int x)//Додає елемент x після елемента s
{
	list *c=first;
	while(c->next!=0)
	{
		if(last->d==s)
		{
			list *c1=new list;
			c1->d=x;
			last->next=c1;
			c1->next=0;
			last=c1;
		}
		else
		if(c->d==s)
		{
			list *c2=new list;
			c2->d=x;
			c2->next=c->next;
			c->next=c2;
		}
		c=c->next;
	}
}

void per(int x)
{
	int q=0;
	list *c=first;
	if(first->d==x)
	q++;
	while(c->next!=0)
	{
		if(c->d==x)
		q++;	
		c=c->next;
	}
	if(q==0)
	cout<<"Такого елемента не знайдено !!!"<<endl;
	else
	cout<<"Елемент знайдено !!!"<<endl;
}

void del_mid(int s)//Видаляє елемент s
{
	int f=0;
	list *c=first;
	while (c->next!=0)
	{
		if(c->next->d==s)
		{
			list *c1;
			c1=c->next;
			c->next=c1->next;
			f++;
			cout<<"Node "<<c1->d<<" del"<<endl;
            delete c1; 
		}
		
		c=c->next;
		if(f==0)
		cout<<"Такого вузла не знайдено !!!"<<endl;
	}
}

void print_menu()
{
	cout<<"--------------------------------------------------------"<<endl;
	cout<<"-------------- МЕНЮ ДЛЯ РОБОТИ З СПИСКОМ ---------------"<<endl;
	cout<<"--------------------------------------------------------"<<endl;
	cout<<"1. Ввід першого елемента списку "<<endl;
	cout<<"2. Вставка елемента в початок списку "<<endl;
	cout<<"3. Вставка елемента в кінець списку "<<endl;
	cout<<"4. Вставка елемента після заданого "<<endl;
	cout<<"5. Вставка елемента перед заданим "<<endl;
	cout<<"6. Пошук потрібного вузла "<<endl;
	cout<<"7. Видалення вузла з вказаним значенням "<<endl;
	cout<<"8. Перегляд списку "<<endl;
	cout<<"9. Вихід"<<endl;
	cout<<"--------------------------------------------------------"<<endl;
	
}

void add_mid2(int s ,int x)
{
	list *c=first;
	while (c->next!=0)
	{
		if(first->d==s)
		{
			list *c1=new list;
	        c1->d=x;
	        c1->next=c;
	        c=c1;
		}
		else
		if(c->next->d==s)
		{
			list *c2=new list;
			c2->d=x;
			c2->next=c->next->next;
			c->next=c2;
		}
		c=c->next;
	}
	
	
	
}







int main(){
	setlocale(LC_CTYPE, "ukr");

	int k,q=0,x,s;
	do{
		print_menu();
		if(q==0)
		{
			do{
			cout<<"Потрібно ввести перший елемент для цього оберіть 1!!!"<<endl;
			cout<<"Зробіть свіх вибір : ";
			cin>>k;
			q++;
		}while(k!=1);
	}
		else
		{
			cout<<"Зробіть свіх вибір : ";
			cin>>k;
		}
		
		switch(k)
		{
			case 1:
			add_one();
			system("cls");
			break;
			case 2:
			cout<<"Введіть елемент який хочете вставити : ";
			cin>>x;
			add_begin(x);
			system("cls");
			break;
			
			case 3:
			cout<<"Введіть елемент який хочете вставити : ";
			cin>>x;
			add_end(x);
			system("cls");
			break;
			case 4:
			cout<<"Введіть після якого елемента вставити :";
			cin>>s;
			cout<<"Введіть який елемент вставити : ";
			cin>>x;
			add_mid1(s,x);
			system("cls");
			break;
			case 5:
				cout<<"Введіть після якого елемента вставити :";
			cin>>s;
			cout<<"Введіть який елемент вставити : ";
			cin>>x;
			system("cls");
			add_mid2(s,x);
				break;
			case 6:
				cout<<"Введіть потрібний вузол : ";
				cin>>x;
				system("cls");
				per(x);
				break;
			case 7:
				cout<<"Введіть елемент який потрібно видалити : ";
				cin>>s;
				del_mid(s);
				system("cls");
			    break;
			case 8:
				system("cls");
			print();
			break;
			case 9:system("cls");cout<<endl<<"Програму завершено!!!";system("cls");break;
			
			
			default:cout<<"Введіть коректне значення !!!";break;	
		}
		
	}while(k!=9);
	
	return 0;
}
