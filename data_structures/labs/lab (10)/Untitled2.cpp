#include <conio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct list{
	string std;
	int a[3];
	list *next;
}*first,*last;

void print()//виведення списку
{
	list *c=first;
	cout<<"Output list : ";
	while(c!=0)
	{
		cout<<c->std<<" - "<<c->a[0]<<" "<<c->a[1]<<" "<<c->a[2]<<endl;
	    if(c->std==last->std)
	    break;
	    c=c->next;
	}
	cout<<endl;
}
void ser()//виведення списку
{
	list *c=first;
    float sum=0;
    int k=0;
	while(c!=0)
	{
		sum= sum+c->a[0]+c->a[1]+c->a[2];
		k++;
		k++;
		k++;
	    if(c->std==last->std)
	    break;
	    c=c->next;
	}
	cout<<"ser = "<<float(sum)/float(k)<<endl;
}

void func_dod1(){
	if(first==0)
	{
		list *c=new list;
	    cout<<"name : ";
	    cin.get();
		getline(cin,c->std);
		cout<<"arr a : "<<endl;
		cin>>c->a[0];
		cin>>c->a[1];
		cin>>c->a[2];
	    c->next=0;
		first=c;
		first->next=first;
		last=first;
	}
	else
	{
		list *c2=new list;
		cout<<"name : ";
		cin.get();
		getline(cin,c2->std);
		cout<<"arr a : "<<endl;
		cin>>c2->a[0];
		cin>>c2->a[1];
		cin>>c2->a[2];
		c2->next=first;
		last->next=c2;
		first=c2;
	}
}









int main(){
	int i,n;
	cout<<"N = ";
	cin>>n;
	while(i<n){
		func_dod1();
		i++;
	}
	print();
	ser();
	
	getch();
	return 0;
}
