#include <iostream>
#include <conio.h>

using namespace std;

struct stack{
	char d;
	stack *next;
} *root;
struct stack2{
	char d;
	stack2 *next;
} *root2;

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
void print2()//виведення списку
{
	stack2 *c2=root2;
	cout<<"Output list : ";
	while(c2!=0)
	{
		cout<<c2->d<<" ";
		c2=c2->next;
	}
	cout<<endl;
}

void func_dod(){
	if(root==0)
	{
		stack *k=new stack;

		cin>>k->d;
		k->next=0;
		root=k;
	}
	else
	{
		stack *c=new stack;

		cin>>c->d;
		c->next=root;
		root=c;
	}
}





int main(){
	int n,i;
	cout<<"n = ";
	cin>>n;
	for(i=0;i<n;i++)
	func_dod();
	print();
	stack *c=root;
	stack2 *c2=root2;
	while(c!=0)
	{
		if(c->d=='p'||c->d=='k'||c->d=='t'||c->d=='d')
		{
			c2->d=c->d;
			c2=c2->next;
		}
		c=c->next;
	}
	print2();
	
	
	
	return 0;
}
