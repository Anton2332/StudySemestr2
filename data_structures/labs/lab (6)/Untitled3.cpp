#include<iostream>
#include<conio.h>
#include<string>
#include<string.h>


using namespace std;

struct list{
	string s1;
	float r,v;
	list *next;
};



int main(){
	setlocale(LC_ALL, "Ukrainian");
	int n,i;
	cout<<"n = ";
	cin>>n;
    list *first,*last;
	list *p;
    p=first;
    for( i=0;i<n;i++)
	{
	list *ci=new list;
	cout<<"��� : ";
	cin>>ci->s1;
	cout<<"������ ��� : ";
	cin>>ci->r;
	cout<<"������ ���� : ";
	cin>>ci->v;
    ci->next=0;
	p->next=ci;
	p=p->next;
    }
	
	p=first;
    while(p!=NULL)
    {
    	cout<<p->s1<<" - "<<p->r<<" - "<<p->v<<endl;
    	p=p->next;
	}
		
			
    getch();
    return 0;
 }
