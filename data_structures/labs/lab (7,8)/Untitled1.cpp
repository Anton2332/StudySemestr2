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
	cout<<"������ 1 ������� : "; 
	cin>>c->d;
	c->next=0;
	first=c;
	
	last=c;
}

void print()//��������� ������
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

void add_begin(int x)//��������� � ������� ������� X
{
    list *c=new list;
	c->d=x;
	c->next=first;
	first=c;	
}

void add_end(int x)//��������� � ����� �������� X
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

void add_mid1(int s,int x)//���� ������� x ���� �������� s
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
	cout<<"������ �������� �� �������� !!!"<<endl;
	else
	cout<<"������� �������� !!!"<<endl;
}

void del_mid(int s)//������� ������� s
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
		cout<<"������ ����� �� �������� !!!"<<endl;
	}
}

void print_menu()
{
	cout<<"--------------------------------------------------------"<<endl;
	cout<<"-------------- ���� ��� ������ � ������� ---------------"<<endl;
	cout<<"--------------------------------------------------------"<<endl;
	cout<<"1. ��� ������� �������� ������ "<<endl;
	cout<<"2. ������� �������� � ������� ������ "<<endl;
	cout<<"3. ������� �������� � ����� ������ "<<endl;
	cout<<"4. ������� �������� ���� �������� "<<endl;
	cout<<"5. ������� �������� ����� ������� "<<endl;
	cout<<"6. ����� ��������� ����� "<<endl;
	cout<<"7. ��������� ����� � �������� ��������� "<<endl;
	cout<<"8. �������� ������ "<<endl;
	cout<<"9. �����"<<endl;
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
			cout<<"������� ������ ������ ������� ��� ����� ������ 1!!!"<<endl;
			cout<<"������ ��� ���� : ";
			cin>>k;
			q++;
		}while(k!=1);
	}
		else
		{
			cout<<"������ ��� ���� : ";
			cin>>k;
		}
		
		switch(k)
		{
			case 1:
			add_one();
			system("cls");
			break;
			case 2:
			cout<<"������ ������� ���� ������ �������� : ";
			cin>>x;
			add_begin(x);
			system("cls");
			break;
			
			case 3:
			cout<<"������ ������� ���� ������ �������� : ";
			cin>>x;
			add_end(x);
			system("cls");
			break;
			case 4:
			cout<<"������ ���� ����� �������� �������� :";
			cin>>s;
			cout<<"������ ���� ������� �������� : ";
			cin>>x;
			add_mid1(s,x);
			system("cls");
			break;
			case 5:
				cout<<"������ ���� ����� �������� �������� :";
			cin>>s;
			cout<<"������ ���� ������� �������� : ";
			cin>>x;
			system("cls");
			add_mid2(s,x);
				break;
			case 6:
				cout<<"������ �������� ����� : ";
				cin>>x;
				system("cls");
				per(x);
				break;
			case 7:
				cout<<"������ ������� ���� ������� �������� : ";
				cin>>s;
				del_mid(s);
				system("cls");
			    break;
			case 8:
				system("cls");
			print();
			break;
			case 9:system("cls");cout<<endl<<"�������� ���������!!!";system("cls");break;
			
			
			default:cout<<"������ �������� �������� !!!";break;	
		}
		
	}while(k!=9);
	
	return 0;
}
