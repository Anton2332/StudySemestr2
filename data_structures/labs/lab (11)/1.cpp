#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

struct tree
{
	int d;
	tree *left ,*right;
}*root,*root2,*root3;


tree *first(int x)
{
	tree *c=new tree;
	c->d=x;
    c->left=0;
    c->right=0;
    return c;
}

tree *insert(tree *root ,int x)
{
	if(!root)
	{
		root=first(x);
	}
	else
	{
		if(x<root->d)
		{
			root->left=insert(root->left,x);
		}
		else
		{
			root->right=insert(root->right,x);
		}
	}
	return root;
}

void del(tree *p)
{
	if(p!=0)
	{
		del(p->left);
		del(p->right);
		delete p;
	}
	else
	return;
}

void print ( tree *p)
{
	if(p)
	{
		print(p->left);
		cout<<p->d<<" ";
		print(p->right);
	}
}
int  search2(tree *p,int b)
{
	
	int k=0;
	
	while(p){
	if(p->d==b)
	{
		cout<<p->d;
		k++;
		break;
	}
	else
	{
		if(b>p->d)
		{
			p=p->right;
		}
		else
		p=p->left;
	}
}
	
	return k;
	

}

void insert2(int n)
{
	int a,b,q=0;
	while(q<100)
	{
		cout<<"a = ";
	    cin>>a;
	    cout<<"b = ";
	    cin>>b;
	    if(b-a>=n)
	   	break;
		else
		cout<<"Введіть коректне значення !!! "<<endl;
	}
	
	int x,k,i;
	for(i=0;i<n;i++){
		
	while(k<100){
	x=rand()%(b-a)+(a+1);
	k=search2(root,x);
	if(k==0)
	break;
    }
    
    
    if(root==0)
		{
			root=first(x);
		}
		else
		{
			insert(root,x);
		}
    }
	
	
}



tree *search(tree *p,int b)
{
	
	int k=0;
	
	while(p){
	if(p->d==b)
	{
		cout<<p->d;
		k++;
		break;
	}
	else
	{
		if(b>p->d)
		{
			p=p->right;
		}
		else
		p=p->left;
	}
}
    
    if(k==0)
    cout<<endl<<"NO"<<endl;
    else
	cout<<endl<<"YES"<<endl;
	
	return p;
	

}
void sort ( tree *p)
{
	if(p)
	{
		sort(p->left);
		if(p->d%2==0)
		{
			if(root2==0)
		{
			root2=first(p->d);
		}
		else
		{
			insert(root2,p->d);
		}
		}
		else
		{
			if(root3==0)
		{
			root3=first(p->d);
		}
		else
		{
			insert(root3,p->d);
		}
		}
		sort(p->right);
	}
}

int height(tree *w) {
 
     int h1,h2;
 
    if(w==NULL) 
	return (-1);
    else {
 
      h1 = height(w->left);
 
      h2 = height(w->right);
 
       if(h1>h2) return (1 + h1);
 
       else  return (1 + h2); } 
}


int main(){
	srand(time(NULL));
	setlocale(LC_CTYPE, "ukr");
	int f,n,h=0;
	cout<<"n = ";
	cin>>n;
	
		cout<<"1.Ввести вручну "<<endl;
	    cout<<"2.Ввести за допомогою генератора псевдо випадкових числе в діапазоні від a до b "<<endl;
	    cout<<"3.Вихід "<<endl;
	    cin>>h;
	    switch(h)
	    {
	    	case 1:
			for(int i=0;i<n;i++)
	    {
		if(root==0)
		{
			cout<<"F = ";
			cin>>f;
			root=first(f);
		}
		else
		{
			cout<<"F = ";
			cin>>f;
			insert(root,f);
			search(root,f);
		}
	    }
	    break;
		case 2:insert2(n);
		break;
		case 3: cout<<"Завершення програми ....."<<endl;
		break;
	    default : cout<<"В наступний раз введіть коректне значення !!!"<<endl;
		}
		system("cls");
		cout<<"Дерево : ";
		print(root);
		cout<<endl;
		sort(root);
		cout<<"Дерево парних : ";
	    print(root2);
	    cout<<endl;
	    cout<<"Дерево не парних : ";
	    print(root3);
	    cout<<endl<<"Глибина парного дерева : ";
	    cout<<height(root2);
	    cout<<endl<<"Глибина не парного дерева : ";
	    cout<<height(root3);
	    cout<<endl<<"Глибина основного дерева : ";
	    cout<<height(root);
	    
	    
	    del(root);
	    del(root2);
	    del(root3);
	
	return 0;
}






