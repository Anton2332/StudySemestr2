#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

struct stack{
	float d;
	stack *next;
} *root;

void print()//виведення списку
{
	stack *c=root;
	cout<<"Output list : ";
	while(c!=0)
	{
		cout<<c->d<<" ";
		c=c->next;
	}
	cout<<endl;
}

void func_dod(){
	if(root==0)
	{
		stack *k=new stack;
		k->d=(rand()%171-60)*0.1;
		k->next=0;
		root=k;
	}
	else
	{
		stack *c=new stack;
	
		c->d=(rand()%171-60)*0.1;
		c->next=root;
		root=c;
	}
}

void func_del(){
	stack *t=new stack;
	t=root;
	root=root->next;
	delete t;
}

int per(float x)
{
	int k=0;
	stack *c=root;
	while(c!=0)
	{
		cout<<c->d<<" ";
		c=c->next;
		if(c->d<x)
		{
			k++;
			break;
		}
	}
	return k;
}

float ser(){
	stack *c=new stack;
	float ser1=0;
	int k=0;
	while (c!=0)
	{
		k++;
		ser1=ser1+c->d;
		
		c=c->next;
	}
	
	return ser1;
}

int main(){
	
	srand(time(NULL));
	int n,i;
	cout<<"n = ";
	cin>>n;
	for(i=0;i<n;i++)
	func_dod();
	print();
	
	float m;
	cout<<"m = ";
	cin>>m;
	int k;
	
	
	while(k==0)
	{
		k=per(m);
		func_del();
		
		if(k==0)
		break;
	}
	print();
	float ser2;
	ser2=ser();
	cout<<endl<<"ser = ";
	cout<<ser2<<endl;
	
	
	
	
	

	
	return 0;
}
