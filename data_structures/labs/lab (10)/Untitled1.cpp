#include <conio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct list2{
	string std;
	int n;
	float price;
	float var;
	list2 *next;
	list2 *prev;
}*first,*last;

void print()//виведення списку
{
	list2 *c=first;
	cout<<"Output list : ";
	while(c!=0)
	{
		cout<<c->std<<" - "<<c->price<<" - "<<c->n<<" - "<<c->var<<endl;
		c=c->next;
	}
	cout<<endl;
}
void print2()//виведення списку
{
	list2 *c=last;
	cout<<"Output list : ";
	while(c!=0)
	{
		cout<<c->std<<" - "<<c->price<<" - "<<c->n<<" - "<<c->var<<endl;
		c=c->prev;
	}
	cout<<endl;
}

void func_dod1(){//Додавання в кінець списку 
	if(first==0)
	{
		list2 *c=new list2;
		cout<<"Name : ";
		cin.get();
		getline(cin,c->std);
		cout<<"Number : ";
		cin>>c->n;
		cout<<"Price : ";
		cin>>c->price;
		c->var=c->price*c->n;
		c->next=0;
		c->prev=0;
		first=c;
		last=c;
	}
	else
	{
		list2 *c2=new list2;
		cout<<"Name : ";
		cin.get();
		getline(cin,c2->std);
		cout<<"Number : ";
		cin>>c2->n;
		cout<<"Price : ";
		cin>>c2->price;
		c2->next=0;
		c2->prev=last;
		last->next=c2;
		last=c2;
	}
	
}

void func_dod2(){//Додавання в початок списку
	if(first==0)
	{
		list2 *c=new list2;
		cout<<"Name : ";
		cin.get();
		getline(cin,c->std);
		cout<<"Number : ";
		cin>>c->n;
		cout<<"Price : ";
		cin>>c->price;
		c->next=0;
		c->prev=0;
		first=c;
		last=c;
	}
	else
	{
		list2 *c2=new list2;
		cout<<"Name : ";
		cin.get();
		getline(cin,c2->std);
		cout<<"Number : ";
		cin>>c2->n;
		cout<<"Price : ";
		cin>>c2->price;
		c2->prev=0;
		c2->next=first;
		first->prev=c2;
		first=c2;
	}
}

void add_mid(){
	
	
	list2 *c=first;
	list2 *c2=new list2;
	list2 *c1=new list2;
	    cout<<"Name : ";
	    cin.get();
		getline(cin,c2->std);
		cout<<"Number : ";
		cin>>c2->n;
		cout<<"Price : ";
		cin>>c2->price;
		c2->var=c2->price*c2->n;
		
	if(c->price>c2->price){
		c2->prev=0;
		c2->next=first;
		first->prev=c2;
		first=c2;
		}
    else
	{
			c2->next=0;
			last->next=c2;
			c2->prev=last;
			last=c2;
		
		}
		
}

void add_mid2(){
	
	
	list2 *c=first;
	list2 *c2=new list2;
	list2 *c1=new list2;
	    cout<<"Name : ";
	    cin.get();
		getline(cin,c2->std);
		cout<<"Number : ";
		cin>>c2->n;
		cout<<"Price : ";
		cin>>c2->price;
		c2->var=c2->price*c2->n;
		
	int k=0;
	while (c!=0)
	{
		
		if(c->price<c2->price&&c2->price<c->next->price)
		{
			c2->next=c->next;
			c->next=c2;
			c2->prev=c;
			c=c->next->next;
			c->prev=c2;
			k++;
			break;
		}
		else
        	if(c->next->price==last->price)
        	break;
        	
        	c=c->next;
		       
    }
    
    if(k==0)
    {
    	c2->next=0;
		last->next=c2;
		c2->prev=last;
		last=c2;
		
	}
   
	
}



int main(){
	int i,n;
	cout<<"N = ";
	cin>>n;
	i=0;
	while (i<n)
    {
    	if(i==0)
    	{
    		func_dod1();
		}
		else
		if(i==1)
		{
			add_mid();
		}
    	else
    	if(i>1)
    	{
    		add_mid2();
		}
    	
    	
    i++;	
	}	
    
	print();
	print2();
	
	getch();
	return 0;
}
