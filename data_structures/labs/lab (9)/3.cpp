#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

struct queue{
	int d;
	queue *next;
}*first,*last;

void print()//виведення списку
{
	queue *c=first;
	cout<<"Output list : ";
	while(c!=0)
	{
		cout<<c->d<<" ";
		c=c->next;
	}
	cout<<endl;
}

void func_dod(){
	if(first==0)
	{
		queue *k=new queue;

		k->d=rand()%9;
		k->next=0;
		first=k;
		last=k;
	}
	else
    {
		queue *c=new queue;
	
		c->d=rand()%9;
		c->next=0;
		last->next=c;
		last=c;
	}

}

void add_mid1()
{
	queue *c=first;
	while(c!=0)
	{
		if(last->d%2==0)
		{
			queue *c1=new queue;
			c1->d=100;
			last->next=c1;
			c1->next=0;
			last=c1;
		}
		else
		if(c->d%2==0)
		{
			queue *c2=new queue;
			c2->d=100;
			c2->next=c->next;
			c->next=c2;
		}
		c=c->next;
	}
}

void func_del(){
	queue *p=new queue;
	p=first;
	first=first->next;
	delete p;
}

void geom(){
	queue *c=first;
	int k=0,sum=1;
	while(c!=0)
	{
		sum=sum*c->d;
		k++;
		c=c->next;
	}
	cout<<"geom = "<<pow(sum,1/k)<<endl;
	
}

int main(){
		srand(time(NULL));
	int n,i;
	cout<<"n = ";
	cin>>n;
	for(i=0;i<n;i++)
	func_dod();
	print();
	add_mid1();
	print();
	geom();
	
	
	return 0;
}
